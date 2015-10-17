#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>
using namespace std;
#include "../includes/ps.h"
int main()
{
    cout << "Anagram group finding grogram:\n"
         << "finds all anagram gropus in a dictionary.\n\n"
         << flush;
    // Get the dictionary name, and prepare to read it in
    cout << "First, enter the name of the file containing\n"
         << "the dictionary: " << flush;
    string dictionary_name;
    cin >> dictionary_name;
    ifstream ifs(dictionary_name.c_str());
    if (!ifs.is_open()) {
        cout << "Eh? Could not open file named"
             << dictionary_name << endl;
        exit(-1);
    }
    // Copy words from dictionary file to a vector of PS objects
    typedef istream_iterator<string> input_string;
    vector<PS> word_pairs;
    cout << "\nReading the dictionary..." << flush;
    copy(input_string(ifs), input_string(), back_inserter(word_pairs));
    sort(word_pairs.begin(), word_pairs.end());
    cout << "\nSearching " << word_pairs.size()
         << "words for anagram groups..." << flush;
    // Bring all anagram groups together
    sort(word_pairs.begin(), word_pairs.end(), firstLess);
    // Prepare to output the anagram groups 
    vector<PS>::const_iterator j = word_pairs.begin(),
                               finis = word_pairs.end(), k; 
    // Output all of the anagram groups
    cout << "\n\nThe anagram groups are:" << endl;
    while (true) {
        // Advance j to the start of the next anagram group (if any)
        j = adjacent_find(j, finis, firstEqual);
        // Text for completion
        if (j==finis) break;
        // Find the end postion , k, of the anagram group that begin at j
        k = find_if(j+1, finis, not1(bind1st(firstEqual, *j)));
        // Output the anagram group in positions j to k
        cout << " " ;
        copy(j, k, ostream_iterator<string>(cout, " "));
        cout << endl;
        j = k;
    }
    return 0;
}
