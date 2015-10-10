#include <iostream>
#include <cassert>
#include <vector>
#include <numeric>

using namespace std;

int mult(int x, int y) {return x*y;}

int main()
{
	cout << "Using generic accumulate algorithm to compute a product." << endl;
	int x[] = {2,3,5,7,11};
    vector<int> vector1(&x[0], &x[sizeof(x)/sizeof(x[0])]);
    int product = accumulate(vector1.begin(), vector1.end(), 1, mult);
    assert(product == 2310);
	cout << " --- OK." << endl;
	return 0;
}
