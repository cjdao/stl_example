#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, long> dictionary;
    dictionary["Bogart"]=1234567;
    dictionary["Bacall"]=9876543;
    dictionary["Cagney"]=3459876;

    string name;
	while (cin>>name) {
		if (dictionary.find(name) != dictionary.end()) {
			cout << "The phone number for " << name
                 << " is " << dictionary[name] << endl;
		} else {
			cout << "Sorry, no listing for " << name << endl;
		}
	}
	return 0;
}

