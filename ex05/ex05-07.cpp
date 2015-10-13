#include <iostream>
#include <algorithm>
#include <cassert>
#include <string>
#include <list>

using namespace std;
void print_list(const string &s)
{
	cout << s << endl;
}

int main()
{
	cout << "Illustrating the generic for_each algorithm." << endl;

	list<string> dlist;
	dlist.push_back("Clark");
	dlist.push_back("Rindt");
	dlist.push_back("Senna");

	for_each(dlist.begin(), dlist.end(), print_list);

	cout << " --- OK." << endl;
	return 0;
}
