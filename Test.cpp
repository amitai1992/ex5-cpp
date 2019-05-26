#include <iostream>
using namespace std;
using std::string;
#include <string>
#include "chain.hpp"
#include "powerset.hpp"
#include "product.hpp"
#include "range.hpp"
#include "zip.hpp"
#include "badkan.hpp"
#include <ostream>
#define COMMA ,

using namespace itertools;

int main() {

	badkan::TestCase testcase;
	int grade = 0;
	int signal = setjmp(badkan::longjmp_buffer);
	if (signal == 0)
	{

		string st1 = "abcdcdefghi"; //1
		string st2 = "CDEFGHIEFG"; //2
		string st3 = "3456782345678910"; //3
		string st4 = "-5-4-3-2-10-9-8-7-6-5-4"; //4
		string st5 = "1234-6-5-4-3-2"; //5
		string st6 = "abcdefABCDEF"; //6
		string st7 = "12cd"; //7
		string st8 = "abchello"; //8


		//more 11 tests
		string str1 = "5,2 6,3 7,4";
		string str2 = "-4,-4 -3,-3 -2,-2";
		string str3 = "a,e b,f c,g d,h";
		string str4 = "A,E B,F C,G D,H";
		string str5 = "1,2 1,3 1,4 2,2 2,3 2,4";
		string str6 = "-1,-3 -1,-4 -1,-5 -2,-3 -2,-4 -2,-5";
		string str7 = "a,b a,c b,b b,c c,b c,c";
		string str8 = "A,B A,C B,B B,C C,B C,C";
		string str9 = "1,h 1,e 1,y 2,h 2,e 2,y";
		string str10 = "{},{1},{2},{1,2},{3},{1,3},{2,3},{1,2,3}";
		string str11 = "{},{a},{b},{a,b},{c},{a,c},{b,c},{a,b,c}";


		//more 4
		string stt1 = "defgh";
		string stt2 = "56789";
		string stt3 = "ABCDEFGHI";
		string stt4 = "-6-5-4-3-2-101";
		string integer = "", negint = "", schar = "", bchar = "";
		
		for(int i:range(5,10))
		{
			integer += to_string(i);
		}

		for(int i : range(-6, 2))
		{
			negint += to_string(i);
		}

		for(char i : range('d', 'i'))
		{
			schar += i;
		}

		for(char i : range('A', 'J'))
		{
			bchar += i;
		}
		
		testcase.setname("basic range tests")
			
			.CHECK_EQUAL(schar, stt1)
			.CHECK_EQUAL(integer,stt2)
			.CHECK_EQUAL(bchar, stt3)
			.CHECK_EQUAL(negint, stt4)


;
			
			
			
		string integer2 = "", negint2 = "", schar2 = "", bchar2 = "", mixint = "", mixchar = "", mixcharint = "", stringmix = "", strtest = "";
		/*
		for (int i : chain(range(3, 9), range(2, 11)))
		{
			integer2 += to_string(i);
		}

		for (int i : chain(range(-5, -1), range(-10, -3)))
		{
			negint2 += to_string(i);
		}
		for (char i : chain(range('a', 'e'), range('c', 'j')))
		{
			schar2 += i;
		}
		for (char i : chain(range('C', 'j'), range('E', 'H')))
		{
			bchar2 += i;
		}
		for (int i : chain(range(1, 5), range(-6, -1)))
		{
			mixint += to_string(i);
		}
		for (char i : chain(range('a', 'g'), range('A', 'G')))
		{
			mixchar += i;
		}
		
	for (int i : chain(range(1, 3), range('c', 'e')))
		{
			mixcharint += to_string(i);
		}

		for (char i : chain(range('a', 'd'), string("hello")))
		{
			stringmix += i;
		}

		*/
		testcase.setname("basic chain tests")
			
			.CHECK_EQUAL(schar2,st1 )
			.CHECK_EQUAL(bchar2, st2)
			.CHECK_EQUAL(integer2, st3)
			.CHECK_EQUAL(negint2, st4)
			.CHECK_EQUAL(mixint, st5)
			.CHECK_EQUAL(mixchar, st6)
			.CHECK_EQUAL(mixcharint, st7)
			.CHECK_EQUAL(stringmix, st8);
			
			
		integer = "", negint = "", schar = "", bchar = "";

		for (auto index : zip(range(5, 8), range(2, 5)))
		{
			integer += to_string(index);
		}
		for (auto index : zip(range(-4, -1), range(-4, -1)))
		{
			negint += to_string(index);
		}
		for (auto index : zip(range('a', 'e'), range('e', 'i')))
		{
			schar += to_string(index);
		}

		for (auto index : zip(range('A', 'E'), range('E', 'I')))
		{
			bchar += to_string(index);
		}
		
		testcase.setname("zip tests")
			.CHECK_EQUAL(integer,str1)
			.CHECK_EQUAL(negint, str2)
			.CHECK_EQUAL(schar, str3)
			.CHECK_EQUAL(bchar, str4);
		


		integer = ""; 
		negint = "";
		schar = "";
		bchar = "";

		/*
		for (auto index : product(range(1, 3), range(2, 5)))
		{
			integer += to_string(index);
		}

		for (auto index : product(range(-1, -3), range(-3, -6)))
		{
			negint += to_string(index);
		}

		for (auto index : product(range('a', 'd'), range('b', 'd')))
		{
			schar += to_string(index);
		}

		for (auto index : product(range('A', 'D'), range('B', 'D')))
		{
			bchar += to_string(index);
		}
*/
		
		
		testcase.setname("product tests")
			.CHECK_EQUAL(integer,str5)
			.CHECK_EQUAL(negint, str6)
			.CHECK_EQUAL(schar,str7)
			.CHECK_EQUAL(bchar, str8)
			.CHECK_EQUAL(strtest, str9);
			
			integer = "", schar = "";

		for (auto iter : powerset(range(1, 4)))
		{
			integer += to_string(iter);
		}
		for (auto iter : powerset(range('a', 'd')))
		{
			schar += to_string(iter);
		}
		
		testcase.setname("powerset tests")
			.CHECK_EQUAL(integer, str10)
			.CHECK_EQUAL(schar, str11)
			
			;

			
		grade = testcase.grade();
	}
	else {
		testcase.print_signal(signal);
		grade = 0;
	}
	cout << "your grade is: " << grade << endl;
	return 0;


}
