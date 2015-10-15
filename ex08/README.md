# 函数对象

* 函数对象相比起函数指针的优势：
 1. 通用性
 2. 效率
 3. 函数对象可以在诸如类型定义方面带有一些额外信息，有了这些信息
   就可以在重载operator()所定义的基本功能外通过函数适配器为函数
   增加一些新的功能
 4. 函数对象可以带有数据成员，因此也很容易定义能够在调用中保存某
     种状态的函数

* [STL支持的函数对象](http://www.cplusplus.com/reference/functional/)

* 示例代码：
  [ex08-01.cpp](https://github.com/cjdao/stl_example/blob/master/ex08/ex08-01.cpp)
  [ex08-02.cpp](https://github.com/cjdao/stl_example/blob/master/ex08/ex08-02.cpp)
  [ex08-03.cpp](https://github.com/cjdao/stl_example/blob/master/ex08/ex08-03.cpp)
  [ex08-04.cpp](https://github.com/cjdao/stl_example/blob/master/ex08/ex08-04.cpp)
