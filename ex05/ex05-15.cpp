#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

int main()
{
	cout << "Illustrating the generic remove algorithm." << endl;
	const int N  = 11;
	int array[N] = {1,2,0,3,4,0,5,6,7,0,8};
	vector<int>	 vector1;
	int i;
	for (i=0; i<N; i++)
		vector1.push_back(array[i]);

	vector<int>::iterator new_end;
	new_end = remove(vector1.begin(), vector1.end(), 0);
	assert(vector1.size() == N);
	vector1.erase(new_end, vector1.end());
	
	assert(vector1.size() == (N-3));
	for(i=0; i<(int)vector1.size(); i++)
		assert (vector1[i] == i+1);

	cout << " --- OK." << endl;
	
	return 0;
}
