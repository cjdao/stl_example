#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    cout << "Anagram finding program:\n"
         << "finds all words in a dictionary that can\n"
         << "be formed with the letters of a given word.\n" << endl;
    // Get the dictionary name, and prepare to read it in.
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
    
    // Copy words from the dictionary file to a vector for random access
    typedef istream_iterator<string> input_string;
    vector<string> dictionary;
    cout << "\nReading the dictionary..." << flush;
    copy(input_string(ifs), input_string(), back_inserter(dictionary));
    sort(dictionary.begin(), dictionary.end());
    cout << "\nThe dictionary contains "
         << dictionary.size() << " words.\n\n";
    // Repeatedly ask the user for a word and check it for anagrams
    cout << "Now type a word(or any string of letters), \n"
         << "and I'll see if it has any anagram:" << flush;
    for (input_string i = input_string(cin); i!=input_string(); i++) {
        string word = *i;
        // Search the dictionary for anagrams of word
        bool found_one = false;
        sort(word.begin(),word.end());
        do {
            if (binary_search(dictionary.begin(), dictionary.end(), word        )) {
                cout << " " << word << endl; 
                found_one = true; 
             }
        } while(next_permutation(word.begin(), word.end()));
        if (!found_one) {
            cout << "Sorry, none found." << endl; 
        }
        cout << "\nType another word "
             << "(or the end-of-file char to stop): " << flush;
    }

    return 0;
}
