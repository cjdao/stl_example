#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

class U{
public:
	unsigned long id;
	U():id(0) {};
	U(unsigned long x):id(x) {};
};

bool operator==(const U& lhs, const U& rhs)
{
	return lhs.id==rhs.id;
}
bool operator!=(const U& lhs, const U& rhs)
{
	return lhs.id!=rhs.id;
}

int main()
{
	cout << "Demonstrating STL vector constractors with "
	     << "a user_defined type." << endl;
 	vector<U> vector1, vector2(3);
	assert(vector1.size() == 0);
	assert(vector2.size() == 3);
	assert(vector2[0]==U() && vector2[1]==U() && vector2[2]==U());
	assert(vector2 == vector<U>(3, U()));

	cout << " --- OK." << endl;
	return 0;
}
