# 有序关联容器
------------------------------------------
  
## 关联容器与序列容器的区别
序列容器以线性排列方式保存数据项，并且各数据项保持了他们在插入时的
相对位置；而关联容器则摒弃了这种顺序，并且把注意力集中在如何通过保
存在数据项中的索引项来尽可能快的检索数据项上面。

## 有序关联容器与散列关联容器
* 实现关系检索的方法：
1.把索引项按照某种**全序关系排列**起来，比如，对于数字，这种关系可以是数
字序，而对于字符则可以是字典序，然后再使用**对分查找算法**进行检索。这种
方法实现的容器称为有序关联容器，可以通过平衡二叉树并配合其他数据结构实现。
2.把索引空间分配为若干子集，每一个索引项插入到指定的子集中，并通过**散列
函数**把索引项和子集联系起来。这种方法实现的容器称为散列关联容器，可以用散
列表的方式实现。

* 性能上的差别：
散列关联容器的主要优势在于其存取操作的平均时间复杂度为常数，而有序关联容
器的主要优势则在于其性能的可靠性。在某些情况下，散列表操作的性能会很差，
可以达到与表的大小N成正比，而平衡二叉树的性能则总是O(logN)。

## STL中的关联容器
理论上，散列关联容器和有序关联容器都应该包含在STL中，但实践上STL只包含了
有序关联容器(set, multiset, map, multimap)


## set和multiset

### 类型
set 和 multiset 具有下列模板参数

```cpp
template <typename Key, typename Compare=less<Key>, class Allocator=allocator<Key> >
```

set 和 multiset的迭代器是**双向迭代器**

### 构造函数
```cpp
set (const Compare& comp = Cmpare());

template <typename InputIterator>
set (InputIterator fist, InputIterator last, const Compare& comp = Cmpare());

set (const set<Key, Compare, Allocator>& otherSet);
```

### 插入
set:
```cpp
//iterator 指向x在集合中的位置，bool类型指示插入是否成功。
pair<iterator,bool> insert(const value_type& x);
```
multiset:
```cpp
//iterator 指向x在集合中的位置
iterator insert(const value_type& x);
```

insert的时间复杂度为O(logN), N为保存在set或multiset中的元素个数。

