## 序列容器
-----------------------
## 向量(vector)
### 1.1 类型
```cpp
template < class T, class Alloc = allocator<T> > class vector; // generic template
```
### 1.2 构造
```cpp
//default (1)	
explicit vector (const allocator_type& alloc = allocator_type());
//fill (2)	
explicit vector (size_type n, const value_type& val = value_type(),
                 const allocator_type& alloc = allocator_type());
//range (3)	
template <class InputIterator>
         vector (InputIterator first, InputIterator last,
                 const allocator_type& alloc = allocator_type());
//copy (4)	
vector (const vector& x);
```
* 默认构造函数构建空vector:
```cpp
vector<T> vector1;
```  
* 默认构造函数构建大小为N的vector:
```cpp
vector<T> vector1(N);
```  
* 初始值为value构建大小为N的vector:
```cpp
vector<T> vector1(N, value);
```  
* 以另一个同类型的vector2为副本构建vector:
```cpp
vector<T> vector1(vector2);
```  
* 以区间[first,last)为副本构建vector:
```cpp
vector<T> vector1(first, last);
```  

示例代码：[ex06-01.cpp](https://github.com/cjdao/stl_example/blob/master/ex06/ex06-01.cpp) 
          [ex06-02.cpp](https://github.com/cjdao/stl_example/blob/master/ex06/ex06-02.cpp) 
          [ex06-03.cpp](https://github.com/cjdao/stl_example/blob/master/ex06/ex06-03.cpp) 
          [ex06-04.cpp](https://github.com/cjdao/stl_example/blob/master/ex06/ex06-04.cpp) 

### 1.3 插入
* vector尾端插入 -- push_back
对于vector的插入操作，最有用的是push_back操作，其在vector的末尾插入元素, 其分摊时间复杂度为常数。

* vector其他任意位置插入 -- insert
  
## 双端队列(deque)


## 链表(list)
