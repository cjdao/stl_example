#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>

using namespace std;

int main()
{
	cout << "Illustraring the generic rotate algorithm." << endl;
	string s("Software Engineering ");
	vector<char> vector1(s.begin(), s.end());

	rotate(vector1.begin(), vector1.begin()+9, vector1.end());
	assert(string(vector1.begin(), vector1.end())
           == string("Engineering Software "));
 	cout << " --- OK." << endl;

	return 0;
}
