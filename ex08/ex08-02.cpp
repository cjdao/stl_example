#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

template <typename InputIterator, typename T, typename BinaryFunction>
T accumulate(InputIterator first, InputIterator last, T init, 
             BinaryFunction binary_function)
{
	while(first != last) {
		init = binary_function(init, *first);
		++first;
	}
	return init;
}

template <typename T>
class multiply {
public:
	T operator()(T x, T y){return x*y;}
};
multiply<int> multfunobj;


// 函数对象
int main()
{
	cout << "Demontstrating function object." << endl;

	int x[] = {2, 3, 5, 7, 11};
	vector<int> vector1(x, x+5);

	int product = accumulate(vector1.begin(), vector1.end(), 1, multfunobj);
	assert(product == 2310);

	cout << " --- OK." << endl;
	return 0;
}

