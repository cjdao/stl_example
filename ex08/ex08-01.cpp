#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int multfn(int x, int y) {return x*y;};

template <typename InputIterator, typename T>
T accumulate1(InputIterator first, InputIterator last, T init,
             T (*binary_function)(T x, T y))
{
	while (first != last) {
		init = (*binary_function)(init, *first);
		first++;
	}	
	return init;
}

// 通过函数指针扩展accumulate函数定义和调用
int main()
{
	cout << "Demonstrating function pointer passing." << endl;

	int x[5] = {2, 3, 5, 7, 11};
	vector<int> vector1(x, x+5);
	int product = accumulate1(vector1.begin(), vector1.end(), 1, multfn);
	assert(product == 2310);

	cout << " --- OK." << endl;
	return 0;
}
