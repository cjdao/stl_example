#include <iostream>
#include <cassert>
#include <list>
#include <algorithm>
#include <cstring>

using namespace std;

template <typename Container>
Container make(const char *s)
{
	return Container(s, s+strlen(s));
}

int main()
{
	list<char> list1 = make<list<char> >("Bjarne Stroustrup"),
                 list2;
	list<char>::iterator i;

	cout << "Demonstrating list push_back function." << endl;
	for (i=list1.begin(); i!=list1.end(); i++)	
		list2.push_back(*i);
	assert(list1==list2);

	cout << "Demonstrating list insertion at beginning." << endl;
	list1 = make<list<char> >("Bjarne Stroustrup");
	list2 = make<list<char> >("");
	for (i=list1.begin(); i!=list1.end(); i++)
		list2.push_front(*i);
	assert(list2 == make<list<char> >("purtsuortS enrajB"));
	reverse(list1.begin(), list1.end());
	assert(list1 == list2);
	cout << " --- OK." << endl;
	return 0;
}
