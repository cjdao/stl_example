#include <iostream>
#include <algorithm>
#include <cassert>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

bool above40(int x) {return x>40;}

int main()
{
	cout << "Illustrating the genenric partition "
		 << " and stable_partition algorithm."
		 << endl;

	const int N = 7;
	int array0[N] = {50, 30, 10, 70, 60, 40, 20};
	int array1[N] ;
	copy(&array0[0], &array0[N], &array1[0]);
	ostream_iterator<int> out(cout, " ");
	
	cout << "Original sequence:		";
	copy(&array1[0], &array1[N], out);
	cout << endl;

	int *split = partition(&array1[0], &array1[N], above40);
	cout << "Result of (unstable) partitioning: ";
	copy(&array1[0], split, out);cout << "| ";
	copy(split, &array1[N], out);cout << endl;

	copy(&array0[0], &array0[N], &array1[0]);
	split = stable_partition(&array1[0], &array1[N], above40);
	cout << "Result of stable partitioning: ";
	copy(&array1[0], split, out);cout << "| ";
	copy(split, &array1[N], out);cout << endl;
	
	return 0;
}
