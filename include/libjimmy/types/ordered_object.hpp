#pragma once



#include "libjimmy/types/sequence.hpp"
#include "libjimmy/types/object.hpp"
#include <initializer_list>
#include <iostream>
#include <algorithm>
#include <utility>


/***********************************************************************************************************************************
* libjimmy::types namespace
***********************************************************************************************************************************/
namespace libjimmy::types {
	
	template <typename K, typename V> class KVPair : public std::pair<K, V> {
		public:
			using std::pair<K, V>::pair;
			
			operator V&()          { return this->value(); }
			//operator V&() const    { return this->second; }
			V& operator=(const V& value) { this->second = value; return this->value(); }
			
			friend bool operator== (const KVPair<K, V>& a, const KVPair<K, V>& b) {
				return a == b;
			};
			
			friend bool operator== (const KVPair<K, V>& a, const V& b) {
				return a.second == b;
			};
			
			friend bool operator== (const V& a, const KVPair<K, V>& b) {
				return a == b.second;
			};
			
			friend bool operator!= (const KVPair<K, V>& a, const KVPair<K, V>& b) {
				return a != b;
			};
			
			friend bool operator!= (const KVPair<K, V>& a, const V& b) {
				return a.second != b;
			};
			
			friend bool operator!= (const V& a, const KVPair<K, V>& b) {
				return a != b.second;
			};
			
			K& key() { return this->first; }
			V& value() { return this->second; }
			
	};
	
	template<typename C, typename R, typename K, typename V> inline std::basic_ostream<C, R>& operator<<(std::basic_ostream<C, R>& os, const KVPair<K, V>& item) {
		os << item.second;
		return os;
	}
	
	template <typename K, typename V> using KVPairPtr = SequenceItemPtr<KVPair<K, V>>;
	
	template <typename K, typename V> struct OrderedObjectIterator {
		OrderedObjectIterator<K, V>(KVPairPtr<K, V> _ptr) : ptr(_ptr) { }
		
		KVPair<K, V> operator*() const {
			return ptr;
		}
		KVPair<K, V>* operator->() {
			return &ptr;
		}
		
		OrderedObjectIterator& operator++() {
			ptr = ptr->next; return *this;
		}
		
		OrderedObjectIterator<K, V> operator++(int) {
			OrderedObjectIterator<K, V> tmp = *this;
			//++(*this);
			ptr = ptr->next;
			return tmp;
		}
		
		friend bool operator== (const OrderedObjectIterator<K, V>& a, const OrderedObjectIterator<K, V>& b) {
			return a.ptr == b.ptr;
		};
		
		friend bool operator== (const OrderedObjectIterator<K, V>& a, const V& b) {
			return a.ptr.set() && a.ptr.second == b;
		};
		
		friend bool operator== (const V& a, const OrderedObjectIterator<K, V>& b) {
			return b.ptr.set() && a == b.ptr.second;
		};
		
		friend bool operator!= (const OrderedObjectIterator<K, V>& a, const OrderedObjectIterator<K, V>& b) {
			return a.ptr != b.ptr;
		};
		
		friend bool operator!= (const OrderedObjectIterator<K, V>& a, const V& b) {
			return a.ptr.set() && a.ptr.second != b;
		};
		
		friend bool operator!= (const V& a, const OrderedObjectIterator<K, V>& b) {
			return b.ptr.set() && a != b.ptr.second;
		};
		
		operator V&()       { return ptr; }
		operator V&() const { return ptr; }
		
		private:
			KVPairPtr<K, V> ptr;
	};
	
		
	/*******************************************************************************************************************************
	* OrderedObjectp class
	*
	* Inherits
	*   Object
	*
	* Description
	*   Modernized wrapper around Object
	*******************************************************************************************************************************/
	template <class K, class V> class OrderedObject {
		public:
			Sequence<KVPair<K, V>>      value_list;
			Object<K, KVPairPtr<K, V>>  value_map;
			
			OrderedObject() { }
			
			OrderedObject(std::initializer_list<std::pair<const K, V>> kvpl) {
				for (auto kvp : kvpl)
				{
					insert(kvp.first, std::move(kvp.second));
				}
			}
			
			/*OrderedObject& operator=(std::initializer_list<std::pair<const K, V>> kvpl) {
				/*for (auto kvp : kvpl)
				{
					emplace(kvp.first, std::move(kvp.second));
				}*
				return *this;
			}
			*/
			
			size_t size() {
				return value_list.size();
			}
			
			bool exists(const K& key) {
				return !(value_map.find(key) == value_map.end());
			}
			
			KVPair<K, V>& operator[](const K& key) {
				if (!exists(key))
				{
					value_map[key] = value_list.append(KVPair<K, V>(key, V()));
				}
				
				return value_map[key];
			}
			
			KVPair<K, V>& insert(const K& key, const V& value) {
				if (!exists(key))
				{
					value_map[key] = value_list.append(KVPair<K, V>(key, value));
				}
				else
				{
					value_map[key] = KVPair<K, V>(key, value);
				}
				
				return value_map[key];
			}
			
			KVPair<K, V>& front() {
				return value_list.front();
			}
			
			KVPair<K, V>& back() {
				return value_list.back();
			}
			
			OrderedObjectIterator<K, V> begin() { return OrderedObjectIterator<K, V>(value_list.front()); }
			OrderedObjectIterator<K, V> end()   { return value_list.back().set() ? OrderedObjectIterator<K, V>(value_list.back()->next) : OrderedObjectIterator<K, V>(value_list.back()); }
			
			void dump_list() {
				std::cout << "[\n";
				for (auto item = value_list.head; item.set(); item = item->next)
				{
					std::cout << "    " << (**item).key() << " : " << (**item).value() << std::endl;
				}
				std::cout << "]\n";
			}
			
			void dump_map() {
				std::cout << "{\n";
				for (auto [k, v] : value_map)
				{
					std::cout << "    " << k << " : " << (**v).second << std::endl;
				}
				std::cout << "}\n";
			}
	};
		
		

}

