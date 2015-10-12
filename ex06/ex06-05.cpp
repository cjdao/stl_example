#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

template <typename Container>
Container make(const char *s)
{
	return Container(s, s+strlen(s));
}

int main()
{
	vector<char> vector1 = make<vector<char> >("Bjarne Stroustrup"),
                 vector2;
	vector<char>::iterator i;

	cout << "Demonstrating vector push_back function." << endl;
	for (i=vector1.begin(); i!=vector1.end(); i++)	
		vector2.push_back(*i);
	assert(vector1==vector2);

	cout << "Demonstrating vector insertion at beginning." << endl;
	vector1 = make<vector<char> >("Bjarne Stroustrup");
	vector2 = make<vector<char> >("");
	for (i=vector1.begin(); i!=vector1.end(); i++)
		vector2.insert(vector2.begin(), *i);
	assert(vector2 == make<vector<char> >("purtsuortS enrajB"));
	reverse(vector1.begin(), vector1.end());
	assert(vector1 == vector2);
	cout << " --- OK." << endl;
	return 0;
}
