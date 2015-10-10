#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int sum(int val1, int val2) {return val1+val2;}

int main()
{
	cout << "Illustrating the generic transform algorithm." << endl;
	const int N = 5;
	int array1[N] = {0,1,2,3,4};
	int array2[N] = {6,7,8,9,10};
	ostream_iterator<int> out(cout, " ");

	transform(&array1[0], &array1[N], &array2[0], out, sum);

	cout << endl;
	return 0;
}
