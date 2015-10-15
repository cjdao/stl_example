#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <iterator>
using namespace std;

template <typename Container>
Container make(const char *s)
{
	return Container(s, s+strlen(s));
}

//对算法find使用正向迭代和反向迭代
int main()
{
	cout << "Using find with normal and reverse iteration:\n";
	vector<char> vector1 = make<vector<char> >("now is the time");
	ostream_iterator<char> out(cout, " ");

	cout << "chars from the first t to the end: ";
	vector<char>::iterator i 
	              = find(vector1.begin(), vector1.end(), 't');
	copy(i, vector1.end(), out);
	cout << endl;

	cout << "chars from the last t to the beginning: ";
	vector<char>::reverse_iterator r 
	              = find(vector1.rbegin(), vector1.rend(), 't');
	copy(r, vector1.rend(), out);
	cout << endl;
	                              
	cout << "chars from the last t to the end: ";
	copy(r.base()-1, vector1.end(), out);
	cout << endl;
	return 0;
}

