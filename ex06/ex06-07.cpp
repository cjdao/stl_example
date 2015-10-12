#include <iostream>
#include <cassert>
#include <vector>
#include <cstring>

using namespace std;

template <typename Container>
Container make(const char *s)
{
	return  Container(s, s+strlen(s));
}

int main()
{
	cout << "Demonstrating STL vector back "
	     << "and pop_back operations."<< endl;
	vector<char> vector1 = make<vector<char> >("abcdefghij");

	cout << "Poping characters off the back produces: ";
	while (vector1.size()!=0) {
		cout << vector1.back() ;
		vector1.pop_back();	
	}
	
	cout << endl;

	return 0;
}
