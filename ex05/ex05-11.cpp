#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>

using namespace std;

int main()
{
	cout << "Illustrating the generic fill and "
	     << "fill_n algorithms." << endl;

	string s("Hello there");
	vector<char> vector1(s.begin(), s.end());
	
	fill(vector1.begin(), vector1.begin()+5, 'X');
	assert(string(vector1.begin(), vector1.end()) 
	       == string("XXXXX there"));

	fill_n(vector1.begin()+5, 3, 'Y');
	assert(string(vector1.begin(), vector1.end()) 
	       == string("XXXXXYYYere"));

	cout << " --- OK." << endl;
	
	return 0;
}
