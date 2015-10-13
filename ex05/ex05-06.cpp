#include <iostream>
#include <algorithm>
#include <cassert>
#include <functional>

using namespace std;

int main()
{
	cout << "Illustrating the generic count algorithm." << endl;

	int a[] = {0, 0, 0, 1, 1, 1, 2, 2, 2};
	int found_count = count(&a[0], &a[9], 1);
	assert(found_count == 3);

	found_count = count_if(&a[0], &a[9], bind2nd(not_equal_to<int>(), 1));
	assert(found_count == 6);

	cout << " --- OK." << endl;
	return 0;
}
