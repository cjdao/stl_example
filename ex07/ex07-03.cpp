#include <iostream>
#include <cassert>
#include <list>
#include <string>
#include <cstring>
#include <set>
using namespace std;

template <typename Container>
Container make(const char *s)
{
	return Container(s, s+strlen(s));
}
#include <functional>
template <typename Container>
string make_string(const Container &c)
{
	string s;
	copy(c.begin(), c.end(), inserter(s,s.end()));
	return s;
}

int main()
{
	cout << "Demonstrating multiset erase functions." << endl;
	list<char> list1 = make<list<char> >("There is no distinctly native American criminal class");

	multiset<char> multiset1;
	copy(list1.begin(), list1.end(), inserter(multiset1, multiset1.end()));
	assert(make_string(multiset1) ==
	       string("       ATaaaaccccdeeeehiiiiiiilllmmnnnnnorrrsssstttvy"));

	multiset1.erase('a');
	assert(make_string(multiset1) ==
	       string("       ATccccdeeeehiiiiiiilllmmnnnnnorrrsssstttvy"));

	multiset<char>::iterator i = multiset1.find('e');
	multiset1.erase(i);
	assert(make_string(multiset1) ==
	       string("       ATccccdeeehiiiiiiilllmmnnnnnorrrsssstttvy"));

	cout << " --- OK." << endl;
	return 0;
}
