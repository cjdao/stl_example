#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	cout << "Illustrating the generic copy"
   	     << "and copy_backwark algorithm."
		 << endl;

	string s("abcdefghijklmnopqrstuvwxyz");
	vector<char> vector1(s.begin(), s.end());
	vector<char> vector2(vector1.size());

	copy(vector1.begin(), vector1.end(), vector2.begin());
	assert(vector1 == vector2);

	copy(vector1.begin()+4, vector1.end(), vector1.begin());
	assert(string(vector1.begin(),vector1.end()) 
           == string("efghijklmnopqrstuvwxyzwxyz"));

	copy_backward(vector1.begin(), vector1.end()-2, vector1.end());
	assert(string(vector1.begin(), vector1.end())
          == string("efefghijklmnopqrstuvwxyzwx"));

	cout << " --- OK." << endl;
	return 0;
}

