## 序列容器
-----------------------
## 向量(vector)
### 1.1 类型
### 1.2 构造
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
* 对于vector的插入操作，最有用的是push_back操作，其在vector的末尾插入元素, 其分摊时间复杂度为常数。
## 双端队列(deque)


## 链表(list)
