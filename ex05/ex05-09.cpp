#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <deque>

using namespace std;

int main()
{
	cout << "Illustrating the generic search algorithm." << endl;
	vector<int> vec1(20);
	deque<int> deq1(5);
	int i;
	for (i=0; i<20; i++) {
		vec1[i]	= i;
	}
	
	for (i=0; i<5; i++) {
		deq1[i]	= i+5;
	}
	
	vector<int>::iterator where;
	where = search(vec1.begin(), vec1.end(), deq1.begin(), deq1.end());
	
	for (i=0; i<5; i++) {
		assert(*(where+i) == i+5);
	}
	
	cout << " --- OK." << endl;
	return 0;
}
