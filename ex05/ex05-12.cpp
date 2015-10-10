#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

template <typename T>
class calc_square {
	T i;
public:
	calc_square(): i(0) {}
	T operator()() {++i; return i*i;}
};

int main()
{
	cout << "Illustrating the generic generate algorithm." << endl;
	vector<int>	 vector1(10);
	generate(vector1.begin(), vector1.end(), calc_square<int>());
	for (int i=0; i<10; i++)
		assert (vector1[i] == (i+1)*(i+1));
	cout << " --- OK." << endl;

	return 0;
}
