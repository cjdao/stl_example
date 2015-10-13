#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;
#define ARRAY_SIZE (1000)

int main()
{
	cout << "Using an in-place generic sort algorithm." << endl;

	int i = 0;
	int a[ARRAY_SIZE];
	for (i=0; i!=ARRAY_SIZE; i++) {
		a[i] = ARRAY_SIZE-i-1;
	}
	sort(&a[0], &a[ARRAY_SIZE]);

	for (i=0; i!=ARRAY_SIZE; i++) {
		assert(a[i] == i);
	}
	
	cout << " --- OK." << endl;
	return 0;
}
