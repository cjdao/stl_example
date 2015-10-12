#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

int main()
{
	cout << "Demonstrating STL vector copying constructors." << endl;
	char name[] = "George Foreman";
	vector<char> George(name, name+6);
	vector<char> anotherGeorge(George.begin(), George.end());
	assert(anotherGeorge == George);
	
	vector<char> son1(George);
	assert(son1 == anotherGeorge);

	vector<char> son2(George);
	assert(son2 == anotherGeorge);
	cout << " --- OK." << endl;
	return 0;
}
