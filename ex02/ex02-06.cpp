#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
#include <cstring>

using namespace std;

template <typename Container>
Container make(const char *s)
{
	return Container(&s[0], &s[strlen(s)]);
}

int main()
{
	cout << "Demonstrating generic find algorithm with "
         << "an vector." << endl;

	vector<char> v1 = make<vector<char> >("C++ is a better c");
    vector<char>::iterator where = find(v1.begin(), v1.end(), 'e');
	assert(*where == 'e' && *(where+1) == 't');

	cout << " --- OK." << endl;
	return 0;

}
