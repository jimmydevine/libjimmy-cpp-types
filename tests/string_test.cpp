#include <libjimmy/types/string.hpp>
#include <gtest/gtest.h>
#include <climits>



using namespace libjimmy::types;



TEST(StringTests, TestInitializationFromCStringValue) {
    String value = "value";
    ASSERT_EQ(value, "value");
}

TEST(StringTests, TestInitializationFromSTDStringValue) {
	std::string value1 = "value";
    String value2 = value1;
    ASSERT_EQ(value1, value2);
}

TEST(StringTests, TestInitializationFromSignedChar) {
	signed char pvalue = SCHAR_MIN;
    String value = pvalue;
    ASSERT_EQ(value, std::to_string(SCHAR_MIN));
}

TEST(StringTests, TestInitializationFromUnsignedChar) {
	unsigned char pvalue = UCHAR_MAX;
    String value = pvalue;
    ASSERT_EQ(value, std::to_string(UCHAR_MAX));
}

TEST(StringTests, TestInitializationFromSignedShort) {
	signed short pvalue = SHRT_MIN;
    String value = pvalue;
    ASSERT_EQ(value, std::to_string(SHRT_MIN));
}

TEST(StringTests, TestInitializationFromUnsignedShort) {
	unsigned short pvalue = USHRT_MAX;
    String value = pvalue;
    ASSERT_EQ(value, std::to_string(USHRT_MAX));
}

TEST(StringTests, TestInitializationFromSignedLong) {
	signed long pvalue = LONG_MIN;
    String value = pvalue;
    ASSERT_EQ(value, std::to_string(LONG_MIN));
}

TEST(StringTests, TestInitializationFromUnsignedLong) {
	unsigned long pvalue = ULONG_MAX;
    String value = pvalue;
    ASSERT_EQ(value, std::to_string(ULONG_MAX));
}

TEST(StringTests, TestInitializationFromSignedInt) {
	signed int pvalue = INT_MIN;
    String value = pvalue;
    ASSERT_EQ(value, std::to_string(INT_MIN));
}

TEST(StringTests, TestInitializationFromUnsignedInt) {
	unsigned int pvalue = UINT_MAX;
    String value = pvalue;
    ASSERT_EQ(value, std::to_string(UINT_MAX));
}

TEST(StringTests, TestInitializationFromSignedLongLong) {
	signed long long pvalue = LLONG_MIN;
    String value = pvalue;
    ASSERT_EQ(value, std::to_string(LLONG_MIN));
}

TEST(StringTests, TestInitializationFromUnsignedLongLong) {
	unsigned long long pvalue = ULLONG_MAX;
    String value = pvalue;
    ASSERT_EQ(value, std::to_string(ULLONG_MAX));
}

TEST(StringTests, TestInitializationFromFloat) {
	float pvalue = FLT_MAX;
    String value = pvalue;
    ASSERT_EQ(value, "340282346638528859811704183484516925440.0");
}

TEST(StringTests, TestInitializationFromDouble) {
	double pvalue = DBL_MAX;
    String value = pvalue;
    ASSERT_EQ(value, "179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458"\
	                 "953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304"\
					 "583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0");
}

TEST(StringTests, TestInitializationFromLongDouble) {
	long double pvalue = LDBL_MAX;
    String value = pvalue;
    ASSERT_EQ(value, "118973149535723176508575932662800701619646905264169404552969888421216357975531239232497401284846207352590203"\
	                 "356474912685975526543357380446267269875194526149085346195872502126284586579940540449357468156609668617257495"\
					 "379179229225622077709585811270243647544253709260893513824734567727959380677369233009461574611972578417288989"\
					 "252193992075765420486456567335645224727815228886770063893559545649669951144175290960687851325094831139688610"\
					 "052683309212868397475219226638679188087369434307734815556410166997113851278687475349699654922172768677019655"\
					 "151281271248828946995229803186746992468398157666456266778671906149963963034165709830542523722087666463008780"\
					 "876725618280322021221992485237590304952091139591091892120527349676858811903011159301878936803923201167140417"\
					 "584510885470696521560577711351625740481881769507502571529970591671435210367178275911931603449839216972063180"\
					 "016403412469891814222757730045930988045471517960629989550758307585119518585797117316767696605799889935263188"\
					 "541771629530201466880238407584603622660648014297759540713505037980864913015716402406031178690879637251033587"\
					 "351277479527574859541757292093665139875270905521566393950558920780491454043297855762356564599120859966909718"\
					 "080888192006372277143121848901192220967905354596362841732600243973280293952431378666851402738143432103663657"\
					 "117167042358647275956123197079396783927914728272019537706060212263845788320480934171752680963925353944773028"\
					 "086367570479605405052516295909993253526558646468279382155008716694666220986508604099050713114547426741104283"\
					 "954232276299493875961311274383719283968267625755538837281449084539574712816206587158821910888724011665136196"\
					 "205080002917629993882608241754751673226993047313326125892184551681523545535431045811452830360739452610073057"\
					 "877409209473682228601545936112664254954179964533388254967076414595501705133080006125386514018015321192936145"\
					 "650034351479289020553202176006188223261573655337729498097405959052018796145979938674151302850593441045360348"\
					 "019238334932111517181105100410859283099181138255290906487302953341869108711810789500442688176586596184141926"\
					 "748623200592978995620749458764990166217231872299948451232582608703156193638368974068650527977529678933161368"\
					 "382279859704065160052412902514989487315319694209505667084746692764481259650670012944357951247923062137397808"\
					 "873125708979962290218382410541293048306560345986312037174428230137707015382387860995121893754295696415795098"\
					 "806060898578291065623811614220357410475745182817080487525744620412834851382908273172236418938049358833894766"\
					 "437062327982075583164620541748839306283820178954721954319445090211369992596537690819279215212221282457887933"\
					 "650687528861730346951711224545131544716428039252357496280417537592794897109698390524231879769534704369047422"\
					 "381326650563976116443884426653136462685121963399443415409856212739593618442182144427343153450786016161428702"\
					 "272098406156966033337278824103713153807737748015267058325792053556997331818811268567331899796749778678600125"\
					 "140387302392012771762685862703817056280727669968735627407277340313269410483161587935439581158582511283784156"\
					 "322276162333445918813153788235573248303008597689038296973447621459342819121271714133304757786755221851743106"\
					 "484876037319629031012446614508707837714052853304868420427879959665251400936896452749498871999608823006566819"\
					 "623629880573368996037130622615846499724349056447225407189756414412853983998609604556326477128558506630417799"\
					 "572010174484438715832976737556041620780087883007207241390865785566723954636935777578134428819598917631335685"\
					 "641784543423281488674422674670706697975557712178879846877770011647295410362181056710786985564641471350262783"\
					 "632125695740721746173836355242424876243647808535181099574929323817408133190504814461270090554142570222030253"\
					 "761149482422876532457793377851981877869734028258091278067497905893806255685600107605770598216668682475603756"\
					 "961576049761981948205275811853272933312773360374214984700146393198134071968133084440826301754524164429337248"\
					 "321723456169426393785575929444866297909541922745180158842597786969402660142791965516841589592304311519175187"\
					 "271334609575263460825447598815416225495259785319903964588374219923638761039583094807436598839770784963225208"\
					 "092094120626811483242540354051547431232787618080235770152784270200878137830656950858857183014061109804268300"\
					 "953086279740301535546437740624985396448100040223177166570089360752180408452366856864910325886266629337247244"\
					 "143556352059546170104239050079561583450594483732665254246744436486149918427509748525362197953750412852384824"\
					 "112771564124096526164670351639559940736008345507966519139322941054418516799909978765542446255890087438840564"\
					 "916945372673931226023481554329784230864607219014794807292845672583503954612118213364077776992584180757905173"\
					 "583882311275962271406750966991364528828189455892561297242525245224845350256234734890093676696613633274108813"\
					 "583755071744383848476065101987222292601692081111461693714320774348850460201277636425674687231520595260107222"\
					 "8970686460932435222754496341763535189105548847634608972381760403137363968.0");
}


TEST(StringTests, TestAssignmentFromCStringValue) {
    String value = "";
	value = "value";
    ASSERT_EQ(value, "value");
}

TEST(StringTests, TestAssignmentFromSTDStringValue) {
	std::string value1 = "value";
    String value2 = "";
	value2 = value1;
    ASSERT_EQ(value1, value2);
}

TEST(StringTests, TestAssignmentFromSignedChar) {
	signed char pvalue = SCHAR_MIN;
    String value = "";
	value = pvalue;
    ASSERT_EQ(value, std::to_string(SCHAR_MIN));
}

TEST(StringTests, TestAssignmentFromUnsignedChar) {
	unsigned char pvalue = UCHAR_MAX;
    String value = "";
	value = pvalue;
    ASSERT_EQ(value, std::to_string(UCHAR_MAX));
}

TEST(StringTests, TestAssignmentFromSignedShort) {
	signed short pvalue = SHRT_MIN;
    String value = "";
	value = pvalue;
    ASSERT_EQ(value, std::to_string(SHRT_MIN));
}

TEST(StringTests, TestAssignmentFromUnsignedShort) {
	unsigned short pvalue = USHRT_MAX;
    String value = "";
	value = pvalue;
    ASSERT_EQ(value, std::to_string(USHRT_MAX));
}

TEST(StringTests, TestAssignmentFromSignedLong) {
	signed long pvalue = LONG_MIN;
    String value = "";
	value = pvalue;
    ASSERT_EQ(value, std::to_string(LONG_MIN));
}

TEST(StringTests, TestAssignmentFromUnsignedLong) {
	unsigned long pvalue = ULONG_MAX;
    String value = "";
	value = pvalue;
    ASSERT_EQ(value, std::to_string(ULONG_MAX));
}

TEST(StringTests, TestAssignmentFromSignedInt) {
	signed int pvalue = INT_MIN;
    String value = "";
	value = pvalue;
    ASSERT_EQ(value, std::to_string(INT_MIN));
}

TEST(StringTests, TestAssignmentFromUnsignedInt) {
	unsigned int pvalue = UINT_MAX;
    String value = "";
	value = pvalue;
    ASSERT_EQ(value, std::to_string(UINT_MAX));
}

TEST(StringTests, TestAssignmentFromSignedLongLong) {
	signed long long pvalue = LLONG_MIN;
    String value = "";
	value = pvalue;
    ASSERT_EQ(value, std::to_string(LLONG_MIN));
}

TEST(StringTests, TestAssignmentFromUnsignedLongLong) {
	unsigned long long pvalue = ULLONG_MAX;
    String value = "";
	value = pvalue;
    ASSERT_EQ(value, std::to_string(ULLONG_MAX));
}

TEST(StringTests, TestAssignmentFromFloat) {
	float pvalue = FLT_MAX;
    String value = "";
	value = pvalue;
    ASSERT_EQ(value, "340282346638528859811704183484516925440.0");
}

TEST(StringTests, TestAssignmentFromDouble) {
	double pvalue = DBL_MAX;
    String value = "";
	value = pvalue;
    ASSERT_EQ(value, "179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458"\
	                 "953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304"\
					 "583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0");
}

TEST(StringTests, TestAssignmentFromLongDouble) {
	long double pvalue = LDBL_MAX;
    String value = "";
	value = pvalue;
    ASSERT_EQ(value, "118973149535723176508575932662800701619646905264169404552969888421216357975531239232497401284846207352590203"\
	                 "356474912685975526543357380446267269875194526149085346195872502126284586579940540449357468156609668617257495"\
					 "379179229225622077709585811270243647544253709260893513824734567727959380677369233009461574611972578417288989"\
					 "252193992075765420486456567335645224727815228886770063893559545649669951144175290960687851325094831139688610"\
					 "052683309212868397475219226638679188087369434307734815556410166997113851278687475349699654922172768677019655"\
					 "151281271248828946995229803186746992468398157666456266778671906149963963034165709830542523722087666463008780"\
					 "876725618280322021221992485237590304952091139591091892120527349676858811903011159301878936803923201167140417"\
					 "584510885470696521560577711351625740481881769507502571529970591671435210367178275911931603449839216972063180"\
					 "016403412469891814222757730045930988045471517960629989550758307585119518585797117316767696605799889935263188"\
					 "541771629530201466880238407584603622660648014297759540713505037980864913015716402406031178690879637251033587"\
					 "351277479527574859541757292093665139875270905521566393950558920780491454043297855762356564599120859966909718"\
					 "080888192006372277143121848901192220967905354596362841732600243973280293952431378666851402738143432103663657"\
					 "117167042358647275956123197079396783927914728272019537706060212263845788320480934171752680963925353944773028"\
					 "086367570479605405052516295909993253526558646468279382155008716694666220986508604099050713114547426741104283"\
					 "954232276299493875961311274383719283968267625755538837281449084539574712816206587158821910888724011665136196"\
					 "205080002917629993882608241754751673226993047313326125892184551681523545535431045811452830360739452610073057"\
					 "877409209473682228601545936112664254954179964533388254967076414595501705133080006125386514018015321192936145"\
					 "650034351479289020553202176006188223261573655337729498097405959052018796145979938674151302850593441045360348"\
					 "019238334932111517181105100410859283099181138255290906487302953341869108711810789500442688176586596184141926"\
					 "748623200592978995620749458764990166217231872299948451232582608703156193638368974068650527977529678933161368"\
					 "382279859704065160052412902514989487315319694209505667084746692764481259650670012944357951247923062137397808"\
					 "873125708979962290218382410541293048306560345986312037174428230137707015382387860995121893754295696415795098"\
					 "806060898578291065623811614220357410475745182817080487525744620412834851382908273172236418938049358833894766"\
					 "437062327982075583164620541748839306283820178954721954319445090211369992596537690819279215212221282457887933"\
					 "650687528861730346951711224545131544716428039252357496280417537592794897109698390524231879769534704369047422"\
					 "381326650563976116443884426653136462685121963399443415409856212739593618442182144427343153450786016161428702"\
					 "272098406156966033337278824103713153807737748015267058325792053556997331818811268567331899796749778678600125"\
					 "140387302392012771762685862703817056280727669968735627407277340313269410483161587935439581158582511283784156"\
					 "322276162333445918813153788235573248303008597689038296973447621459342819121271714133304757786755221851743106"\
					 "484876037319629031012446614508707837714052853304868420427879959665251400936896452749498871999608823006566819"\
					 "623629880573368996037130622615846499724349056447225407189756414412853983998609604556326477128558506630417799"\
					 "572010174484438715832976737556041620780087883007207241390865785566723954636935777578134428819598917631335685"\
					 "641784543423281488674422674670706697975557712178879846877770011647295410362181056710786985564641471350262783"\
					 "632125695740721746173836355242424876243647808535181099574929323817408133190504814461270090554142570222030253"\
					 "761149482422876532457793377851981877869734028258091278067497905893806255685600107605770598216668682475603756"\
					 "961576049761981948205275811853272933312773360374214984700146393198134071968133084440826301754524164429337248"\
					 "321723456169426393785575929444866297909541922745180158842597786969402660142791965516841589592304311519175187"\
					 "271334609575263460825447598815416225495259785319903964588374219923638761039583094807436598839770784963225208"\
					 "092094120626811483242540354051547431232787618080235770152784270200878137830656950858857183014061109804268300"\
					 "953086279740301535546437740624985396448100040223177166570089360752180408452366856864910325886266629337247244"\
					 "143556352059546170104239050079561583450594483732665254246744436486149918427509748525362197953750412852384824"\
					 "112771564124096526164670351639559940736008345507966519139322941054418516799909978765542446255890087438840564"\
					 "916945372673931226023481554329784230864607219014794807292845672583503954612118213364077776992584180757905173"\
					 "583882311275962271406750966991364528828189455892561297242525245224845350256234734890093676696613633274108813"\
					 "583755071744383848476065101987222292601692081111461693714320774348850460201277636425674687231520595260107222"\
					 "8970686460932435222754496341763535189105548847634608972381760403137363968.0");
}


TEST(StringTests, TestComparisonLTString) {
    String value1 = "a";
	String value2 = "b";
    ASSERT_EQ(value1 < value2, true);
	ASSERT_EQ(value2 < value1, false);
}

TEST(StringTests, TestComparisonLTSignedChar) {
    String value1 = std::to_string(SCHAR_MIN);
	signed char value2 = SCHAR_MAX;
    ASSERT_EQ(value1 < value2, true);
	ASSERT_EQ(value2 < value1, false);
	
	value1 = std::to_string(SCHAR_MAX);
	value2 = SCHAR_MIN;
	ASSERT_EQ(value1 < value2, false);
	ASSERT_EQ(value2 < value1, true);
}

TEST(StringTests, TestComparisonLTUnsignedChar) {
    String value1 = std::to_string(UCHAR_MAX);
	unsigned char value2 = UCHAR_MAX - 1;
    ASSERT_EQ(value1 < value2, false);
	ASSERT_EQ(value2 < value1, true);
	
	value1 = std::to_string(UCHAR_MAX - 1);
	value2 = UCHAR_MAX;
    ASSERT_EQ(value1 < value2, true);
	ASSERT_EQ(value2 < value1, false);
}

TEST(StringTests, TestComparisonLTSignedShort) {
    String value1 = std::to_string(SHRT_MIN);
	signed short value2 = SHRT_MAX;
	ASSERT_EQ(value1 < value2, true);
	ASSERT_EQ(value2 < value1, false);
	
	value1 = std::to_string(SHRT_MAX);
	value2 = SHRT_MIN;
	ASSERT_EQ(value1 < value2, false);
	ASSERT_EQ(value2 < value1, true);
}

TEST(StringTests, TestComparisonLTUnsignedShort) {
    String value1 = std::to_string(USHRT_MAX);
	unsigned short value2 = USHRT_MAX - 1;
    ASSERT_EQ(value1 < value2, false);
	ASSERT_EQ(value2 < value1, true);
	
	value1 = std::to_string(USHRT_MAX - 1);
	value2 = USHRT_MAX;
    ASSERT_EQ(value1 < value2, true);
	ASSERT_EQ(value2 < value1, false);
}

TEST(StringTests, TestComparisonLTSignedLong) {
    String value1 = std::to_string(LONG_MIN);
	signed long value2 = LONG_MAX;
    ASSERT_EQ(value1 < value2, true);
	ASSERT_EQ(value2 < value1, false);
	
	value1 = std::to_string(LONG_MAX);
	value2 = LONG_MIN;
	ASSERT_EQ(value1 < value2, false);
	ASSERT_EQ(value2 < value1, true);
}

TEST(StringTests, TestComparisonLTUnsignedLong) {
    String value1 = std::to_string(ULONG_MAX);
	unsigned long value2 = ULONG_MAX - 1;
    ASSERT_EQ(value1 < value2, false);
	ASSERT_EQ(value2 < value1, true);
	
	value1 = std::to_string(ULONG_MAX - 1);
	value2 = ULONG_MAX;
    ASSERT_EQ(value1 < value2, true);
	ASSERT_EQ(value2 < value1, false);
}

TEST(StringTests, TestComparisonLTSignedInt) {
    String value1 = std::to_string(INT_MIN);
	signed int value2 = INT_MAX;
    ASSERT_EQ(value1 < value2, true);
	ASSERT_EQ(value2 < value1, false);
	
	value1 = std::to_string(INT_MAX);
	value2 = INT_MIN;
	ASSERT_EQ(value1 < value2, false);
	ASSERT_EQ(value2 < value1, true);
}

TEST(StringTests, TestComparisonLTUnsignedInt) {
    String value1 = std::to_string(UINT_MAX);
	unsigned int value2 = UINT_MAX - 1;
    ASSERT_EQ(value1 < value2, false);
	ASSERT_EQ(value2 < value1, true);
	
	value1 = std::to_string(UINT_MAX - 1);
	value2 = UINT_MAX;
    ASSERT_EQ(value1 < value2, true);
	ASSERT_EQ(value2 < value1, false);
}

TEST(StringTests, TestComparisonLTSignedLongLong) {
    String value1 = std::to_string(LLONG_MIN);
	signed long long value2 = LLONG_MAX;
    ASSERT_EQ(value1 < value2, true);
	ASSERT_EQ(value2 < value1, false);
	
	value1 = std::to_string(LLONG_MAX);
	value2 = LLONG_MIN;
	ASSERT_EQ(value1 < value2, false);
	ASSERT_EQ(value2 < value1, true);
}

TEST(StringTests, TestComparisonLTUnsignedLongLong) {
    String value1 = std::to_string(ULLONG_MAX);
	unsigned long long value2 = ULLONG_MAX - 1;
    ASSERT_EQ(value1 < value2, false);
	ASSERT_EQ(value2 < value1, true);
	
	value1 = std::to_string(ULLONG_MAX - 1);
	value2 = ULLONG_MAX;
    ASSERT_EQ(value1 < value2, true);
	ASSERT_EQ(value2 < value1, false);
}

TEST(StringTests, TestComparisonLTFloat) {
    String value1 = std::to_string(-FLT_MAX);
	float value2 = FLT_MAX;
    ASSERT_EQ(value1 < value2, true);
	ASSERT_EQ(value2 < value1, false);
	
	value1 = std::to_string(FLT_MAX);
	value2 = -FLT_MAX;
	ASSERT_EQ(value1 < value2, false);
	ASSERT_EQ(value2 < value1, true);
}

TEST(StringTests, TestComparisonLTDouble) {
    String value1 = std::to_string(-DBL_MAX);
	double value2 = DBL_MAX;
    ASSERT_EQ(value1 < value2, true);
	ASSERT_EQ(value2 < value1, false);
	
	value1 = std::to_string(DBL_MAX);
	value2 = -DBL_MAX;
	ASSERT_EQ(value1 < value2, false);
	ASSERT_EQ(value2 < value1, true);
}

TEST(StringTests, TestComparisonLTLongDouble) {
    String value1 = std::to_string(-LDBL_MAX);
	long double value2 = LDBL_MAX;
    ASSERT_EQ(value1 < value2, true);
	ASSERT_EQ(value2 < value1, false);
	
	value1 = std::to_string(LDBL_MAX);
	value2 = -LDBL_MAX;
	ASSERT_EQ(value1 < value2, false);
	ASSERT_EQ(value2 < value1, true);
}


TEST(StringTests, TestComparisonLTEString) {
    String value1 = "a";
	String value2 = "b";
    ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, false);
	
	value2 = "a";
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, true);
}

TEST(StringTests, TestComparisonLTESignedChar) {
    String value1 = std::to_string(SCHAR_MIN);
	signed char value2 = SCHAR_MAX;
    ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, false);
	
	value1 = std::to_string(SCHAR_MAX);
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, true);
	
	value2 = SCHAR_MIN;
	ASSERT_EQ(value1 <= value2, false);
	ASSERT_EQ(value2 <= value1, true);
}

TEST(StringTests, TestComparisonLTEUnsignedChar) {
    String value1 = std::to_string(UCHAR_MAX);
	unsigned char value2 = UCHAR_MAX - 1;
    ASSERT_EQ(value1 <= value2, false);
	ASSERT_EQ(value2 <= value1, true);
	
	value1 = std::to_string(UCHAR_MAX - 1);
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, true);
	
	value2 = UCHAR_MAX;
    ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, false);
}

TEST(StringTests, TestComparisonLTESignedShort) {
    String value1 = std::to_string(SHRT_MIN);
	signed short value2 = SHRT_MAX;
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, false);
	
	value1 = std::to_string(SHRT_MAX);
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, true);
	
	value2 = SHRT_MIN;
	ASSERT_EQ(value1 <= value2, false);
	ASSERT_EQ(value2 <= value1, true);
}

TEST(StringTests, TestComparisonLTEUnsignedShort) {
    String value1 = std::to_string(USHRT_MAX);
	unsigned short value2 = USHRT_MAX - 1;
    ASSERT_EQ(value1 <= value2, false);
	ASSERT_EQ(value2 <= value1, true);
	
	value1 = std::to_string(USHRT_MAX - 1);
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, true);
	
	value2 = USHRT_MAX;
    ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, false);
}

TEST(StringTests, TestComparisonLTESignedLong) {
    String value1 = std::to_string(LONG_MIN);
	signed long value2 = LONG_MAX;
    ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, false);
	
	value1 = std::to_string(LONG_MAX);
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, true);
	
	value2 = LONG_MIN;
	ASSERT_EQ(value1 <= value2, false);
	ASSERT_EQ(value2 <= value1, true);
}

TEST(StringTests, TestComparisonLTEUnsignedLong) {
    String value1 = std::to_string(ULONG_MAX);
	unsigned long value2 = ULONG_MAX - 1;
    ASSERT_EQ(value1 <= value2, false);
	ASSERT_EQ(value2 <= value1, true);
	
	value1 = std::to_string(ULONG_MAX - 1);
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, true);
	
	value2 = ULONG_MAX;
    ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, false);
}

TEST(StringTests, TestComparisonLTESignedInt) {
    String value1 = std::to_string(INT_MIN);
	signed int value2 = INT_MAX;
    ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, false);
	
	value1 = std::to_string(INT_MAX);
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, true);
	
	value2 = INT_MIN;
	ASSERT_EQ(value1 <= value2, false);
	ASSERT_EQ(value2 <= value1, true);
}

TEST(StringTests, TestComparisonLTEUnsignedInt) {
    String value1 = std::to_string(UINT_MAX);
	unsigned int value2 = UINT_MAX - 1;
    ASSERT_EQ(value1 <= value2, false);
	ASSERT_EQ(value2 <= value1, true);
	
	value1 = std::to_string(UINT_MAX - 1);
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, true);
	
	value2 = UINT_MAX;
    ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, false);
}

TEST(StringTests, TestComparisonLTESignedLongLong) {
    String value1 = std::to_string(LLONG_MIN);
	signed long long value2 = LLONG_MAX;
    ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, false);
	
	value1 = std::to_string(LLONG_MAX);
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, true);
	
	value2 = LLONG_MIN;
	ASSERT_EQ(value1 <= value2, false);
	ASSERT_EQ(value2 <= value1, true);
}

TEST(StringTests, TestComparisonLTEUnsignedLongLong) {
    String value1 = std::to_string(ULLONG_MAX);
	unsigned long long value2 = ULLONG_MAX - 1;
    ASSERT_EQ(value1 <= value2, false);
	ASSERT_EQ(value2 <= value1, true);
	
	value1 = std::to_string(ULLONG_MAX - 1);
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, true);
	
	value2 = ULLONG_MAX;
    ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, false);
}

TEST(StringTests, TestComparisonLTEFloat) {
    String value1 = std::to_string(-FLT_MAX);
	float value2 = FLT_MAX;
    ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, false);
	
	value1 = std::to_string(FLT_MAX);
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, true);
	
	value2 = -FLT_MAX;
	ASSERT_EQ(value1 <= value2, false);
	ASSERT_EQ(value2 <= value1, true);
}

TEST(StringTests, TestComparisonLTEDouble) {
    String value1 = std::to_string(-DBL_MAX);
	double value2 = DBL_MAX;
    ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, false);
	
	value1 = std::to_string(DBL_MAX);
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, true);
	
	value2 = -DBL_MAX;
	ASSERT_EQ(value1 <= value2, false);
	ASSERT_EQ(value2 <= value1, true);
}

TEST(StringTests, TestComparisonLTELongDouble) {
    String value1 = std::to_string(-LDBL_MAX);
	long double value2 = LDBL_MAX;
    ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, false);
	
	value1 = std::to_string(LDBL_MAX);
	ASSERT_EQ(value1 <= value2, true);
	ASSERT_EQ(value2 <= value1, true);
	
	value2 = -LDBL_MAX;
	ASSERT_EQ(value1 <= value2, false);
	ASSERT_EQ(value2 <= value1, true);
}


TEST(StringTests, TestComparisonGTString) {
    String value1 = "a";
	String value2 = "b";
    ASSERT_EQ(value1 > value2, false);
	ASSERT_EQ(value2 > value1, true);
}

TEST(StringTests, TestComparisonGTSignedChar) {
    String value1 = std::to_string(SCHAR_MIN);
	signed char value2 = SCHAR_MAX;
    ASSERT_EQ(value1 > value2, false);
	ASSERT_EQ(value2 > value1, true);
	
	value1 = std::to_string(SCHAR_MAX);
	value2 = SCHAR_MIN;
	ASSERT_EQ(value1 > value2, true);
	ASSERT_EQ(value2 > value1, false);
}

TEST(StringTests, TestComparisonGTUnsignedChar) {
    String value1 = std::to_string(UCHAR_MAX);
	unsigned char value2 = UCHAR_MAX - 1;
    ASSERT_EQ(value1 > value2, true);
	ASSERT_EQ(value2 > value1,false);
	
	value1 = std::to_string(UCHAR_MAX - 1);
	value2 = UCHAR_MAX;
    ASSERT_EQ(value1 > value2, false);
	ASSERT_EQ(value2 > value1, true);
}

TEST(StringTests, TestComparisonGTSignedShort) {
    String value1 = std::to_string(SHRT_MIN);
	signed short value2 = SHRT_MAX;
	ASSERT_EQ(value1 > value2, false);
	ASSERT_EQ(value2 > value1, true);
	
	value1 = std::to_string(SHRT_MAX);
	value2 = SHRT_MIN;
	ASSERT_EQ(value1 > value2, true);
	ASSERT_EQ(value2 > value1, false);
}

TEST(StringTests, TestComparisonGTUnsignedShort) {
    String value1 = std::to_string(USHRT_MAX);
	unsigned short value2 = USHRT_MAX - 1;
    ASSERT_EQ(value1 > value2, true);
	ASSERT_EQ(value2 > value1, false);
	
	value1 = std::to_string(USHRT_MAX - 1);
	value2 = USHRT_MAX;
    ASSERT_EQ(value1 > value2, false);
	ASSERT_EQ(value2 > value1, true);
}

TEST(StringTests, TestComparisonGTSignedLong) {
    String value1 = std::to_string(LONG_MIN);
	signed long value2 = LONG_MAX;
    ASSERT_EQ(value1 > value2, false);
	ASSERT_EQ(value2 > value1, true);
	
	value1 = std::to_string(LONG_MAX);
	value2 = LONG_MIN;
	ASSERT_EQ(value1 > value2, true);
	ASSERT_EQ(value2 > value1, false);
}

TEST(StringTests, TestComparisonGTUnsignedLong) {
    String value1 = std::to_string(ULONG_MAX);
	unsigned long value2 = ULONG_MAX - 1;
    ASSERT_EQ(value1 > value2, true);
	ASSERT_EQ(value2 > value1, false);
	
	value1 = std::to_string(ULONG_MAX - 1);
	value2 = ULONG_MAX;
    ASSERT_EQ(value1 > value2, false);
	ASSERT_EQ(value2 > value1, true);
}

TEST(StringTests, TestComparisonGTSignedInt) {
    String value1 = std::to_string(INT_MIN);
	signed int value2 = INT_MAX;
    ASSERT_EQ(value1 > value2, false);
	ASSERT_EQ(value2 > value1, true);
	
	value1 = std::to_string(INT_MAX);
	value2 = INT_MIN;
	ASSERT_EQ(value1 > value2, true);
	ASSERT_EQ(value2 > value1, false);
}

TEST(StringTests, TestComparisonGTUnsignedInt) {
    String value1 = std::to_string(UINT_MAX);
	unsigned int value2 = UINT_MAX - 1;
    ASSERT_EQ(value1 > value2, true);
	ASSERT_EQ(value2 > value1, false);
	
	value1 = std::to_string(UINT_MAX - 1);
	value2 = UINT_MAX;
    ASSERT_EQ(value1 > value2, false);
	ASSERT_EQ(value2 > value1, true);
}

TEST(StringTests, TestComparisonGTSignedLongLong) {
    String value1 = std::to_string(LLONG_MIN);
	signed long long value2 = LLONG_MAX;
    ASSERT_EQ(value1 > value2, false);
	ASSERT_EQ(value2 > value1, true);
	
	value1 = std::to_string(LLONG_MAX);
	value2 = LLONG_MIN;
	ASSERT_EQ(value1 > value2, true);
	ASSERT_EQ(value2 > value1, false);
}

TEST(StringTests, TestComparisonGTUnsignedLongLong) {
    String value1 = std::to_string(ULLONG_MAX);
	unsigned long long value2 = ULLONG_MAX - 1;
    ASSERT_EQ(value1 > value2, true);
	ASSERT_EQ(value2 > value1, false);
	
	value1 = std::to_string(ULLONG_MAX - 1);
	value2 = ULLONG_MAX;
    ASSERT_EQ(value1 > value2, false);
	ASSERT_EQ(value2 > value1, true);
}

TEST(StringTests, TestComparisonGTFloat) {
    String value1 = std::to_string(-FLT_MAX);
	float value2 = FLT_MAX;
    ASSERT_EQ(value1 > value2, false);
	ASSERT_EQ(value2 > value1, true);
	
	value1 = std::to_string(FLT_MAX);
	value2 = -FLT_MAX;
	ASSERT_EQ(value1 > value2, true);
	ASSERT_EQ(value2 > value1, false);
}

TEST(StringTests, TestComparisonGTDouble) {
    String value1 = std::to_string(-DBL_MAX);
	double value2 = DBL_MAX;
    ASSERT_EQ(value1 > value2, false);
	ASSERT_EQ(value2 > value1, true);
	
	value1 = std::to_string(DBL_MAX);
	value2 = -DBL_MAX;
	ASSERT_EQ(value1 > value2, true);
	ASSERT_EQ(value2 > value1, false);
}

TEST(StringTests, TestComparisonGTLongDouble) {
    String value1 = std::to_string(-LDBL_MAX);
	long double value2 = LDBL_MAX;
    ASSERT_EQ(value1 > value2, false);
	ASSERT_EQ(value2 > value1, true);
	
	value1 = std::to_string(LDBL_MAX);
	value2 = -LDBL_MAX;
	ASSERT_EQ(value1 > value2, true);
	ASSERT_EQ(value2 > value1, false);
}


TEST(StringTests, TestComparisonGTEString) {
    String value1 = "a";
	String value2 = "b";
    ASSERT_EQ(value1 >= value2, false);
	ASSERT_EQ(value2 >= value1, true);
}

TEST(StringTests, TestComparisonGTESignedChar) {
    String value1 = std::to_string(SCHAR_MIN);
	signed char value2 = SCHAR_MAX;
    ASSERT_EQ(value1 >= value2, false);
	ASSERT_EQ(value2 >= value1, true);
	
	value1 = std::to_string(SCHAR_MAX);
	value2 = SCHAR_MIN;
	ASSERT_EQ(value1 >= value2, true);
	ASSERT_EQ(value2 >= value1, false);
}

TEST(StringTests, TestComparisonGTEUnsignedChar) {
    String value1 = std::to_string(UCHAR_MAX);
	unsigned char value2 = UCHAR_MAX - 1;
    ASSERT_EQ(value1 >= value2, true);
	ASSERT_EQ(value2 >= value1,false);
	
	value1 = std::to_string(UCHAR_MAX - 1);
	value2 = UCHAR_MAX;
    ASSERT_EQ(value1 >= value2, false);
	ASSERT_EQ(value2 >= value1, true);
}

TEST(StringTests, TestComparisonGTESignedShort) {
    String value1 = std::to_string(SHRT_MIN);
	signed short value2 = SHRT_MAX;
	ASSERT_EQ(value1 >= value2, false);
	ASSERT_EQ(value2 >= value1, true);
	
	value1 = std::to_string(SHRT_MAX);
	value2 = SHRT_MIN;
	ASSERT_EQ(value1 >= value2, true);
	ASSERT_EQ(value2 >= value1, false);
}

TEST(StringTests, TestComparisonGTEUnsignedShort) {
    String value1 = std::to_string(USHRT_MAX);
	unsigned short value2 = USHRT_MAX - 1;
    ASSERT_EQ(value1 >= value2, true);
	ASSERT_EQ(value2 >= value1, false);
	
	value1 = std::to_string(USHRT_MAX - 1);
	value2 = USHRT_MAX;
    ASSERT_EQ(value1 >= value2, false);
	ASSERT_EQ(value2 >= value1, true);
}

TEST(StringTests, TestComparisonGTESignedLong) {
    String value1 = std::to_string(LONG_MIN);
	signed long value2 = LONG_MAX;
    ASSERT_EQ(value1 >= value2, false);
	ASSERT_EQ(value2 >= value1, true);
	
	value1 = std::to_string(LONG_MAX);
	value2 = LONG_MIN;
	ASSERT_EQ(value1 >= value2, true);
	ASSERT_EQ(value2 >= value1, false);
}

TEST(StringTests, TestComparisonGTEUnsignedLong) {
    String value1 = std::to_string(ULONG_MAX);
	unsigned long value2 = ULONG_MAX - 1;
    ASSERT_EQ(value1 >= value2, true);
	ASSERT_EQ(value2 >= value1, false);
	
	value1 = std::to_string(ULONG_MAX - 1);
	value2 = ULONG_MAX;
    ASSERT_EQ(value1 >= value2, false);
	ASSERT_EQ(value2 >= value1, true);
}

TEST(StringTests, TestComparisonGTESignedInt) {
    String value1 = std::to_string(INT_MIN);
	signed int value2 = INT_MAX;
    ASSERT_EQ(value1 >= value2, false);
	ASSERT_EQ(value2 >= value1, true);
	
	value1 = std::to_string(INT_MAX);
	value2 = INT_MIN;
	ASSERT_EQ(value1 >= value2, true);
	ASSERT_EQ(value2 >= value1, false);
}

TEST(StringTests, TestComparisonGTEUnsignedInt) {
    String value1 = std::to_string(UINT_MAX);
	unsigned int value2 = UINT_MAX - 1;
    ASSERT_EQ(value1 >= value2, true);
	ASSERT_EQ(value2 >= value1, false);
	
	value1 = std::to_string(UINT_MAX - 1);
	value2 = UINT_MAX;
    ASSERT_EQ(value1 >= value2, false);
	ASSERT_EQ(value2 >= value1, true);
}

TEST(StringTests, TestComparisonGTESignedLongLong) {
    String value1 = std::to_string(LLONG_MIN);
	signed long long value2 = LLONG_MAX;
    ASSERT_EQ(value1 >= value2, false);
	ASSERT_EQ(value2 >= value1, true);
	
	value1 = std::to_string(LLONG_MAX);
	value2 = LLONG_MIN;
	ASSERT_EQ(value1 >= value2, true);
	ASSERT_EQ(value2 >= value1, false);
}

TEST(StringTests, TestComparisonGTEUnsignedLongLong) {
    String value1 = std::to_string(ULLONG_MAX);
	unsigned long long value2 = ULLONG_MAX - 1;
    ASSERT_EQ(value1 >= value2, true);
	ASSERT_EQ(value2 >= value1, false);
	
	value1 = std::to_string(ULLONG_MAX - 1);
	value2 = ULLONG_MAX;
    ASSERT_EQ(value1 >= value2, false);
	ASSERT_EQ(value2 >= value1, true);
}

TEST(StringTests, TestComparisonGTEFloat) {
    String value1 = std::to_string(-FLT_MAX);
	float value2 = FLT_MAX;
    ASSERT_EQ(value1 >= value2, false);
	ASSERT_EQ(value2 >= value1, true);
	
	value1 = std::to_string(FLT_MAX);
	value2 = -FLT_MAX;
	ASSERT_EQ(value1 >= value2, true);
	ASSERT_EQ(value2 >= value1, false);
}

TEST(StringTests, TestComparisonGTEDouble) {
    String value1 = std::to_string(-DBL_MAX);
	double value2 = DBL_MAX;
    ASSERT_EQ(value1 >= value2, false);
	ASSERT_EQ(value2 >= value1, true);
	
	value1 = std::to_string(DBL_MAX);
	value2 = -DBL_MAX;
	ASSERT_EQ(value1 >= value2, true);
	ASSERT_EQ(value2 >= value1, false);
}

TEST(StringTests, TestComparisonGTELongDouble) {
    String value1 = std::to_string(-LDBL_MAX);
	long double value2 = LDBL_MAX;
    ASSERT_EQ(value1 >= value2, false);
	ASSERT_EQ(value2 >= value1, true);
	
	value1 = std::to_string(LDBL_MAX);
	value2 = -LDBL_MAX;
	ASSERT_EQ(value1 >= value2, true);
	ASSERT_EQ(value2 >= value1, false);
}


TEST(StringTests, TestComparisonEQString) {
    String value1 = "test";
	String value2 = "tset";
    ASSERT_EQ(value1 == value2, false);
	value2 = "test";
	ASSERT_EQ(value1 == value2, true);
}

TEST(StringTests, TestComparisonEQSignedChar) {
    String value1 = std::to_string(SCHAR_MIN);
	signed char value2 = SCHAR_MIN;
    ASSERT_EQ(value1 == value2, true);
	value2 = SCHAR_MAX;
	ASSERT_EQ(value1 == value2, false);
}

TEST(StringTests, TestComparisonEQUnsignedChar) {
    String value1 = std::to_string(UCHAR_MAX);
	unsigned char value2 = UCHAR_MAX;
    ASSERT_EQ(value1 == value2, true);
	value2 = UCHAR_MAX - 1;
	ASSERT_EQ(value1 == value2, false);
}

TEST(StringTests, TestComparisonEQSignedShort) {
    String value1 = std::to_string(SHRT_MIN);
	signed short value2 = SHRT_MIN;
    ASSERT_EQ(value1 == value2, true);
	value2 = SHRT_MAX;
	ASSERT_EQ(value1 == value2, false);
}

TEST(StringTests, TestComparisonEQUnsignedShort) {
    String value1 = std::to_string(USHRT_MAX);
	unsigned short value2 = USHRT_MAX;
    ASSERT_EQ(value1 == value2, true);
	value2 = USHRT_MAX - 1;
	ASSERT_EQ(value1 == value2, false);
}

TEST(StringTests, TestComparisonEQSignedLong) {
    String value1 = std::to_string(LONG_MIN);
	signed long value2 = LONG_MIN;
    ASSERT_EQ(value1 == value2, true);
	value2 = LONG_MAX;
	ASSERT_EQ(value1 == value2, false);
}

TEST(StringTests, TestComparisonEQUnsignedLong) {
    String value1 = std::to_string(ULONG_MAX);
	unsigned long value2 = ULONG_MAX;
    ASSERT_EQ(value1 == value2, true);
	value2 = ULONG_MAX - 1;
	ASSERT_EQ(value1 == value2, false);
}

TEST(StringTests, TestComparisonEQSignedInt) {
    String value1 = std::to_string(INT_MIN);
	signed int value2 = INT_MIN;
    ASSERT_EQ(value1 == value2, true);
	value2 = INT_MAX;
	ASSERT_EQ(value1 == value2, false);
}

TEST(StringTests, TestComparisonEQUnsignedInt) {
    String value1 = std::to_string(UINT_MAX);
	unsigned int value2 = UINT_MAX;
    ASSERT_EQ(value1 == value2, true);
	value2 = UINT_MAX - 1;
	ASSERT_EQ(value1 == value2, false);
}

TEST(StringTests, TestComparisonEQSignedLongLong) {
    String value1 = std::to_string(LLONG_MIN);
	signed long long value2 = LLONG_MIN;
    ASSERT_EQ(value1 == value2, true);
	value2 = LLONG_MAX;
	ASSERT_EQ(value1 == value2, false);
}

TEST(StringTests, TestComparisonEQUnsignedLongLong) {
    String value1 = std::to_string(ULLONG_MAX);
	unsigned long long value2 = ULLONG_MAX;
    ASSERT_EQ(value1 == value2, true);
	value2 = ULLONG_MAX - 1;
	ASSERT_EQ(value1 == value2, false);
}

TEST(StringTests, TestComparisonEQFloat) {
    String value1 = std::to_string(FLT_MAX);
	float value2 = FLT_MAX;
    ASSERT_EQ(value1 == value2, true);
	value2 = FLT_MIN;
	ASSERT_EQ(value1 == value2, false);
}

TEST(StringTests, TestComparisonEQDouble) {
    String value1 = std::to_string(DBL_MAX);
	double value2 = DBL_MAX;
    ASSERT_EQ(value1 == value2, true);
	value2 = DBL_MIN;
	ASSERT_EQ(value1 == value2, false);
}

TEST(StringTests, TestComparisonEQLongDouble) {
    String value1 = std::to_string(LDBL_MAX);
	long double value2 = LDBL_MAX;
    ASSERT_EQ(value1 == value2, true);
	value2 = LDBL_MIN;
	ASSERT_EQ(value1 == value2, false);
}



TEST(StringTests, TestLowercase) {
    String value = "Value";
    ASSERT_EQ(value.lower(), "value");
}

TEST(StringTests, TestUppercase) {
    String value = "Value";
    ASSERT_EQ(value.upper(), "VALUE");
}


TEST(StringTests, TestRTrim) {
    String value = "\r\n\t value \t\r\n";
    ASSERT_EQ(value.rtrim(), "\r\n\t value");
}

TEST(StringTests, TestLTrim) {
    String value = "\r\n\t value \t\r\n";
    ASSERT_EQ(value.ltrim(), "value \t\r\n");
}

TEST(StringTests, TestTrim) {
    String value = "\r\n\t value \t\r\n";
    ASSERT_EQ(value.trim(), "value");
}


TEST(StringTests, TestHasString) {
    String value = "value";
    ASSERT_EQ(value.has(String("alu")), true);
	ASSERT_EQ(value.has(String("ula")), false);
}

TEST(StringTests, TestHasCString) {
    String value = "value";
    ASSERT_EQ(value.has("alu"), true);
	ASSERT_EQ(value.has("ula"), false);
}

TEST(StringTests, TestHasChar) {
    String value = "value";
    ASSERT_EQ(value.has('a'), true);
	ASSERT_EQ(value.has('b'), false);
}

TEST(StringTests, TestDecimal) {
    ASSERT_EQ(String("5").isnumeric(), true);
	ASSERT_EQ(String("5.1").isnumeric(), true);
	ASSERT_EQ(String("").isnumeric(), false);
	ASSERT_EQ(String("A").isnumeric(), false);
}

TEST(StringTests, TestReplace) {
    String value = "this is my replace string";
	String compare = "this is my complete string";
    ASSERT_EQ(value.replace("replace", "complete"), compare);
}

TEST(StringTests, TestReplaceEmpty) {
    String value = "this is my replace string";
	String compare = "this is my  string";
    ASSERT_EQ(value.replace("replace", ""), compare);
}

TEST(StringTests, TestReplaceMultiple) {
    String value = "a replace b replace c replace";
	String compare = "a complete b complete c complete";
    ASSERT_EQ(value.replace("replace", "complete"), compare);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

