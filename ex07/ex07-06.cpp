#include <iostream>
#include <map>
using namespace std;

int main()
{

	cout << "Computing an inner product of tuples "
	     << "represented as maps." << endl;
	const long N = 600000;
	const long S = 10;
	
	cout << "\nInitializing..." << flush;
	map<long, double> x, y;
	long k;
	for (k=0; 3*k*S < N; k++)
		x[3*k*S] = 1.0;
	for (k=0; 5*k*S < N; k++)
		y[5*k*S] = 1.0;

	cout << "\n\nComputing inner product by brute force: "
	     << "of sparseness: " << flush;
	double sum = 0.0;
	map<long, double>::iterator ix,iy;
	
	for (ix=x.begin(); ix!=x.end(); ix++) {
		iy = y.find(ix->first);
		if (iy != y.end())
			sum += ix->second * iy->second;
	}	
	cout << sum << endl;
	
	return 0;
}
