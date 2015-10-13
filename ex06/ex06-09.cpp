#include <iostream>
#include <cassert>
#include <deque>
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
	deque<char> deque1 = make<deque<char> >("Bjarne Stroustrup"),
                 deque2;
	deque<char>::iterator i;

	cout << "Demonstrating deque push_back function." << endl;
	for (i=deque1.begin(); i!=deque1.end(); i++)	
		deque2.push_back(*i);
	assert(deque1==deque2);

	cout << "Demonstrating deque insertion at beginning." << endl;
	deque1 = make<deque<char> >("Bjarne Stroustrup");
	deque2 = make<deque<char> >("");
	for (i=deque1.begin(); i!=deque1.end(); i++)
		deque2.push_front(*i);
	assert(deque2 == make<deque<char> >("purtsuortS enrajB"));
	reverse(deque1.begin(), deque1.end());
	assert(deque1 == deque2);
	cout << " --- OK." << endl;
	return 0;
}
