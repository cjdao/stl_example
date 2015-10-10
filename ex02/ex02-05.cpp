#include <iostream>
#include <algorithm>
#include <cassert>
#include <cstring>

using namespace std;

int main()
{
	cout << "Demonstrating generic find algorithm with "
         << "an array." << endl;

	char s[] = "C++ is a better c";
    const char *where = find(&s[0], &s[strlen(s)], 'e');
	assert(*where == 'e' && *(where+1) == 't');

	cout << " --- OK." << endl;
	return 0;

}
