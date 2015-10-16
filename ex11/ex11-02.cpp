#include <iostream>
#include <string>
#include <set>
#include <functional>
using namespace std;
bool less1(const string &a, const string &b)
{
	return a<b;
}
bool greater1(const string &a, const string &b)
{
	return a>b;
}
int main()
{
	cout << "Illutrating the use of an adapter "
	     << "for pointers to functions." << endl;

	typedef set<string, pointer_to_binary_function<const string&, const string&, bool> >
	     set_type1;

	set_type1 set1(ptr_fun(less1));
	set1.insert("the");
	set1.insert("quick");
	set1.insert("brown");
	set1.insert("fox");
	set_type1::iterator i;
	for (i=set1.begin(); i!=set1.end(); i++)
		cout << *i << " ";
	cout << endl;

	set_type1 set2(ptr_fun(greater1));
	set2.insert("the");
	set2.insert("quick");
	set2.insert("brown");
	set2.insert("fox");
	for (i=set2.begin(); i!=set2.end(); i++)
		cout << *i << " ";
	cout << endl;
	
	return 0;
}
