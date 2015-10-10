#include <iostream>
#include <algorithm>
#include <cassert>
#include <functional>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	cout << "Illustrating the generic random_shuffle algorithm." << endl;
	const int N = 20;
	vector<int> vector1(20);
	for (int i=0; i<N; i++)
		vector1[i] = i;
	
	for (int j=0; j<3; j++) {
		random_shuffle(vector1.begin(), vector1.end());

		copy(vector1.begin(), vector1.end(), 
			 ostream_iterator<int>(cout, " "));
		cout << endl;
	}

	return 0;
}
