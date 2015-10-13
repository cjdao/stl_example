#include <iostream>
#include <algorithm>
#include <cassert>
#include <string>
#include <functional>
#include <deque>

using namespace std;

int main()
{
	cout << "Illustrating the generic adjacent_find algorithm."<< endl;

	deque<string> player(5);
	
	player[0] = "Pele";
	player[1] = "Platini";
	player[2] = "Maradona";
	player[3] = "Maradona";
	player[4] = "Rossi";

	deque<string>::iterator where;
	where = adjacent_find(player.begin(), player.end());
	assert(*where == "Maradona"&&*(where+1) == "Maradona");

	where = adjacent_find(player.begin(), player.end(), greater<string>());
	assert(*where == "Platini" && *(where+1) == "Maradona");

	cout << " --- OK." << endl;
	return 0;
}
