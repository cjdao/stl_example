#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

template <typename Container>
Container make(const char *s)
{
	return Container(&s[0], &s[strlen(s)]);
}

int main()
{
	cout << "Illustrating the generic swap_ranges algorithm." << endl;
	vector<char> vector1 = make<vector<char> >("HELLO"),
	             vector2 = make<vector<char> >("THERE");

	vector<char> tmp1 = vector1, tmp2 = vector2;

	swap_ranges(vector1.begin(), vector1.end(), vector2.begin());

	assert(vector1 == tmp2 && vector2 == tmp1);
	
	cout << " --- OK." << endl;

	return 0;
}
