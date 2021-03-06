# 迭代器适配器
* 迭代器适配器是用来改变迭代器接口的STL组件。在STL中只定义了**一种迭代器适配器**，即反向迭代器适配器。该迭代器适配器的作用是将给定的**双向或随机访问迭代器转**换为遍历方向相反的迭代器，转换后的迭代器与原迭代器具有相同的接口。这种迭代器适配器是通过一个以迭代器类型作为参数的模板类定义的。

* 在大多数情况下，并不需要直接使用只有迭代器，因为每一种STL容器都提供了两种类型的方向迭代器(实际上就是通过反向迭代器适配器实现的)，即reverse_iterator 和　const_reverse_iterator。此外每一种STL容器还提供了rbegin和rend成员函数，这两个函数可以在循环中使用，也可以作为参数提供给算法，用来指定序列的起始和末尾，但顺序和常规的顺序相反。

* reverse_iterator类中定义了base成员函数，其作用是返回该反向迭代器所指的原始迭代器。反向迭代器和原始迭代器之间存在一个基本的关系，即　&*r == &*(r.base()-1), 因为r.begin()==i.end()-1

* 示例代码：[ex10-01.cpp](https://github.com/cjdao/stl_example/blob/master/ex10/ex10-01.cpp) [ex10-02.cpp](https://github.com/cjdao/stl_example/blob/master/ex10/ex10-02.cpp)
