# 函数适配器
函数适配器帮助我们创建种类更加广泛的函数对象。STL提供了三种函数适配器：
* 绑定器(binder)
* 取反器(negator)
* 函数指针适配器

## 1.绑定器
通过把一个二元函数的某个参数绑定到一个特定值上，将一个二元函数转化为一个一元函数。

* [绑定器1:bind1st](http://www.cplusplus.com/reference/functional/bind1st/)
> This function constructs an unary function object from the binary function object op by binding its **first parameter** to the fixed value x.
* [绑定器2:binder2nd](http://www.cplusplus.com/reference/functional/bind2nd/)
> This function constructs an unary function object from the binary function object op by binding its **second parameter** to the fixed value x.

## 2.取反器
用来对判决函数对象的结果取反的函数适配器。STL提供了两种取反器：not1和not2.

* [not1](http://www.cplusplus.com/reference/functional/not1/)　对一元判决函数进行取反

* [not2](http://www.cplusplus.com/reference/functional/not2/)　对二元判决函数进行取反

* 示例代码：[ex11-01.cpp](https://github.com/cjdao/stl_example/blob/master/ex11/ex11-01.cpp)

## 3.函数指针适配器
将**一元或二元**函数指针转换成函数对象，这么做的理由：
1. 函数指针能够与STL所提供的其他函数适配器结合使用
2. 用来避免某种形式的代码膨胀问题

* [ptr_fun](http://www.cplusplus.com/reference/functional/ptr_fun/)

```cpp
template <class Arg, class Result>
  pointer_to_unary_function<Arg,Result> ptr_fun (Result (*f)(Arg));

template <class Arg1, class Arg2, class Result>
  pointer_to_binary_function<Arg1,Arg2,Result> ptr_fun (Result (*f)(Arg1,Arg2));

```

* 示例代码：[ex11-02.cpp](https://github.com/cjdao/stl_example/blob/master/ex11/ex11-02.cpp)