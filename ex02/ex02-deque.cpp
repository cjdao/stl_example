#include <iostream>
#include <deque>
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
	cout << "Using reverse algorithm with a deque." << endl;

	deque<char> deque1 = make<deque<char> >("mark twain");
	reverse(deque1.begin(), deque1.end());
	assert(deque1 == make<deque<char> >("niawt kram"));

	cout << " --- OK." << endl;

	return 0;
}
