# 容器适配器

## 什么是适配器
适配器也是STL的一种组件，其作用是改变其他STL组件的接口。它们是以
模板类的形式定义的，并且以另一种STL组件的类型作为其参数。STL提供
了3种类型的适配器：**容器适配器**，**迭代器适配器**和**函数适配器**。

## 1.stack容器适配器
* stack容器适配器可以用于vector list 或deque:
 * stack<T>是类型为T的栈，默认情况下以deque实现
 * stack<T, vector<T> >是类型为T的栈，以vector实现
 * stack<T, list<T> >是类型为T的栈，以list实现
 * stack<T, deque<T> >是类型为T的栈，以deque实现(与stack<T>相同)

* stack提供的操作包括：empty, size, top, push 和 pop
> 值得注意的是，pop的返回值为void，这是因为如果需要pop有返回值，则必须
> 以值的形式返回。如果以引用或指针的形式返回，则会产生一个悬空的指针，
> 该指针指向stack中一个已被删除的值。但是如果以值的形式返回，则需要调用
> 一次构造函数，在不需要得到被弹出的值的情况下，这样做会降低操作性能。因
> 此如果需要得到弹出值，则应该在调用pop前先调用top函数取得这个值。

* stack容器适配器可以用于任何一种支持empty、size、push_back、pop_back和
  back操作的容器

* 示例代码：[ex09-01.cpp](https://github.com/cjdao/stl_example/blob/master/ex09/ex09-01.cpp)

## 2.queue容器适配器
* queue容器适配器可以用于 list 或deque:
 * queue<T>是类型为T的队列，默认情况下以deque实现
 * queue<T, list<T> >是类型为T的，以list实现
 * queue<T, deque<T> >是类型为T的，以deque实现(与queue<T>相同)

* queue提供的操作包括：empty, size, front, back, push 和 pop

* queue容器适配器可以用于任何一种支持empty、size、push_back、pop_front、front
  back操作的容器
> vector 不支持pop_front操作，所以不能用于queue

* 示例代码：[ex09-02.cpp](https://github.com/cjdao/stl_example/blob/master/ex09/ex09-02.cpp)

## 3.priority_queue容器适配器
所谓优先级队列是指一种序列，在这种序列中，根据元素间的某种特定的排序准则，只有序列中的最大元素可以被第一个检索。

* priority_queue容器适配器可以用于vector和deque：
 * priority_queue<T> 将T类型的元素保存在以默认方式(vector)实现的优先级队列中，并且使用默认的比较对象(less<T>)
 * priority_queue<T, vector<T>, greater<T> > 将T类型的元素保存在以vector方式实现的优先级队列中，并且比较对象greater<T>, 因此该优先级队列可以优先检索的元素实际上是序列中最小的值
 * priority_queue<T, deque<T>, greater<T> > 将T类型的元素保存在以deque方式实现的优先级队列中，并且比较对象greater<T>, 因此该优先级队列可以优先检索的元素实际上是序列中最小的值

* priority_queue提供的操作包括：empty, size, top, push 和 pop

* priority_queue容器适配器可以用于任何一种提供了**随机访问迭代器**和empty、size、push_back、pop_back、front操作以及comp比较对象的容器

* 示例代码：[ex09-03.cpp](https://github.com/cjdao/stl_example/blob/master/ex09/ex09-03.cpp)