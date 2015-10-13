#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

template <typename Container>
Container make(const char *s)
{
	return Container(s, s+strlen(s));
}

int main()
{
	cout << "Demonstrating STL vector erase function." << endl;

	vector<char> vector1 =  make<vector<char> >("remembering");
	vector<char>::iterator j;
	j = find(vector1.begin(), vector1.end(), 'm');
	assert(*j=='m' && *(j+1)=='e');

	vector1.erase(j--);
	assert(vector1 == make<vector<char> >("reembering"));
	assert(*j=='e' && *(j+1)=='e');
	
	vector1.erase(j--);
	assert(vector1 == make<vector<char> >("rembering"));
	assert(*j=='r' && *(j+1)=='e');
	
	vector1.erase(j, j+3);
	assert(vector1 == make<vector<char> >("bering"));

	vector1.erase(vector1.begin()+1);
	assert(vector1 == make<vector<char> >("bring"));

	cout << " --- OK." << endl;
	return 0;
}
