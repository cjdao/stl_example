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
	cout << "Demonstrating generic merge algorithm ,\n"
         << "merging parts of an array and a deque, putting \n"
         << "the result into a list." << endl;
    char s[] = "acegikm";
    deque<char> deque1 = make<deque<char> >("bdfhjlnopqrstuvwxyz");
	list<char> list1(26,'x');

    
	merge(&s[0], &s[5], deque1.begin(), deque1.begin()+10, list1.begin());
    assert(list1 == make<list<char> >("abcdefghijlnopqxxxxxxxxxxx"));
    cout << " --- OK." << endl;
	return 0;
}
