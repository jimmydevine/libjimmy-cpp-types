#pragma once


#include <iostream>
#include <memory>



/***********************************************************************************************************************************
* libjimmy::types namespace
***********************************************************************************************************************************/
namespace libjimmy::types {
	
	template <class T> class Sequence;
	template <class T> class SequenceItem;
	
	template <class T> class SequenceItemPtr : public std::shared_ptr<SequenceItem<T>> {
		public:
			using std::shared_ptr<SequenceItem<T>>::shared_ptr;
			using std::shared_ptr<SequenceItem<T>>::operator=;
			
			bool set() {
				return std::shared_ptr<SequenceItem<T>>::operator bool();
			}
			
			operator T&()          { return *this->get(); }
			operator T&() const    { return *this->get(); }
			T& operator=(const T& value) { return *this->get(); }
	};
	
	template<typename C, typename R, typename T> inline std::basic_ostream<C, R>& operator<<(std::basic_ostream<C, R>& os, const SequenceItemPtr<T>& item) {
		os << *item.get();
		return os;
	}
	
	template <class T> struct SequenceItem {
		Sequence<T> *seq;
		SequenceItemPtr<T> self;
		SequenceItemPtr<T> last;
		SequenceItemPtr<T> next;
		T item;
		
		[[nodiscard]] static SequenceItemPtr<T> create(Sequence<T>* _seq, T _item) {
			SequenceItemPtr<T> item_ptr = SequenceItemPtr<T>(new SequenceItem<T>(_seq, _item));
			item_ptr->setptr(item_ptr);
			return item_ptr;
		}
		
		[[nodiscard]] static SequenceItemPtr<T> create(Sequence<T>* _seq) {
			SequenceItemPtr<T> item_ptr = SequenceItemPtr<T>(new SequenceItem<T>(_seq));
			item_ptr->setptr(item_ptr);
			return item_ptr;
		}
		
		SequenceItem<T>() { }
		SequenceItem<T>(Sequence<T>*& _seq) : seq(_seq) { }
		SequenceItem<T>(Sequence<T>*& _seq, T& _item) : seq(_seq), item(_item) { }
		
		void setptr(SequenceItemPtr<T>& item_ptr) {
			self = item_ptr;
		}
		
		SequenceItemPtr<T> getptr() {
			return self;
		}
		
		SequenceItemPtr<T> append(SequenceItemPtr<T> sitem) {
			sitem->seq = seq;
			sitem->last = getptr();
			if (!next.set())
			{
				next = sitem;
				seq->tail = sitem;
			}
			else
			{
				sitem->next = next;
				next->last = sitem;
			}
			seq->_size++;
			return sitem;
		}
		
		SequenceItemPtr<T> append() {
			return append(create(seq));
		}
		
		SequenceItemPtr<T> append(T item) {
			return append(create(seq, item));
		}
		
		SequenceItemPtr<T> push(SequenceItemPtr<T> sitem) {
			return append(sitem);
		}
		
		SequenceItemPtr<T> push(T item) {
			return append(item);
		}
		
		SequenceItemPtr<T> insert(SequenceItemPtr<T> sitem) {
			sitem->seq = seq;
			sitem->next = getptr();
			if (!last.set())
			{
				last = sitem;
				seq->head = sitem;
			}
			else
			{
				sitem->last = last;
				last->next = sitem;
			}
			seq->_size++;
			return sitem;
		}
		
		SequenceItemPtr<T> insert(T item) {
			return insert(create(seq, item));
		}
		
		SequenceItemPtr<T> unshift(SequenceItemPtr<T> sitem) {
			return insert(sitem);
		}
		
		SequenceItemPtr<T> unshift(T item) {
			return insert(item);
		}
		
		SequenceItemPtr<T> detach() {
			if (last.set())
			{
				last->next = next;
			}
			else
			{
				seq->head = next;
			}
			
			if (next.set())
			{
				next->last = last;
			}
			else
			{
				seq->tail = last;
			}
			
			last.reset();
			next.reset();
			
			seq->_size--;
			
			return getptr();
		}
		
		operator T&()       { return item; }
		operator T&() const { return item; }
		T& operator *()     { return item; }
	};
	
	template <class T> struct SequenceIterator {
		SequenceIterator<T>(SequenceItemPtr<T> _ptr) : ptr(_ptr) { }
		
		SequenceItemPtr<T> operator*() const {
			return ptr;
		}
		SequenceItemPtr<T>* operator->() {
			return &ptr;
		}
		
		SequenceIterator& operator++() {
			ptr = ptr->next; return *this;
		}
		
		SequenceIterator<T> operator++(int) {
			SequenceIterator<T> tmp = *this;
			++(*this);
			return tmp;
		}
		
		friend bool operator== (const SequenceIterator<T>& a, const SequenceIterator<T>& b) {
			return a.ptr == b.ptr;
		};
		
		friend bool operator!= (const SequenceIterator<T>& a, const SequenceIterator<T>& b) {
			return a.ptr != b.ptr;
		};
		
		private:
			SequenceItemPtr<T> ptr;
	};
	
	template <class T> struct Sequence {
			SequenceItemPtr<T> head;
			SequenceItemPtr<T> tail;
			size_t _size;
			
			Sequence<T>() : _size(0) { }
			
			Sequence<T>(std::initializer_list<T> list) {
				_size = 0;
				for (auto item : list)
				{
					append(item);
				}
			}
			
			SequenceItemPtr<T> append(SequenceItemPtr<T> sitem) {
				if (!tail.set())
				{
					_size++;
					head = tail = sitem;
				}
				else
				{
					tail->append(sitem);
				}
				return sitem;
			}
			
			SequenceItemPtr<T> append() {
				return tail.set() ? tail->append() : append(SequenceItem<T>::create(this));
			}
			
			SequenceItemPtr<T> append(T item) {
				return tail.set() ? tail->append(item) : append(SequenceItem<T>::create(this, item));
			}
			
			SequenceItemPtr<T> push(T item) {
				return append(item);
			}
			
			SequenceItemPtr<T> pop() {
				return tail.set() ? tail->detach() : tail;
			}
			
			SequenceItemPtr<T> front() {
				return head;
			}
			
			SequenceItemPtr<T> back() {
				return tail;
			}
			
			SequenceItemPtr<T> insert(SequenceItemPtr<T> sitem) {
				if (!head.set())
				{
					_size++;
					head = tail = sitem;
				}
				else
				{
					head->insert(sitem);
				}
				return sitem;
			}
			
			SequenceItemPtr<T> insert(T item) {
				return head.set() ? head->insert(item) : insert(SequenceItem<T>::create(this, item));
			}
			
			SequenceItemPtr<T> unshift(T item) {
				return insert(item);
			}
			
			SequenceItemPtr<T> shift() {
				return head.set() ? head->detach() : head;
			}
			
			bool empty() {
				return !head.set();
			}
			
			size_t size() {
				return _size;
			}
			
			SequenceIterator<T> begin() { return SequenceIterator<T>(head); }
			SequenceIterator<T> end()   { return SequenceIterator<T>(tail); }
			
	};
		
		

}

