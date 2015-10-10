#include <iostream>
#include <algorithm>
#include <cassert>
#include <list>
#include <deque>
#include <cstring>

using namespace std;

template <typename Container>
Container make(const char *s)
{
	return Container(&s[0], &s[strlen(s)]);
}

int main()
{
	cout << "Demonstrating generic merge algorithm with"
         << "an array, a list, a deque." << endl;
    char s[] = "aeiou";
	list<char> list1 = make<list<char> >("bcdfghjklmnpqrstvwxyz");

	deque<char> que1(26, 'x');
    
	merge(&s[0], &s[strlen(s)], list1.begin(), list1.end(), que1.begin());
    assert(que1 == make<deque<char> >("abcdefghijklmnopqrstuvwxyz"));
    cout << " --- OK." << endl;
	return 0;
}
