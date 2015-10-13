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
	cout << "Demonstrating STL capacity and reserve functions." << endl;

	const int N = 10000;
	vector<U> vector1, vector2;
	
	cout << "Doing "  << N << " insertions in vector1, \n"
	     << "with no advance reservation." << endl;
	int k;
	for (k=0; k!=N; k++) {
		vector<U>::size_type cap = vector1.capacity();
		vector1.push_back(U(k));
		if (vector1.capacity() != cap) {
			cout << "k: " << ", new capacity: "
			     << vector1.capacity() << endl;
		}
	}

	cout << "\nNow doing the same thing with vector2 ,\n"
	     << "after starting with reserve(" << N << ")." << endl;
	vector2.reserve(N);
	for (k=0; k!=N; k++) {
		vector<U>::size_type cap = vector2.capacity();
		vector2.push_back(U(k));
		if (vector2.capacity() != cap) {
			cout << "k: " << ", new capacity: "
			     << vector2.capacity() << endl;
		}
	}
	return 0;
}
