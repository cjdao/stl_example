#include <iostream>
#include <list>
#include <cassert>
#include <algorithm>
#include <cstring>

using namespace std;

template <typename Container>
Container make(const char *s)
{
	return Container(&s[0], &s[strlen(s)]);
}

int main()
{
	cout << "Using reverse algorithm with a list." << endl;
	list<char> list1 = make<list<char> >("mark twain");
    reverse(list1.begin(), list1.end());
    assert(list1 == make<list<char> >("niawt kram"));
    cout << " --- OK." << endl;

    return 0;
}
