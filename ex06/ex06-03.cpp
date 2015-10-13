#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

class U{
public:
	unsigned long id;
	unsigned long generation;
	static unsigned long total_copies;
	U():id(0),generation(0) {};
	U(unsigned long x):id(x),generation(0) {};
	U(const U& z):id(z.id), generation(z.generation+1) { ++total_copies;};
};

unsigned long U::total_copies = 0;

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

	for (int i=0; i!=3; i++) {
		cout << "vector2[" << i << "].generation: " 
		     << vector2[i].generation << endl;
	}
	cout << "Total copies: " << U::total_copies<< endl;
	return 0;
}
