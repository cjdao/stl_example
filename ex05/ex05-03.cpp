#include <iostream>
#include <algorithm>
#include <cassert>
#include <functional>

using namespace std;
#define ARRAY_SIZE (1000)

int main()
{
	cout << "Using the generic sort algorithm "
		 << "with a binary predicate." <<endl;

	int a[ARRAY_SIZE];
	int i;
	for (i=0; i<ARRAY_SIZE; i++)
		a[i] = i;
	random_shuffle(&a[0], &a[ARRAY_SIZE]);
	
	sort(&a[0], &a[ARRAY_SIZE]);
	
	for (i=0; i<ARRAY_SIZE; i++)	 
		assert(a[i]==i);

	random_shuffle(&a[0], &a[ARRAY_SIZE]);
	sort(&a[0], &a[ARRAY_SIZE], greater<int>());
	
	for (i=0; i<ARRAY_SIZE; i++)
		assert(a[i]==(ARRAY_SIZE-i-1));
	
	cout << " --- OK." << endl;

	return 0;
}

