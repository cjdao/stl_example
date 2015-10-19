#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>
using namespace std;

template <typename ForwardIterator>
class counting_iterator{
private:
	ForwardIterator current;
	string name;
	int plus_count;
	int version;
public:
	typedef counting_iterator<ForwardIterator> self;
	typedef typename iterator_traits<ForwardIterator>::value_type value_type;
	typedef typename iterator_traits<ForwardIterator>::reference reference;
	typedef typename iterator_traits<ForwardIterator>::pointer pointer;
	typedef typename iterator_traits<ForwardIterator>::difference_type difference_type;
	typedef forward_iterator_tag iterator_category;

	counting_iterator(ForwardIterator first, const string &n):
	                 current(first),name(n),plus_count(0),version(1){}
	counting_iterator(const self& other):current(other.current),name(other.name)
	                 ,plus_count(other.plus_count), version(other.version+1){
		cout << "coping " << name
		     << ", new version is "
		     << version << endl;
	}
	
	reference operator*()
	{
		return *current;
	}
	bool operator==(const self &other)
	{
		return current==other.current;
	}
	bool operator!=(const self &other)	
	{
		return current!=other.current;
	}
	self& operator++()
	{
		++current;
		++plus_count;
		return (*this);
	}
	self operator++(int)
	{
		self temp = *this;
		++(*this);
		return temp;
	}

	void report(ostream &o) const
	{
		o << "Iterator " << name << ", Version " << version
		  << ", reporting " << plus_count
		  << " ++ operations" << endl;
	}
};

int main()
{
	cout << "Demonstrating a counting iterator class." << endl;
	int x[] = {12, 4, 3, 7, 17, 9, 11, 6};
	counting_iterator<int *> i(&x[0], "Curly"),
	                        j(&x[0], "Moe"),
	                        end(&x[8], "Larry");
	cout << "Traversing array x\n"
	     << "from i(Curly) to end(Larry)" << endl;
	while(i!=end) {
		cout << *i << endl;
		++i;
	}
	cout << "After the traversal:\n";
	i.report(cout);
	end.report(cout);
	cout << "Assigning j(Moe) to i(Curly)." << endl;
	i=j;
	cout << "Searching the array\n"
	     << " from i(Moe) to end(Larry) \n"
	     << " using find\n";
	counting_iterator<int *> k = find(i, end, 9);
	cout << "After the find:\n";
	k.report(cout);
	i.report(cout);
	end.report(cout);
	return 0;
}
