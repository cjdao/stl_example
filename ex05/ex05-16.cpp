#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>

using namespace std;

int main()
{
	cout << "Illustrating the generic replace algorithm." << endl;
	string s("FERRARI");
	vector<char> vector1(s.begin(), s.end());

	replace(vector1.begin(), vector1.end(), 'R', 'S');

	assert(string(vector1.begin(), vector1.end())
           == string("ESSASI"));
	cout << " --- OK." << endl;

	return 0;
}
