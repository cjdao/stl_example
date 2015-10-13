#include <iostream>
#include <algorithm>
#include <deque>
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
	     << "an deque." << endl;

	deque<char> q1 = make<deque<char> >("C++ is a better c");
	deque<char>::iterator where = find(q1.begin(), q1.end(), 'e');
	assert(*where == 'e' && *(where+1) == 't');

	cout << " --- OK." << endl;
	return 0;

}
