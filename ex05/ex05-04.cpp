#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

class GreaterThan50 {
public:
	bool operator()(int a)const {return a>50;}
};

int main()
{
	cout << "Illustrating the generic find_if algorithm." << endl;
	
	vector<int> vector1;
	for (int i=0; i<13; i++)
		vector1.push_back(i*i);

	vector<int>::iterator where = 
        find_if(vector1.begin(), vector1.end(), GreaterThan50());

	assert(*where == 64);

	cout << " --- OK." << endl;
	return 0;
}
