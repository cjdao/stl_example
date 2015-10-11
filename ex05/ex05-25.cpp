#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cassert>

using namespace std;
//========================================
//  类相关操作算法
//--算法: includes 
//--功能: 检查区间[first2,last2)中的所有元素是否都包含在
//        区间[first1,last1)中，返回一个布尔值结果。 
//--算法: set_union 
//--功能: 对两个区间执行并集操作，结果存放在第三个区间[result,last),
//        返回值为第三个区间的last
//--算法: set_difference 
//--功能: 得到一个集合，该集合中的元素，属于第一个区间，但不属于第二个区间 
//--算法: set_intersection 
//--功能: 两个输入区间的交集。
//--算法: set_symmetric_difference 
//--功能: 得到一个集合，该集合中的元素仅属于两个输入区间中的一个，但不属于
//        两个输入区间的交集。
//--时间复杂度：以上所有算法的时间复杂度都是线性时间.所进行的比较次数最多为2(N1+N2),
//              N1,N2分别是两个输入区间的大小
//========================================

template <typename Container>
Container make(const char *s)
{
    return Container(&s[0], &s[strlen(s)]);
}

int main()
{
    cout << "Illustrating the generic set operations." << endl;
    bool result;
    vector<char> vector1 = make<vector<char> >("abcde");
    vector<char> vector2 = make<vector<char> >("aeiou");

    result = includes(vector1.begin(), vector1.end(),
                      vector2.begin(), vector2.end());
    assert(result == false);

    result = includes(vector1.begin(), vector1.end(),
                      vector2.begin(), vector2.begin()+2);
    assert(result == true);

    vector<char> setUnion;
    set_union(vector1.begin(), vector1.end(),
              vector2.begin(), vector2.end(),
              back_inserter(setUnion));
    assert(setUnion == make<vector<char> >("abcdeiou"));

    vector<char> setIntersection;
    set_intersection(vector1.begin(), vector1.end(),
                     vector2.begin(), vector2.end(),
                     back_inserter(setIntersection));
    assert(setIntersection == make<vector<char> >("ae"));

    vector<char> setDifference;
    set_symmetric_difference(vector1.begin(), vector1.end(),
                     vector2.begin(), vector2.end(),
                     back_inserter(setDifference));
    assert(setDifference == make<vector<char> >("bcdiou"));
    cout << " --- OK." << endl;

    return 0;
}
