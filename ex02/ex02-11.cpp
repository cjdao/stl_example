#include <iostream>
#include <cassert>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	cout << "Demonstrating the accumulate function." << endl;

	int x[] = {2,3,5,7,11};
	vector<int> vector1(&x[0], &x[sizeof(x)/sizeof(x[0])]);
	int sum = accumulate(vector1.begin(), vector1.end(), 0);
	assert(sum==28);

	cout << " --- OK." << endl;
	return 0;
}
