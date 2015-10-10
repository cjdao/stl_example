#include <iostream>
#include <algorithm>
#include <cassert>


using namespace std;

#define ARRAY_SIZE (1000)
int main()
{
	cout << "Using reverse_copy, a copying version "
         <<  "of the generic reverse algorithm" << endl;

	int a[ARRAY_SIZE], b[ARRAY_SIZE];

	int i;
	for (i=0; i!=ARRAY_SIZE; i++) {
		a[i] = i;
	}
	reverse_copy(&a[0], &a[ARRAY_SIZE], &b[0]);

	for (i=0; i!=ARRAY_SIZE; i++) {
		assert(a[i] == i && b[i] == (ARRAY_SIZE-i-1));
	}
	cout << " --- OK." << endl;
	return 0;
}
