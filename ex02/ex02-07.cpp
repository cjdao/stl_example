#include <iostream>
#include <algorithm>
#include <list>
#include <cassert>
#include <cstring>

using namespace std;

template <typename Container>
Container make(const char *s)
{
	return Container(&s[0], &s[strlen(s)]);
}

int main()
{
	cout << "Demonstrating generic find algorithm with "
	     << "an list." << endl;

	list<char> l1 = make<list<char> >("C++ is a better c");
	list<char>::iterator where = find(l1.begin(), l1.end(), 'e');
	list<char>::iterator next = where;
	next++;
	assert(*where == 'e' && *next == 't');

	cout << " --- OK." << endl;
	return 0;

}
