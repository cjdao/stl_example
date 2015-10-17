#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

#include "../includes/ps.h"

int main()
{
    cout << "Anagram group finding program:\n"
         << "finds all anagram groups in a dictionary.\n\n"
         << flush;
    // Get the dicionary name, and prepare to read it in 
    cout << "Enter a dictionary file name: " << endl;
    string dictionary_name;
    cin >> dictionary_name;
    ifstream ifs(dictionary_name.c_str());
    if (!ifs.is_open()) {
        cout << "Eh? Cloud not open file named " 
             << dictionary_name << endl;
        exit(-1);
    }
    // Copy words from dictionary file to a vector of PS objects
    cout << "Reading dicionary file..." << endl;
    typedef istream_iterator<string> input_string;
    vector<PS> dictionary;
    copy(input_string(ifs), input_string(), back_inserter(dictionary));
    // Bring all anagram groups together
    sort(dictionary.begin(), dictionary.end(), firstLess);
    
    // Prepare to output the anagram groups
    cout << "Type a word or any string of letters: " << flush;
    for (input_string i=input_string(cin); i!=input_string(); i++)  {
        string word=*i;
        sort(word.begin(), word.end());
        vector<PS>::iterator it = find_if(dictionary.begin(), dictionary.end(), bind1st(firstEqual, PS(word)));
        if (it != dictionary.end()) {
            cout << endl;            
            while (it->first==word){ 
                 cout << it->second << " ";
                 it++;
            }
           cout << endl;
        } else {
            cout << "Sorry, none found." << endl; 
        }
        cout << "\nType a word: " << flush;
    }   

    // Output all of the anagram groups
    return 0;
}
