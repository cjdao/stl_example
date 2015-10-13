#include <iostream>
#include <cassert>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;
#define ARRAY_SIZE(a) (sizeof(a)/sizeof(a[0]))

int main()
{
	int a[] = {12, 3, 25, 7, 11, 213, 7, 123, 29, -31};
	int *ptr = find(&a[0], &a[ARRAY_SIZE(a)], 7);
	assert(*ptr==7 && *(ptr+1)==11);

	list<int> list1(&a[0], &a[ARRAY_SIZE(a)]);
	list<int>::iterator it = find(list1.begin(), list1.end(), 7);
	assert(*it==7&&*(++it)==11);

	cout << "Type some characters, including an 'x' followed\n" 
	     << "by at least one nonwhite-space character: " <<flush;
	istream_iterator<char> in(cin);
	istream_iterator<char> eos;
	find(in, eos, 'x');

	cout << "The first nonwhite-space character following\n"
	     << "the first 'x' was '" << *(++in) << "'." << endl;
	return 0;
}
