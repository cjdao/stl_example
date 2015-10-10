#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

class comp_last {
public:
    bool operator()(int x, int y) {return x%10<y%10;}   
};

int main() 
{
    cout << "Illustrating the generic sort , stable_sort, and"
         << " partial_sort algorithms." << endl;
    const int N = 20;
    
    vector<int> vector0;
    for (int i=0; i<N; i++)
        vector0.push_back(i);

    vector<int> vector1 = vector0;
    ostream_iterator<int> out(cout, " ");

    cout << "Before sorting:\n";
    copy(vector1.begin(), vector1.end(), out);
    cout << endl;

    sort(vector1.begin(), vector1.end(), comp_last());
    
    cout << "After sorting by last digits with sort:\n";
    copy(vector1.begin(), vector1.end(), out);
    cout << endl;

    vector1 = vector0;
    cout << "Before sorting:\n";
    copy(vector1.begin(), vector1.end(), out);
    cout << endl;

    stable_sort(vector1.begin(), vector1.end(), comp_last());

    cout << "After sorting by last digits with stable_sort:\n";
    copy(vector1.begin(), vector1.end(), out);
    cout << endl;

    vector1 = vector0;
    reverse(vector1.begin(), vector1.end());
    cout << "Before sorting:\n";
    copy(vector1.begin(), vector1.end(), out);
    cout << endl;
    
    partial_sort(vector1.begin(), vector1.begin()+5, vector1.end(), comp_last());

    cout << "After sorting by last digits with partial_sort to get"
         << "5 values with smallest last digits:\n" ;
    copy(vector1.begin(), vector1.end(), out);
    cout << endl;
    
    return 0;
}
