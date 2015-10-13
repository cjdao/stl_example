#include <iostream>
#include <algorithm>
#include <cassert>
#include <string>
#include <list>
#include <deque>
#include <vector>

using namespace std;

int main()
{
	cout << "Illustrating the generic equal and mismatch algorithms."
	     << endl;

	list<string> driver_list;
	vector<string> vec;
	deque<string> deq;

	driver_list.insert(driver_list.end(),"Clark");
	driver_list.insert(driver_list.end(),"Rindt");
	driver_list.insert(driver_list.end(),"Senna");

	vec.insert(vec.end(), "Clark");
	vec.insert(vec.end(), "Rindt");
	vec.insert(vec.end(), "Senna");
	vec.insert(vec.end(), "Berger");

	deq.insert(deq.end(), "Clark");
	deq.insert(deq.end(), "Berger");


	assert(equal(driver_list.begin(), driver_list.end(), vec.begin()));

	assert(!equal(deq.begin(), deq.end(), driver_list.begin()));

	pair<deque<string>::iterator, list<string>::iterator> 
		pair1 = mismatch(deq.begin(), deq.end(), driver_list.begin());
	if (pair1.first != deq.end()) {
		cout << "Fisrt disagreement in deq and driver_list:\n" 
			 << *(pair1.first) << " and " << *(pair1.second)
			 << endl;
	}

	cout << " --- OK." << endl;
	return 0;
}
