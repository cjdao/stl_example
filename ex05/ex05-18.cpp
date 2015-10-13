#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

int main()
{
	cout << "Illustrating the generic swap algorithm." << endl;

	int high = 250, low = 0;
	swap(high, low);
	assert (high==0 && low==250);

	vector<int> vec1(100,1), vec2(200,2);
	swap(vec1, vec2);
	assert(vec1==vector<int>(200,2) && vec2==vector<int>(100,1));

	cout << " --- OK." <<endl;

	return 0;
}
