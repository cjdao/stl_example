#include <iostream>
#include <cassert>
#include <vector>
#include <numeric>

using namespace std;

class multiply{
public:
	int operator()(int x, int y){return x*y;}
};

int main()
{
	cout << "Demonstrating generic accumulate algorithm with a reverse iterator." << endl;
	
	float small = (float)1.0/(1<<26);
	float x[] = {1.0, 3*small, 2*small, small, small};
   
    vector<float> vector1(&x[0], &x[sizeof(x)/sizeof(x[0])]);
	
	cout << "Values to be added: " << endl;
	vector<float>::iterator it; 
	cout.precision(10);
	for(it=vector1.begin(); it!=vector1.end(); it++){
		cout << *it << " ";
	}
	cout << endl;

    float sum1 = accumulate(vector1.begin(), vector1.end(), (float)0.0);
	cout << "Sum accumultate from left = "	<< sum1 << endl;

	float sum2 = accumulate(vector1.rbegin(), vector1.rend(), (float)0.0);
	cout << "Sum accumultate from right = "	<< (double)sum2 << endl;

	return 0;
}
