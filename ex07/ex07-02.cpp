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

int main()
{
	cout << "Demonstrating multiset construction and insertion." << endl;
	list<char> list1 = make<list<char> >("There is no distinctly native American criminal class");

	multiset<char> multiset1;
	list<char>::iterator i;
	for (i=list1.begin(); i!=list1.end(); i++)
		multiset1.insert(*i);
	
	list<char> list2; 
	multiset<char>::iterator k;
	for (k=multiset1.begin(); k!=multiset1.end(); k++)
		list2.push_back(*k);
	
	assert(list2 == make<list<char> >("       ATaaaaccccdeeeehiiiiiiilllmmnnnnnorrrsssstttvy"));
	
	cout << " --- OK." << endl;

	return 0;
}
