#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>
//========================================
//--算法: merge
//--功能: 合并两个**有序区间**， 并将结果保存
//        在另一个与两个输入区间均不重叠的区间中。
//--时间复杂度：线性时间
//
//--算法: inplace_merge
//--功能: 合并两个**相邻**的**有序区间**，并将结果
//        保存回两个两个区间中。
//--时间复杂度：线性时间 或 O(NlogN) (没有可用的额外存储空间)
//========================================

using namespace std;

int main()
{
    cout << "Illustrating the generic merge algorithm." << endl;
    vector<int> vector1(5);
    vector<int> vector2(5);
    vector<int> vector3(10);
    int i;
    for (i=0; i<5; i++)
        vector1[i] = 2*i;
    for (i=0; i<5; i++)
        vector2[i] = 2*i+1;

    merge(vector1.begin(), vector1.end(), vector2.begin(), vector2.end(),
          vector3.begin());
    
    for (i=0; i<10; i++)
        assert(vector3[i] == i);

    for (i=0; i<5; i++)
        vector3[i] = vector1[i];
    for (i=0; i<5; i++)
        vector3[i+5] = vector2[i];

    inplace_merge(vector3.begin(), vector3.begin()+5, vector3.end());
    
    for (i=0; i<10; i++)
        assert(vector3[i] == i);

    cout << " --- OK." << endl;
    return 0;
}
