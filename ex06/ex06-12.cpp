#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <cassert>
#include <cstring>
using namespace std;

// list splice 成员函数
//** list1.splice(i1, list2)
//   i1是list1的有效迭代器(包括end()迭代器?).
//   该函数的作用，是把list2的内容插入到i1前面,插入完成后list2为空链表。list1和list2不能是相同的链表 
//** list1.splice(i1, list2, i2)
//   i1是list1有效的迭代器，i2是list2**可引用**的有效迭代器。
//   该函数作用，是把i2所引用的元素插入到i1的前面，并删除i2。list1和list2可以是相同的链表
//** list1.splice(i1, list2, i2, j2)
//   i1是list1有效的迭代器，[i2,j2)是list2有效的区间。
//   该函数的作用是，把区间[i2,j2)的元素插入到i1的前面，并删除区间[i2,j2),list1和list2可以是相同的链表

template <typename Container>
Container make(const char *s)
{
	return Container(s, s+strlen(s));
}

int main()
{
	cout << "Demonstrating STL list splice function." << endl;
	list<char> list1, list2, list3;
	list<char>::iterator i,j,k;
	
	list1 = make<list<char> >("There is something about science.");
	list2 = make<list<char> >("fascinating ");
	i = find(list1.begin(), list1.end(), 'a');
	list1.splice(i, list2);
	assert(list1 == make<list<char> >("There is something fascinating about science."));
	assert(list2 == make<list<char> >(""));

	list1 = make<list<char> >("One gets such wholesale return of conjecture");
	list2 = make<list<char> >("out of ssuch a trifling investment of fact.");
	list3 = make<list<char> >(" of");

	i = search(list1.begin(), list1.end(), list3.begin(), list3.end());
	j = find(list2.begin(), list2.end(), 's');	
	list1.splice(i, list2, j);
	assert(list1 == make<list<char> >("One gets such wholesale returns of conjecture"));
	assert(list2 == make<list<char> >("out of such a trifling investment of fact."));

	list1 = make<list<char> >("Mark Twain");
	list2 = make<list<char> >(" --- ");
	j = find(list2.begin(), list2.end(), ' ');
	k = find(++j, list2.end(), ' ');
	list1.splice(list1.begin(), list2, j, k);
	assert(list1 == make<list<char> >("---Mark Twain"));
	assert(list2 == make<list<char> >("  "));
	
	cout << " --- OK." << endl;
	
	return 0;
}
