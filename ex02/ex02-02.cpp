#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <cstring>

using namespace std;

template <typename Container>
Container make(const char *s)
{
	return Container(&s[0], &s[strlen(s)]);
}

int main()
{
	cout << "Using reverse algorithm with a vector." << endl;
	vector<char> vector1 = make<vector<char> >("mark twain");
	reverse(vector1.begin(), vector1.end());
	assert(vector1 == make<vector<char> >("niawt kram"));
	cout << " --- OK." << endl;
	
	return 0;
}
