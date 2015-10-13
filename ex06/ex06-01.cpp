#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

int main()
{
	cout << "Demonstrating simplest vector constractors." << endl;
	vector<char> vector1, vector2(3, 'x');
	assert(vector1.size() == 0);
	assert(vector2.size() == 3);
	assert(vector2[0]=='x'&&
	       vector2[1]=='x'&&
	       vector2[2]=='x');

	assert(vector2 == vector<char>(3,'x') && 
	       vector2 != vector<char>(4, 'x'));

	cout << " --- OK." << endl;
	return 0;
}
