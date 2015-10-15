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

