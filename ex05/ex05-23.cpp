#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

int main()
{
    cout << "Illustrating the generic nth_element algorithm." << endl;

    vector<int> v(7);
    v[0] = 25; v[1] = 7; v[2] = 9;
    v[3] = 2; v[4] = 0; v[5] = 5; v[6] = 21;

    const int N = 4;
    nth_element(v.begin(), v.begin()+N, v.end());

    int i = 0;
    for (i=0; i<N; i++)   
        assert(v[i] <= v[N]);

    for (i=N; i<7; i++)
        assert(v[N] <= v[i]);

    cout << " --- OK." << endl;

    return 0;
}
