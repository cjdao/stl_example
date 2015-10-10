#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
	cout << "Using reverse algorithm with a string." << endl;

    string string1 = "mark twain";
    reverse(string1.begin(), string1.end());
    assert(string1 == "niawt kram");
    cout << " --- OK." << endl;

   cout << "Using reverse algorithm with an array." << endl;
   char array1[] = "mark twain";
   reverse(&array1[0], &array1[strlen(array1)]);
   assert(strcmp(array1, "niawt kram")==0);
   cout << " --- OK." << endl;

   return 0;
}
