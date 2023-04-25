# STL
### Here is a list of all the data structures available in the C++ Standard Template Library (STL):

#### Sequence Containers:

1.	std::vector
2.	std::deque
3.	std::list
4.	std::forward_list

#### Associative Containers:

1.	std::set
2.	std::multiset
3.	std::map
4.	std::multimap

#### Unordered Associative Containers:

1.	std::unordered_set
2.	std::unordered_multiset
3.	std::unordered_map
4.	std::unordered_multimap
#### Container Adapters:

1.	std::stack
2.	std::queue
3.	std::priority_queue
#### Other Containers:

1.	std::bitset

--------------------------------------------------------------------------------------------------------------------
### Vector

#### Here's a list of all the methods available in the C++ std::vector class along with their time complexities and example usage:

1)`std::vector::push_back():` Adds an element to the end of the vector. Time complexity is constant, O(1).
 
````
std::vector<int> vec;
vec.push_back(1); // vec = {1}
````

2)`std::vector::pop_back()`: Removes the last element from the vector. Time complexity is constant, O(1).
 
````
std::vector<int> vec = {1, 2, 3};
vec.pop_back(); // vec = {1, 2}
````
  
3)`std::vector::insert():` Inserts an element at the specified position. Time complexity is linear, O(n).
 
````
std::vector<int> vec = {1, 2, 3};
auto it = vec.begin() + 1;
vec.insert(it, 4); // vec = {1, 4, 2, 3}
````  

4)`std::vector::erase()`: Removes the element at the specified position. Time complexity is linear, O(n).
 
````
std::vector<int> vec = {1, 2, 3};
auto it = vec.begin() + 1;
vec.erase(it); // vec = {1, 3}
````  

5)`std::vector::clear()`: Removes all elements from the vector. Time complexity is linear, O(n).
 
````
std::vector<int> vec = {1, 2, 3};
vec.clear(); // vec = {}
````  

6)`std::vector::size()`: Returns the number of elements in the vector. Time complexity is constant, O(1).
 
````
std::vector<int> vec = {1, 2, 3};
int size = vec.size(); // size = 3
````  

7)`std::vector::capacity():` Returns the number of elements that the vector can hold without reallocation. Time complexity is constant, O(1).
 
````
std::vector<int> vec = {1, 2, 3};
int capacity = vec.capacity(); // capacity >= 3
````

8)`std::vector::reserve():` Increases the vector's capacity to a specified value. Time complexity is linear, O(n).
 
````
std::vector<int> vec = {1, 2, 3};
vec.reserve(6); // capacity >= 6
````

9)`std::vector::shrink_to_fit():` Reduces the vector's capacity to fit its size. Time complexity is linear, O(n).
 
````
std::vector<int> vec = {1, 2, 3};
vec.shrink_to_fit(); // capacity == 3
````  

10)`std::vector::operator[]():` Returns a reference to the element at the specified position. Time complexity is constant, O(1).
 
````
std::vector<int> vec = {1, 2, 3};
int second = vec[1]; // second = 2
````

11)`std::vector::at():` Returns a reference to the element at the specified position, with bounds checking. Time complexity is constant, O(1).
 
````
std::vector<int> vec = {1, 2, 3};
int second = vec.at(1); // second = 2
````

12)`std::vector::front():` Returns a reference to the first element in the vector. Time complexity is constant, O(1).
 
````
std::vector<int> vec = {1, 2, 3};

int first = vec.front(); // first = 1
````

13. `std::vector::back()`: Returns a reference to the last element in the vector. Time complexity is constant, O(1).

````
std::vector<int> vec = {1, 2, 3};
int last = vec.back(); // last = 3
````

14. `std::vector::empty()`: Returns true if the vector is empty, false otherwise. Time complexity is constant, O(1).

````
std::vector<int> vec = {1, 2, 3};
bool is_empty = vec.empty(); // is_empty = false
````
 

15. `std::vector::data()`: Returns a pointer to the underlying array that stores the vector's elements. Time complexity is constant, O(1).

````
std::vector<int> vec = {1, 2, 3};
int* ptr = vec.data();
````
 

16. `std::vector::swap()`: Swaps the contents of two vectors. Time complexity is linear, O(n).

````
std::vector<int> vec1 = {1, 2, 3};
std::vector<int> vec2 = {4, 5, 6};
vec1.swap(vec2); // vec1 = {4, 5, 6}, vec2 = {1, 2, 3}
````

17)

````
  unique(arr.begin(),arr.end(),[](int x,int y){return x%2==y%2;});
  reverse(arr.begin(),arr.end());
  sort(arr.begin(),arr.end(),[](int x,int y){return x<y;});
  sort(arr.begin(),arr.end(),greater<int>());
```` 
                                                          
Note that the time complexity of some operations, such as `insert()` and `erase()`, can be affected by the size of the vector and the position of the element being inserted or erased. In general, adding or removing elements from the end of the vector is faster than doing so at the beginning or in the middle.

----------------------------------------------------------------------------------------------------------------------
### Deque

`std::deque (short for double-ended queue) is a container in C++ Standard Library that provides a sequence-like interface. It supports constant time insertions and deletions at both the beginning and the end, and provides efficient random access to elements in the middle. Here is a list of all the methods of std::deque, along with their time complexity and an example:`

#### Constructors and Destructors
#### Default constructor
 
````
deque() noexcept;
````
 
##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d1;
````

#### Fill constructor
 
````
explicit deque(size_type count);
explicit deque(size_type count, const T& value);
````

##### Complexity: Linear time in the size of the deque.

#### Example:

````
std::deque<int> d2(10);       // deque with 10 default-initialized ints
std::deque<int> d3(10, 42);   // deque with 10 ints initialized to 42
````

#### Range constructor

````
template<class InputIt>
deque(InputIt first, InputIt last);
````

##### Complexity: Linear time in the size of the range.

####  Example:

````
std::vector<int> v = {1, 2, 3, 4, 5};
std::deque<int> d4(v.begin(), v.end()); // deque initialized with the elements of the vector
````

#### Copy constructor

```` 
deque(const deque& other);
````

##### Complexity: Linear time in the size of other.

####  Example:

````
std::deque<int> d5(d4); // copy of d4
````

#### Move constructor

````
deque(deque&& other) noexcept;
````

##### Complexity: Constant time.
####  Example:

````
std::deque<int> d6(std::move(d5)); // move d5 to d6
````

#### Destructor
 
````
~deque();
Complexity: Linear time in the size of the deque.
````

#### Example:
 
````
{
    std::deque<int> d7(10, 42);
} // d7 is destroyed here
Element Access
At
 
reference at(size_type pos);
const_reference at(size_type pos) const;
````

##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d8 = {1, 2, 3};
d8.at(0) = 42;
int x = d8.at(2);
````

#### Operator []
 
````
reference operator[](size_type pos);
const_reference operator[](size_type pos) const;
````

##### Complexity: Constant time.
#### Example:
 
````
std::deque<int> d9 = {1, 2, 3};
d9[0] = 42;
int x = d9[2];
````

#### Front
 
````
reference front();
const_reference front() const;
````

##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d10 = {1, 2, 3};
d10.front() = 42;
int x = d10.front();
````

#### Back
 
````
reference back();
const_reference back() const;
````

##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d11 = {1, 2, 3};
d11.back() = 42;
int x = d11.back();
````

### Iterators

#### Begin and End
 
````
iterator begin() noexcept;
const_iterator begin() const noexcept;
const_iterator cbegin() const noexcept;
````

#### iterator end()

 
````
iterator end() noexcept;
const_iterator end() const noexcept;
const_iterator cend() const noexcept;
````

##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d12 = {1, 2, 3};
for (auto it = d12.begin(); it != d12.end(); ++it) {
    std::cout << *it << ' ';
}
````

#### Rbegin and Rend
 
````
reverse_iterator rbegin() noexcept;
const_reverse_iterator rbegin() const noexcept;
const_reverse_iterator crbegin() const noexcept;

reverse_iterator rend() noexcept;
const_reverse_iterator rend() const noexcept;
const_reverse_iterator crend() const noexcept;
````

##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d13 = {1, 2, 3};
for (auto it = d13.rbegin(); it != d13.rend(); ++it) {
    std::cout << *it << ' ';
}
````

#### Capacity

#### Empty
 
````
bool empty() const noexcept;
````

##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d14;
if (d14.empty()) {
    std::cout << "deque is empty\n";
}
````

#### Size
 
````
size_type size() const noexcept;
````

##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d15 = {1, 2, 3};
std::cout << "size: " << d15.size() << '\n';
````

#### Max Size
 
````
size_type max_size() const noexcept;
````

##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d16;
std::cout << "max size: " << d16.max_size() << '\n';
````

### Modifiers

#### Assign
 
````
void assign(size_type count, const T& value);
template<class InputIt>
void assign(InputIt first, InputIt last);
void assign(std::initializer_list<T> ilist);
````

##### Complexity: Linear time in the size of the assigned range.

#### Example:
 
````
std::deque<int> d17;
d17.assign(3, 42); // assign 3 ints with value 42
std::vector<int> v2 = {1, 2, 3};
d17.assign(v2.begin(), v2.end()); // assign the elements of the vector
d17.assign({4, 5, 6}); // assign the elements of an initializer list
````

#### Push Front
 
````
void push_front(const T& value);
void push_front(T&& value);
````

##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d18 = {2, 3};
d18.push_front(1);
````

#### Pop Front
 
````
void pop_front();
````

##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d19 = {1, 2, 3};
d19.pop_front();
````

#### Push Back
 
````
void push_back(const T& value);
void push_back(T&& value);
````

##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d20 = {1, 2};
d20.push_back(3);
````

#### Pop Back
 
````
void pop_back();
````

##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d21 = {1, 2, 3};
d21.pop_back();

 
iterator insert(const_iterator pos, const T& value);
iterator insert(const_iterator pos, T&& value);
iterator insert(const_iterator pos, size_type count, const T& value);
template<class InputIt>
iterator insert(const_iterator pos, InputIt first, InputIt last);
iterator insert(const_iterator pos, std::initializer_list<T> ilist);
````

##### Complexity: Linear time in the number of elements inserted plus the distance to the end of the deque.

#### Example:
 
````
std::deque<int> d22 = {1, 2, 5};
auto it = d22.begin() + 2; // points to 5
d22.insert(it, 3, 4); // inserts 4, 4, 4 before 5
d22.insert(d22.end(), {6, 7, 8}); // inserts 6, 7, 8 at the end of the deque
````

#### Erase
 
````
iterator erase(const_iterator pos);
iterator erase(const_iterator first, const_iterator last);
````

##### Complexity: Linear time in the number of elements erased plus the distance to the end of the deque.

#### Example:
 
````
std::deque<int> d23 = {1, 2, 3, 4, 5};
auto it1 = d23.begin() + 1; // points to 2
auto it2 = d23.end() - 2; // points to 4
d23.erase(it1); // erases 2
d23.erase(it2, d23.end()); // erases 4 and 5
````

#### Swap
 
````
void swap(deque& other) noexcept(std::allocator_traits<Allocator>::is_always_equal::value);
````

##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d24 = {1, 2, 3};
std::deque<int> d25 = {4, 5, 6};
d24.swap(d25);
````

#### Clear
 
````
void clear() noexcept;
````

##### Complexity: Linear time in the number of elements.

#### Example:
 
````
std::deque<int> d26 = {1, 2, 3};
d26.clear();
````

### Allocator

#### Get Allocator
 
````
allocator_type get_allocator() const noexcept;
````

##### Complexity: Constant time.

#### Example:
 
````
std::deque<int> d27 = {1, 2, 3};
auto a = d27.get_allocator();
````

-----------------------------------------------------------------------------------------------------------------------------------
### std::list (doubly linked list)

 #### Here is a list of all methods available for std::list along with their time complexity and examples:

#### Constructors

````
list() noexcept;
explicit list(const Allocator& alloc) noexcept;
explicit list(size_type count);
list(size_type count, const T& value, const Allocator& alloc = Allocator());
template<class InputIt>
list(InputIt first, InputIt last, const Allocator& alloc = Allocator());
list(const list& other);
list(const list& other, const Allocator& alloc);
list(list&& other) noexcept;
list(list&& other, const Allocator& alloc) noexcept;
list(initializer_list<T> init, const Allocator& alloc = Allocator());
Complexity: Linear time in the number of elements constructed.
````

#### Example:

```` 
std::list<int> l1; // creates an empty list
 
std::list<int> l2(5, 42); // creates a list with 5 elements, each initialized to 42
 
std::list<int> l3(l2.begin(), l2.end()); // creates a copy of l2
 
std::list<int> l4 = {1, 2, 3}; // creates a list with three elements, 1, 2, and 3
````

#### Assign
 
````
void assign(size_type count, const T& value);
 
template<class InputIt>
 
void assign(InputIt first, InputIt last);
 
 void assign(initializer_list<T> ilist);
 
Complexity: Linear time in the number of elements assigned.

````

#### Example:

```` 
std::list<int> l5 = {1, 2, 3};
 
l5.assign(5, 42); // assigns 5 elements with value 42 to l5
 
std::vector<int> v = {4, 5, 6};
 
l5.assign(v.begin(), v.end()); // assigns the elements of v to l5
````

#### Size
 
````
bool empty() const noexcept;
 
size_type size() const noexcept;
 
size_type max_size() const noexcept;
 
Complexity: Constant time.
````

#### Example:
 
````
std::list<int> l6 = {1, 2, 3};
 
bool b = l6.empty(); // returns false
 
size_t s1 = l6.size(); // returns 3
 
size_t s2 = l6.max_size(); // returns the maximum number of elements the list can hold
````

#### Element Access
 
````
reference front();
 
const_reference front() const;
 
reference back();
 
const_reference back() const;
 
Complexity: Constant time.
````

#### Example:

````
std::list<int> l7 = {1, 2, 3};
 
int& f = l7.front(); // returns a reference to the first element
 
const int& c_f = l7.front(); // returns a const reference to the first element
 
int& b = l7.back(); // returns a reference to the last element
 
const int& c_b = l7.back(); // returns a const reference to the last element
````

#### Insert

```` 
iterator insert(const_iterator pos, const T& value);
 
iterator insert(const_iterator pos, T&& value);
 
iterator insert(const_iterator pos, size_type count, const T& value);
 
template<class InputIt>
 
iterator insert(const_iterator pos, InputIt first, InputIt last);
 
iterator insert(const_iterator pos, initializer_list<T> ilist);
 
Complexity: Linear time in the number of elements inserted plus the distance to the end of the list.
````

#### Example:
 
````
std::list<int> l8 = {1, 2, 5};
 
auto it = l8.begin() + 2; //


l8.insert(it, 3); // inserts the element 3 before the element at position it
 
std::vector<int> v = {4, 6};
 
l8.insert(it, v.begin(), v.end()); // inserts the elements of v before the element at position it
````

#### Erase

````
iterator erase(const_iterator pos);
 
iterator erase(const_iterator first, const_iterator last);
 
Complexity: Linear time in the number of elements erased plus the distance to the end of the list.
````

#### Example:

```` 
std::list<int> l9 = {1, 2, 3, 4, 5};
 
auto it1 = l9.begin() + 2;
 
auto it2 = l9.begin() + 4;
 
l9.erase(it1); // erases the element at position it1
 
l9.erase(it1, it2); // erases the elements in the range [it1, it2)
````

#### Push and Pop

```` 
void push_front(const T& value);
 
void push_front(T&& value);
 
void push_back(const T& value);
 
void push_back(T&& value);
 
void pop_front();
 
void pop_back();
 
Complexity: Constant time.
````

#### Example:

```` 
std::list<int> l10 = {1, 2, 3};
 
l10.push_front(0); // inserts the element 0 at the beginning of the list
 
l10.pop_front(); // removes the first element of the list
 
l10.push_back(4); // inserts the element 4 at the end of the list
 
l10.pop_back(); // removes the last element of the list
````

#### Resize

```` 
void resize(size_type count);
 
void resize(size_type count, const value_type& value);
 
Complexity: Linear time in the number of elements inserted or removed.
````

#### Example:

```` 
std::list<int> l11 = {1, 2, 3};
 
l11.resize(5); // adds 2 default-initialized elements to the end of the list
 
l11.resize(2); // removes 1 element from the end of the list
 
l11.resize(4, 0); // adds 2 elements with value 0 to the end of the list
````

#### Swap

```` 
void swap(list& other) noexcept;
 
Complexity: Constant time.
````

Example:

```` 
std::list<int> l12 = {1, 2, 3};
 
std::list<int> l13 = {4, 5, 6};
 
l12.swap(l13); // swaps the contents of l12 and l13
````

#### Splice

```` 
void splice(const_iterator pos, list& other);
 
void splice(const_iterator pos, list&& other);
 
void splice(const_iterator pos, list& other, const_iterator it);
 
void splice(const_iterator pos, list&& other, const_iterator it);
 
void splice(const_iterator pos, list& other, const_iterator first, const_iterator last);
 
void splice(const_iterator pos, list&& other, const_iterator first, const_iterator last);
 
Complexity: Linear time in the number of elements inserted plus the distance between pos and the end of the list plus the distance between first and last.
````

#### Example:
 
````
std::list<int> l14 = {1, 2, 3};
 
std::list<int> l15 = {4, 5, 6};
 
auto it = l15.begin() + 2;
 
l14.splice(l14.begin() + 2, l15); // moves all the elements of l15 to l14, inserting them before the element at position 2
````

#### Remove and Remove If

```` 
void remove(const T& value);
 
template <class Predicate>
 
void remove_if(Predicate pred);
 
Complexity: Linear time in the number of elements.
````

#### Example:

```` 
std::list<int> l16 = {1, 2, 2, 3, 2, 4};
 
l16.remove(2); // removes all elements equal to 2 from the list
 
l16.remove_if([](int x){ return x % 2 == 0; }); // removes all even elements from the list
````

#### Unique

```` 
void unique();
 
template <class BinaryPredicate>
 
void unique(BinaryPredicate pred);
 
Complexity: Linear time in the number of elements.
````

Example:
 
````
std::list<int> l17 = {1, 1, 2, 2, 2, 3, 4, 4};
 
l17.unique(); // removes consecutive duplicates from the list
 
l17.unique([](int x, int y){ return x % 2 == y % 2; }); // removes consecutive elements that have the same parity from the list
````

#### Merge

```` 
void merge(list& other);
 
void merge(list&& other);
 
template <class Compare>
 
void merge(list& other, Compare comp);
 
template <class Compare>
 
void merge(list&& other, Compare comp);
 
Complexity: Linear time in the total number of elements in the two lists.
````

#### Example:

```` 
std::list<int> l18 = {1, 3, 5};
 
std::list<int> l19 = {2, 4, 6};
 
l18.merge(l19); // merges the two sorted lists into l18, preserving the order
````

#### Sort

```` 
void sort();
 
template <class Compare>
 
void sort(Compare comp);
 
Complexity: O(n log n) comparisons and swaps, where n is the number of elements.
````

#### Example:

```` 
std::list<int> l20 = {3, 2, 1, 4};
 
l20.sort(); // sorts the list in ascending order
 
l20.sort([](int x, int y){ return x > y; }); // sorts the list in descending order
````

#### Reverse

```` 
void reverse();
 
Complexity: Linear time in the number of elements.
````

#### Example:

```` 
 
std::list<int> l21 = {1, 2, 3};
 
l21.reverse(); // reverses the order of the elements in the list
````

#### Note that some of the methods in std::list are not available in other standard containers, such as std::vector and std::deque. For example, splice, remove, unique, merge, sort, and reverse are only available in std::list.

------------------------------------------------------------------------------------------------------
### std::forward_list(singly linked list)

``
list of all methods with time complexity and example
std::forward_list is a container class that provides a singly linked list data structure. Here is a list of all methods with their time *complexity* and an example for each:
``

#### Constructors
 
````
forward_list();

explicit forward_list(const Allocator& alloc);

explicit forward_list(size_type count);

explicit forward_list(size_type count, const T& value);

template<class InputIt>

forward_list(InputIt first, InputIt last);

forward_list(const forward_list& other);

forward_list(const forward_list& other, const Allocator& alloc);

forward_list(forward_list&& other);

forward_list(forward_list&& other, const Allocator& alloc);

forward_list(initializer_list<T> init);

*Complexity*: Depends on the constructor being used. Default constructor and constructor with an allocator are constant time. Constructor with a count argument is linear time in the count. Constructor with a range of iterators is linear time in the size of the range.
````
#### Example:

````
std::forward_list<int> fl1; // default constructor

std::forward_list<int> fl2(5); // creates a list with 5 default-initialized elements

std::forward_list<int> fl3(3, 42); // creates a list with 3 elements, all initialized to 42

std::forward_list<int> fl4 = {1, 2, 3}; // creates a list from an initializer list

std::forward_list<int> fl5(fl4); // copy constructor

std::forward_list<int> fl6(std::move(fl4)); // move constructor
````

#### Assign
````
void assign(size_type count, const T& value);

template<class InputIt>

void assign(InputIt first, InputIt last);

void assign(initializer_list<T> init);
 ````
 
 *Complexity*: Depends on the arguments passed. Constant time for count and initializer list arguments. Linear time in the size of the range for iterator arguments.

#### Example:
 
```` 
std::forward_list<int> fl7;

fl7.assign(5, 42); // replaces the contents of fl7 with 5 elements, all initialized to 42

fl7.assign({1, 2, 3}); // replaces the contents of fl7 with the elements of the initializer list
````
 
#### Push and Pop
 
```` 
void push_front(const T& value);

void push_front(T&& value);

void pop_front();

*Complexity*: Constant time.
````
 
#### Example:
 
````
std::forward_list<int> fl8;

fl8.push_front(1); // adds 1 to the front of the list

fl8.push_front(2); // adds 2 to the front of the list

fl8.pop_front(); // removes the first element of the list (2)
````
 
#### Insert
 
```` 
iterator insert_after(const_iterator pos, const T& value);

iterator insert_after(const_iterator pos, T&& value);

iterator insert_after(const_iterator pos, size_type count, const T& value);

template<class InputIt>

iterator insert_after(const_iterator pos, InputIt first, InputIt last);

iterator insert_after(const_iterator pos, initializer_list<T> init);

*Complexity*: Depends on the arguments passed. Constant time for a single value argument. Linear time in the count for a count 
argument. Linear time in the size of the range for iterator and initializer list arguments.
````
 
#### Example:
 
```` 
std::forward_list<int> fl9 = {1, 3, 4};

auto it = fl9.insert_after(fl9.begin(), 2); // inserts 2 after the first element

fl9.insert_after(it, {5, 6}); // inserts 5 and 6 after the second element
````
 
#### Erase

```` 
iterator erase_after(const_iterator pos);

iterator erase_after(const_iterator first, const_iterator last);

*Complexity*: Constant time for a single element. Linear time in the number of elements removed for a range of elements.
````

#### Example:
 
```` 
std::forward_list<int> fl10 = {1, 2, 3, 4};

fl10.erase_after(fl10.before_begin()); // removes the first element

auto it2 = fl10.begin();

std::advance(it2, 2);

fl10.erase_after(fl10.before_begin(), it2); // removes the first two elements
````
 
#### Resize
 
```` 
void resize(size_type count);

void resize(size_type count, const value_type& value);

*Complexity*: Linear time in the difference between the current size and the new size.
````
 
#### Example:
 
```` 
std::forward_list<int> fl11 = {1, 2, 3};

fl11.resize(5); // adds 2 default-initialized elements to the end of the list

fl11.resize(2); // removes the last 3 elements of the list
````
 
#### Splice
 
```` 
void splice_after(const_iterator pos, forward_list& other);

void splice_after(const_iterator pos, forward_list&& other);

void splice_after(const_iterator pos, forward_list& other, const_iterator it);

void splice_after(const_iterator pos, forward_list&& other, const_iterator it);

void splice_after(const_iterator pos, forward_list& other, const_iterator first, const_iterator last);

void splice_after(const_iterator pos, forward_list&& other, const_iterator first, const_iterator last);

*Complexity*: Constant time for all methods except for the last one, which is linear time in the number of elements being moved.
````
 
#### Example:
 
 ````
std::forward_list<int> fl12 = {1, 2, 3};

std::forward_list<int> fl13 = {4, 5};

auto it3 = fl12.begin();

std::advance(it3, 2);

fl12.splice_after(it3, fl13); // moves the contents of fl13 after the third element of fl12
````
 
#### Remove
 
```` 
void remove(const T& value);

template<class UnaryPredicate>

void remove_if(UnaryPredicate p);

*Complexity*: Linear time in the number of elements in the list.
````
 
#### Example:
 
```` 
std::forward_list<int> fl14 = {1, 2, 3, 2};

fl14.remove(2); // removes all elements with value 2
````
 
#### Reverse
 
```` 
void reverse() noexcept;

*Complexity*: Linear time in the number of elements in the list.
````
 
#### Example:
 
```` 
std::forward_list<int> fl15 = {1, 2, 3};

fl15.reverse(); // reverses the order of elements in the list
````

#### Sort
 
```` 
void sort();

template<class Compare>

void sort(Compare comp);

*Complexity*: O(n log n) comparisons and swaps, where n is the number of elements in the list.
````
 
#### Example:
 
```` 
std::forward_list<int> fl16 = {3, 1, 2};

fl16.sort(); // sorts the list in ascending order
````
 
#### Note that std::forward_list does not provide random access to its elements, so methods such as at, operator[], and front are not available.
 
 ------------------------------------------------------------------------------------------------------------------------
 
### std::set

### Constructors

````
set();
explicit set(const Compare& comp);
template<class InputIterator>
set(InputIterator first, InputIterator last);
template<class InputIterator>
set(InputIterator first, InputIterator last, const Compare& comp);
set(const set& other);
set(set&& other) noexcept;
set(initializer_list<value_type> ilist);
set(initializer_list<value_type> ilist, const Compare& comp);
Complexity: Linear in the number of elements being constructed.
````

### Example:
 
````
std::set<int> s1; // constructs an empty set
std::set<int, std::greater<int>> s2(std::greater<int>()); // constructs an empty set with a custom comparator
std::set<int> s3{1, 2, 3}; // constructs a set with three elements
std::set<int> s4(s3); // constructs a copy of s3
````

### Insert

```` 
std::pair<iterator, bool> insert(const value_type& value);
std::pair<iterator, bool> insert(value_type&& value);
iterator insert(const_iterator hint, const value_type& value);
iterator insert(const_iterator hint, value_type&& value);
template<class InputIterator>
void insert(InputIterator first, InputIterator last);
void insert(initializer_list<value_type> ilist);
template<class... Args>
std::pair<iterator, bool> emplace(Args&&... args);
template<class... Args>
iterator emplace_hint(const_iterator hint, Args&&... args);
Complexity: Logarithmic in the size of the container, except for the range-based insert method, which is linear in the size of the range being inserted.
````

### Example:

````
std::set<int> s5;
s5.insert(1); // inserts the value 1 into the set
s5.insert({2, 3}); // inserts the values 2 and 3 into the set
auto it1 = s5.insert(4); // inserts the value 4 into the set and returns an iterator to it
s5.emplace(5); // constructs a new element with the value 5 and inserts it into the set
````

### Erase

```` 
void erase(iterator pos);
void erase(const_iterator pos);
size_type erase(const key_type& key);
void erase(iterator first, iterator last);
void erase(const_iterator first, const_iterator last);
Complexity: Logarithmic in the size of the container for single-element erases, linear in the number of elements being erased for range erases.
````

### Example:
 
````
std::set<int> s6{1, 2, 3};
s6.erase(s6.begin()); // erases the first element of the set
s6.erase(2); // erases the element with value 2 from the set
auto it2 = s6.begin();
std::advance(it2, 1);
s6.erase(s6.begin(), it2); // erases the first two elements of the set
````

### Lookup
 
````
iterator find(const key_type& key);
const_iterator find(const key_type& key) const;
size_type count(const key_type& key) const;
bool contains(const key_type& key) const;
Complexity: Logarithmic in the size of the container.
````

### Example:
 
````
std::set<int> s7{1, 2, 3};
auto it3 = s7.find(2); // returns an iterator to the element with value 2
if (s7.contains(3)) { // returns true if the set contains an element with value 3
    // do something
}
````


### Iterators
 
````
iterator begin();
const_iterator begin() const;
const_iterator cbegin() const;
iterator end();
const_iterator end() const;
const_iterator cend() const;
reverse_iterator rbegin();
const_reverse_iterator rbegin() const;
const_reverse_iterator crbegin() const;
reverse_iterator rend();
const_reverse_iterator rend() const;
const_reverse_iterator crend() const;
Complexity: Constant time.
````

### Example:
 
````
std::set<int> s8{1, 2, 3};
for (auto it4 = s8.begin(); it4 != s8.end(); ++it4) {
    // do something with *it4
}
for (auto x : s8) {
    // do something with x
}
````

### Size and capacity
 
````
bool empty() const;
size_type size() const;
size_type max_size() const;
Complexity: Constant time.
````

### Example:
 
````
std::set<int> s9{1, 2, 3};
if (!s9.empty()) { // returns true if the set is not empty
    // do something
}
std::cout << s9.size() << '\n'; // prints the number of elements in the set
````

### Comparison

```` 
bool operator==(const set& other) const;
bool operator!=(const set& other) const;
bool operator<(const set& other) const;
bool operator<=(const set& other) const;
bool operator>(const set& other) const;
bool operator>=(const set& other) const;
Complexity: Linear in the size of the smaller container being compared.
````

### Example:
 
````
std::set<int> s10{1, 2, 3};
std::set<int> s11{1, 2, 3};
if (s10 == s11) { // returns true if the two sets are equal
    // do something
}
if (s10 < s11) { // returns true if s10 is lexicographically less than s11
    // do something
}
````

#### Note: The time complexities given above are for the average case. In the worst case, the time complexity for some operations may degrade to linear in the size of the container. 

------------------------------------------------------------------------------------------------------------------------
### std::multiset

> Multisets : Multisets are associative containers that store multiple elements having equivalent values following a specific order. Following are the properties of multisets:

* Stores elements in sorted order. 
* It allows the storage of multiple elements. 
* We can erase more than 1 element by giving the start iterator and end iterator. 

### Iterators

````
iterator begin();
const_iterator begin() const;
const_iterator cbegin() const;
iterator end();
const_iterator end() const;
const_iterator cend() const;
reverse_iterator rbegin();
const_reverse_iterator rbegin() const;
const_reverse_iterator crbegin() const;
reverse_iterator rend();
const_reverse_iterator rend() const;
const_reverse_iterator crend() const;
Complexity: Constant time.
````

### Example:
 
````
std::multiset<int> ms1{1, 2, 3};
for (auto it1 = ms1.begin(); it1 != ms1.end(); ++it1) {
    // do something with *it1
}
for (auto x : ms1) {
    // do something with x
}
````

### Size and capacity

```` 
bool empty() const;
size_type size() const;
size_type max_size() const;
Complexity: Constant time.
````


### Example:

```` 
std::multiset<int> ms2{1, 2, 3};
if (!ms2.empty()) { // returns true if the multiset is not empty
    // do something
}
std::cout << ms2.size() << '\n'; // prints the number of elements in the multiset
````

### Modifiers

```` 
iterator insert(const value_type& value);
iterator insert(iterator hint, const value_type& value);
void insert(std::initializer_list<value_type> ilist);
template<class InputIt>
void insert(InputIt first, InputIt last);
template<class... Args>
iterator emplace(Args&&... args);
template<class... Args>
iterator emplace_hint(iterator hint, Args&&... args);
iterator erase(iterator position);
size_type erase(const key_type& key);
iterator erase(iterator first, iterator last);
void clear() noexcept;
Complexity: Average case is logarithmic in the size of the container, worst case is linear in the size of the container.
````

### Example:

```` 
std::multiset<int> ms3;
ms3.insert(1); // inserts the value 1 into the multiset
ms3.insert(2);
ms3.insert(2);
ms3.insert(3);
auto it2 = ms3.emplace_hint(ms3.begin(), 0); // inserts the value 0 into the multiset using a hint iterator
ms3.erase(it2); // removes the element pointed to by it2 from the multiset
ms3.erase(2); // removes all elements with the value 2 from the multiset
ms3.clear(); // removes all elements from the multiset
````

### Lookup

```` 
iterator find(const key_type& key);
const_iterator find(const key_type& key) const;
size_type count(const key_type& key) const;
iterator lower_bound(const key_type& key);
const_iterator lower_bound(const key_type& key) const;
iterator upper_bound(const key_type& key);
const_iterator upper_bound(const key_type& key) const;
std::pair<iterator, iterator> equal_range(const key_type& key);
std::pair<const_iterator, const_iterator> equal_range(const key_type& key) const;
Complexity: Average case is logarithmic in the size of the container, worst case is linear in the size of the container.
````

### Example:

```` 
std::multiset<int> ms4{1, 2, 2, 3};
auto it3 = ms4.find(2); // returns an iterator to the first element with the value 2
auto cnt = ms4.count(2); // returns the number of elements with the value 2 in the multiset
auto lb = ms4.lower_bound(2

std::multiset<int> ms4{1, 2, 2, 3};
auto it3 = ms4.find(2); // returns an iterator to the first element with the value 2
auto cnt = ms4.count(2); // returns the number of elements with the value 2 in the multiset
auto lb = ms4.lower_bound(2); // returns an iterator to the first element that is not less than 2
auto ub = ms4.upper_bound(2); // returns an iterator to the first element that is greater than 2
auto eq = ms4.equal_range(2); // returns a pair of iterators to the first and last elements with the value 2
````

### Miscellaneous

```` 
key_compare key_comp() const;
value_compare value_comp() const;
Complexity: Constant time.
````

### Example:

```` 
std::multiset<int> ms5{1, 2, 3};
auto kc = ms5.key_comp(); // returns the comparison function used to order the keys in the multiset
auto vc = ms5.value_comp(); // returns the comparison function used to order the values in the multiset
````

#### Note: The complexity of some methods may depend on the comparison function used to order the elements in the multiset. The examples shown above use the default comparison function, which is std::less. 
------------------------------------------------------------------------------------------------------------------------
 
### std::map

list of all methods with time complexity and example

#### Element access

````
T& operator[](const Key& key);
T& operator[](Key&& key);
T& at(const Key& key);
const T& at(const Key& key) const;
Complexity: Logarithmic time in the size of the map.
````

#### Example: 

```` 
std::map<int, std::string> m1{{1, "one"}, {2, "two"}};
m1[3] = "three"; // inserts a new element with key 3 and value "three"
std::cout << m1[2] << '\n'; // prints "two"
std::cout << m1.at(1) << '\n'; // prints "one"
````

#### Modifiers

```` 
template <typename... Args>
std::pair<iterator, bool> emplace(Args&&... args);
template <typename... Args>
iterator emplace_hint(const_iterator position, Args&&... args);
std::pair<iterator, bool> insert(const value_type& value);
std::pair<iterator, bool> insert(value_type&& value);
iterator insert(const_iterator hint, const value_type& value);
iterator insert(const_iterator hint, value_type&& value);
template <typename InputIt>
void insert(InputIt first, InputIt last);
void insert(std::initializer_list<value_type> ilist);
iterator erase(const_iterator position);
size_type erase(const key_type& key);
iterator erase(const_iterator first, const_iterator last);
void swap(map& other);
void clear() noexcept;
Complexity: Logarithmic time in the size of the map, except for insert and emplace, which have average constant time complexity when the insertion position is given by a hint iterator.
````

#### Example: 

```` 
std::map<int, std::string> m2;
m2.emplace(1, "one"); // inserts a new element with key 1 and value "one"
m2.emplace_hint(m2.end(), 2, "two"); // inserts a new element with key 2 and value "two" at the end of the map
m2.insert(std::make_pair(3, "three")); // inserts a new element with key 3 and value "three"
m2.insert({4, "four"}); // inserts a new element with key 4 and value "four"
m2.erase(2); // erases the element with key 2
m2.swap(m1); // swaps the contents of m1 and m2
m2.clear(); // erases all elements from the map
````

#### Lookup

```` 
iterator find(const Key& key);
const_iterator find(const Key& key) const;
size_type count(const Key& key) const;
iterator lower_bound(const Key& key);
const_iterator lower_bound(const Key& key) const;
iterator upper_bound(const Key& key);
const_iterator upper_bound(const Key& key) const;
std::pair<iterator, iterator> equal_range(const Key& key);
std::pair<const_iterator, const_iterator> equal_range(const Key& key) const;
Complexity: Logarithmic time in the size of the map.
````

#### Example: 

```` 
std::map<int, std::string> m3{{1, "one"}, {2, "two"}, {2, "three"}};
auto it1 = m3.find(2); // returns an iterator to the first element with the key 2
auto cnt = m3.count(2); // returns the number of elements with the key 2 in the map
auto lb = m3.lower_bound(2); // returns an iterator to the first element that is not less than 2
auto ub = m
````

```` 
m3.upper_bound(2); // returns an iterator to the first element that is greater than 2
auto eq = m3.equal_range(2); // returns a pair of iterators delimiting the range of elements with the key 2
````

#### Observers

```` 
key_compare key_comp() const;
value_compare value_comp() const;
Complexity: Constant time.
````

#### Example: 

```` 
std::map<int, std::string> m4{{1, "one"}, {2, "two"}, {3, "three"}};
auto kc = m4.key_comp(); // returns the key comparison function of the map
auto vc = m4.value_comp(); // returns the value comparison function of the map
````

#### Operations

```` 
iterator begin() noexcept;
const_iterator begin() const noexcept;
iterator end() noexcept;
const_iterator end() const noexcept;
reverse_iterator rbegin() noexcept;
const_reverse_iterator rbegin() const noexcept;
reverse_iterator rend() noexcept;
const_reverse_iterator rend() const noexcept;
bool empty() const noexcept;
size_type size() const noexcept;
size_type max_size() const noexcept;
void swap(map& other);
Complexity: Constant time.
````

#### Example: 

```` 
std::map<int, std::string> m5{{1, "one"}, {2, "two"}};
auto it2 = m5.begin(); // returns an iterator to the first element of the map
auto rit = m5.rbegin(); // returns a reverse iterator to the last element of the map
auto e = m5.empty(); // returns false if the map is not empty, true otherwise
auto sz = m5.size(); // returns the number of elements in the map
auto msz = m5.max_size(); // returns the maximum number of elements the map can hold
````

#### Allocator

```` 
allocator_type get_allocator() const noexcept;
Complexity: Constant time.
````

#### Example: 

```` 
std::map<int, std::string> m6{{1, "one"}, {2, "two"}};
auto alloc = m6.get_allocator(); // returns the allocator associated with the map
````

That concludes the list of all methods in std::map and their time complexities.

---------------------------------------------------------------------------------------------------------------------------
### std::multimap

list of all methods with time complexity and example

> std::multimap is an associative container that stores a collection of key-value pairs with multiple keys allowed. The keys are ordered based on a strict weak ordering criterion and allow duplicate keys. Here is the list of all methods in std::multimap, their time complexities, and examples.

#### Constructors

````
multimap() noexcept;
explicit multimap(const key_compare& comp, const allocator_type& alloc = allocator_type());
template <class InputIt>
multimap(InputIt first, InputIt last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
multimap(const multimap& other);
multimap(const multimap& other, const allocator_type& alloc);
multimap(multimap&& other) noexcept;
multimap(multimap&& other, const allocator_type& alloc);
multimap(std::initializer_list<value_type> init, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
Complexity: Linear in the size of the range [first, last] for the range constructor, and constant time for the rest.
````

#### Example: 
````
std::multimap<int, std::string> m1; // constructs an empty multimap
std::multimap<int, std::string> m2{{1, "one"}, {2, "two"}, {3, "three"}}; // constructs a multimap with three elements
std::multimap<int, std::string> m3(m2); // constructs a multimap with the same elements as m2
std::multimap<int, std::string> m4(std::move(m2)); // constructs a multimap by moving the elements from m2 to m4
std::multimap<int, std::string> m5{{1, "one"}, {2, "two"}, {2, "dos"}, {3, "three"}}; // constructs a multimap with duplicate keys
Assignment

multimap& operator=(const multimap& other);
multimap& operator=(multimap&& other) noexcept;
multimap& operator=(std::initializer_list<value_type> init);
void swap(multimap& other);
Complexity: Linear in the size of the container being copied/moved/assigned for the copy/move/assignment operator, and linear in the size of the range [first, last] for the assignment with initializer list. Constant time for swap().
````
#### Example: 
````
std::multimap<int, std::string> m1{{1, "one"}, {2, "two"}};
std::multimap<int, std::string> m2{{3, "three"}, {4, "four"}};
m1 = m2; // assigns m2 to m1
m1 = std::multimap<int, std::string>{{5, "five"}, {6, "six"}}; // assigns a new multimap to m1
m2 = std::move(m1); // moves the elements from m1 to m2
m1 = {{1, "one"}, {2, "two"}}; // assigns a multimap with two elements to m1
m1.swap(m2); // swaps the elements of m1 and m2
Iterators

iterator begin() noexcept;
const_iterator begin() const noexcept;
iterator end() noexcept;
const_iterator end() const noexcept;
reverse_iterator rbegin() noexcept;
const_reverse_iterator rbegin() const noexcept;
reverse_iterator rend() noexcept;
const_reverse_iterator rend() const noexcept;
const_iterator cbegin() const noexcept;
const_iterator cend() const noexcept;
const_reverse_iterator crbegin()


const_reverse_iterator crend() const noexcept;
Complexity: Constant time.
````
#### Example:
````
std::multimap<int, std::string> m{{1, "one"}, {2, "two"}};
for (auto it = m.begin(); it != m.end(); ++it) {
    std::cout << it->first << " -> " << it->second << std::endl;
}
`````
#### Capacity
````
bool empty() const noexcept;
size_type size() const noexcept;
size_type max_size() const noexcept;
Complexity: Constant time.
````
#### Example:
````
std::multimap<int, std::string> m{{1, "one"}, {2, "two"}};
if (!m.empty()) {
    std::cout << "The size of the multimap is " << m.size() << std::endl;
}
std::cout << "The maximum size of the multimap is " << m.max_size() << std::endl;
````
#### Modifiers
````
void clear() noexcept;
iterator insert(const value_type& value);
iterator insert(iterator hint, const value_type& value);
template <class InputIt>
void insert(InputIt first, InputIt last);
void insert(std::initializer_list<value_type> init);
template <class... Args>
iterator emplace(Args&&... args);
template <class... Args>
iterator emplace_hint(iterator hint, Args&&... args);
iterator erase(iterator pos);
iterator erase(iterator first, iterator last);
size_type erase(const key_type& key);
void swap(multimap& other);
void merge(multimap& other);
void merge(multimap&& other);
void merge(std::initializer_list<value_type> init);
Complexity: Logarithmic in the size of the container plus linear in the number of elements inserted for the insert() methods. Constant time for clear(). Linear in the number of elements erased plus logarithmic in the size of the container for the erase() methods. Linear in the size of the range [first, last] for the insert() method that takes a range. Logarithmic in the number of elements being emplaced plus logarithmic in the size of the container for the emplace() methods. Logarithmic in the size of the container for erase(key). Linear in the size of the container being merged plus the size of the argument for the merge() methods. Constant time for swap().
````
#### Example: 
````
std::multimap<int, std::string> m{{1, "one"}, {2, "two"}};
m.insert({3, "three"});
m.emplace(4, "four");
m.erase(m.find(2));
m.merge(std::multimap<int, std::string>{{5, "five"}, {6, "six"}});
````
#### Observers
````
key_compare key_comp() const;
value_compare value_comp() const;
Complexity: Constant time.
````
#### Example:
````
std::multimap<int, std::string> m{{2, "two"}, {1, "one"}};
auto key_comp = m.key_comp();
auto value_comp = m.value_comp();
std::cout << "The keys are sorted in ascending order: " << key_comp(1, 2) << std::endl;
std::cout << "The values are compared using the keys: " << value_comp(*m.begin(), *std::next(m.begin())) << std::endl;
````
#### Operations with other containers
````
template <class InputIt>
void assign(InputIt first, InputIt last);
void assign(std::initializer_list<value_type> init);
void assign(size_type count, const value_type& value);
allocator_type get_allocator() const noexcept;
Complexity: Linear in the size of the range [first, last] for the assign() method that takes a range. Linear in the number of elements being assigned for the assign() method that takes a count and value. Constant time for get_allocator().
````
#### Example:
````
std::multimap<int, std::string> m1{{1, "one"}, {2, "two"}};
std::multimap<int, std::string> m2;
m2.assign(m1.begin(), m1.end());
````

#### Lookup
````
iterator find(const key_type& key);
const_iterator find(const key_type& key) const;
template <class K>
iterator find(const K& x);
template <class K>
const_iterator find(const K& x) const;
size_type count(const key_type& key) const;
template <class K>
size_type count(const K& x) const;
iterator lower_bound(const key_type& key);
const_iterator lower_bound(const key_type& key) const;
template <class K>
iterator lower_bound(const K& x);
template <class K>
const_iterator lower_bound(const K& x) const;
iterator upper_bound(const key_type& key);
const_iterator upper_bound(const key_type& key) const;
template <class K>
iterator upper_bound(const K& x);
template <class K>
const_iterator upper_bound(const K& x) const;
std::pair<iterator, iterator> equal_range(const key_type& key);
std::pair<const_iterator, const_iterator> equal_range(const key_type& key) const;
template <class K>
std::pair<iterator, iterator> equal_range(const K& x);
template <class K>
std::pair<const_iterator, const_iterator> equal_range(const K& x) const;
Complexity:

Logarithmic time in the size of the container for find(), count(), lower_bound(), upper_bound(), and equal_range().
````
#### Example:

````
std::multimap<int, std::string> m{{1, "one"}, {2, "two"}, {3, "three"}, {3, "trois"}};
auto it = m.find(2);
if (it != m.end()) {
    std::cout << "Found element with key 2: " << it->second << std::endl;
}
std::cout << "Number of elements with key 3: " << m.count(3) << std::endl;
auto range = m.equal_range(3);
for (auto it = range.first; it != range.second; ++it) {
    std::cout << "Element with key 3: " << it->second << std::endl;
}
````
------------------------------------------------------------------------------------------------------------
### std::stack
list of all methods with time complexity and example

#### Element access
````
reference top();
const_reference top() const;
Complexity:

Constant time for both operations.
````
#### Example:

````
std::stack<int> s;
s.push(1);
s.push(2);
std::cout << "Top element of the stack: " << s.top() << std::endl;
````
#### Capacity
````
bool empty() const noexcept;
size_type size() const noexcept;
Complexity:

Constant time for both operations.
````
#### Example:

````
std::stack<int> s;
if (s.empty()) {
    std::cout << "Stack is empty" << std::endl;
}
s.push(1);
s.push(2);
std::cout << "Size of the stack: " << s.size() << std::endl;
````
#### Modifiers
````
void push(const value_type& value);
void push(value_type&& value);
void pop();
void swap(stack& other) noexcept(std::is_nothrow_swappable_v<Container>);
Complexity:

Constant time for push(), pop(), and swap().
````
#### Example:

````
std::stack<int> s1;
s1.push(1);
s1.push(2);
std::stack<int> s2;
s2.push(3);
s2.push(4);
s1.swap(s2);
std::cout << "Top element of the first stack after swap: " << s1.top() << std::endl;
std::cout << "Top element of the second stack after swap: " << s2.top() << std::endl;
````
--------------------------------------------------------------------------------------------------------
### std::queue
list of all methods with time complexity and example

#### Element access
````
reference front();
const_reference front() const;
reference back();
const_reference back() const;
Complexity:

Constant time for both front() operations.

Constant time if the container is std::deque, linear time otherwise for both back() operations.
````
#### Example:

````
std::queue<int> q;
q.push(1);
q.push(2);
std::cout << "Front element of the queue: " << q.front() << std::endl;
std::cout << "Back element of the queue: " << q.back() << std::endl;
````
#### Capacity
````
bool empty() const noexcept;
size_type size() const noexcept;
Complexity:

Constant time for both operations.
````
#### Example:

````
std::queue<int> q;
if (q.empty()) {
    std::cout << "Queue is empty" << std::endl;
}
q.push(1);
q.push(2);
std::cout << "Size of the queue: " << q.size() << std::endl;
````
#### Modifiers
````
void push(const value_type& value);
void push(value_type&& value);
void pop();
void swap(queue& other) noexcept(std::is_nothrow_swappable_v<Container>);
Complexity:

Constant time for push(), pop(), and swap().
````
#### Example:

````
std::queue<int> q1;
q1.push(1);
q1.push(2);
std::queue<int> q2;
q2.push(3);
q2.push(4);
q1.swap(q2);
std::cout << "Front element of the first queue after swap: " << q1.front() << std::endl;
std::cout << "Front element of the second queue after swap: " << q2.front() << std::endl;
````
#### Constructors
````
// Constructs empty queue.
queue() noexcept(is_nothrow_default_constructible_v<Container>);
 
// Constructs queue with a copy of the container.
explicit queue(const Container& container);
 
// Constructs queue with a move of the container.
explicit queue(Container&& container) noexcept(
  is_nothrow_move_constructible_v<Container>);
 
// Constructs queue with a copy of the container.
template<class Alloc>
explicit queue(const Alloc& alloc);
 
// Constructs queue with a copy of the allocator.
template<class Alloc>
queue(const Container& container, const Alloc& alloc);
 
// Constructs queue with a copy of the allocator.
template<class Alloc>
queue(Container&& container, const Alloc& alloc);
 
// Constructs queue with a copy of the allocator.
template<class Alloc>
queue(const queue& other, const Alloc& alloc);
 
// Constructs queue with a copy of the allocator.
template<class Alloc>
queue(queue&& other, const Alloc& alloc);
Complexity:

Linear time for copy/move constructor and all constructors with an allocator.
````
#### Example:

````
std::deque<int> d{1, 2, 3};
std::queue<int> q1(d);
std::queue<int> q2(std::move(d));
std::queue<int, std::list<int>> q3(std::allocator<int>{});
std::queue<int, std::list<int>> q4(d, std::allocator<int>{});
std::queue<int, std::list<int>> q5(std::move(d), std::allocator<int>{});
std::queue<int, std::list<int>> q6(q1, std::allocator<int>{});
````
-----------------------------------------------------------------------------------------------------------------------------
###  std::priority_queue

> list of all methods with time complexity and example
Here are the common methods of std::priority_queue container in C++ with their time complexity:

````
std::priority_queue::empty() - Returns whether the priority queue is empty or not.

Time complexity: O(1)
````

#### Example:

````
std::priority_queue<int> pq;
if (pq.empty()) {
    std::cout << "Priority queue is empty\n";
}
std::priority_queue::size() - Returns the number of elements in the priority queue.

Time complexity: O(1)
````

#### Example:

````
std::priority_queue<int> pq;
pq.push(3);
pq.push(1);
std::cout << "Size of priority queue: " << pq.size() << std::endl;
std::priority_queue::top() - Returns a reference to the highest priority element in the priority queue.

Time complexity: O(1)
````

#### Example:

````
std::priority_queue<int> pq;
pq.push(3);
pq.push(1);
std::cout << "Top element of priority queue: " << pq.top() << std::endl;
std::priority_queue::push(const T& val) - Inserts a new element with value val in the priority queue.

Time complexity: O(log n)
````

#### Example:

````
std::priority_queue<int> pq;
pq.push(3);
pq.push(1);
pq.push(4);
std::cout << "Top element of priority queue: " << pq.top() << std::endl;
std::priority_queue::pop() - Removes the highest priority element from the priority queue.

Time complexity: O(log n)
````

#### Example:

````
std::priority_queue<int> pq;
pq.push(3);
pq.push(1);
pq.push(4);
pq.pop();
std::cout << "Top element of priority queue: " << pq.top() << std::endl;
````
-------------------------------------------------------------------------------------------------------
### std::unordered_set

> list of all methods with time complexity and example
Here are the common methods of std::unordered_set container in C++ with their time complexity:

> std::unordered_set::empty() - Returns whether the unordered set is empty or not.

##### Time complexity: O(1)

#### Example:

````
std::unordered_set<int> s;
if (s.empty()) {
    std::cout << "Unordered set is empty\n";
}
std::unordered_set::size() - Returns the number of elements in the unordered set.
````
##### Time complexity: O(1)

#### Example:

````
std::unordered_set<int> s;
s.insert(3);
s.insert(1);
std::cout << "Size of unordered set: " << s.size() << std::endl;
std::unordered_set::insert(const T& val) - Inserts a new element with value val in the unordered set.
````
##### Time complexity: O(1) average case, O(n) worst case

#### Example:

````
std::unordered_set<int> s;
s.insert(3);
s.insert(1);
s.insert(4);
std::cout << "Size of unordered set: " << s.size() << std::endl;
std::unordered_set::erase(const T& val) - Removes the element with the given value from the unordered set.
````
##### Time complexity: O(1) average case, O(n) worst case

#### Example:

````
std::unordered_set<int> s;
s.insert(3);
s.insert(1);
s.insert(4);
s.erase(1);
std::cout << "Size of unordered set: " << s.size() << std::endl;
std::unordered_set::find(const T& val) - Returns an iterator to the element with the given value if it exists in the unordered set, else returns end().
````
##### Time complexity: O(1) average case, O(n) worst case

#### Example:

````
std::unordered_set<int> s;
s.insert(3);
s.insert(1);
s.insert(4);
auto it = s.find(1);
if (it != s.end()) {
    std::cout << "Element found in unordered set\n";
} else {
    std::cout << "Element not found in unordered set\n";
}
````
------------------------------------------------------------------------------------------
### std::unordered_map

> list of all methods with time complexity and example
Here are the common methods of std::unordered_map container in C++ with their time complexity:

> std::unordered_map::empty() - Returns whether the unordered map is empty or not.

#### Time complexity: O(1)

#### Example:

````
std::unordered_map<std::string, int> m;
if (m.empty()) {
    std::cout << "Unordered map is empty\n";
}
std::unordered_map::size() - Returns the number of key-value pairs in the unordered map.

Time complexity: O(1)
````
#### Example:

````
std::unordered_map<std::string, int> m;
m["apple"] = 3;
m["banana"] = 2;
std::cout << "Size of unordered map: " << m.size() << std::endl;
std::unordered_map::operator[](const Key& key) - Returns a reference to the value associated with the given key, or inserts a new key-value pair with the given key and a default-initialized value if the key does not exist.

Time complexity: O(1) average case, O(n) worst case
````
#### Example:

````
std::unordered_map<std::string, int> m;
m["apple"] = 3;
m["banana"] = 2;
std::cout << "Value of apple: " << m["apple"] << std::endl;
std::cout << "Value of orange: " << m["orange"] << std::endl;
std::cout << "Size of unordered map: " << m.size() << std::endl;
std::unordered_map::insert(const std::pair<Key, T>& p) - Inserts a new key-value pair in the unordered map.

Time complexity: O(1) average case, O(n) worst case
````
#### Example:

````
std::unordered_map<std::string, int> m;
m.insert({"apple", 3});
m.insert({"banana", 2});
std::cout << "Size of unordered map: " << m.size() << std::endl;
std::unordered_map::erase(const Key& key) - Removes the key-value pair with the given key from the unordered map.

Time complexity: O(1) average case, O(n) worst case
````
#### Example:

````
std::unordered_map<std::string, int> m;
m.insert({"apple", 3});
m.insert({"banana", 2});
m.erase("apple");
std::cout << "Size of unordered map: " << m.size() << std::endl;
std::unordered_map::find(const Key& key) - Returns an iterator to the key-value pair with the given key if it exists in the unordered map, else returns end().

Time complexity: O(1) average case, O(n) worst case
````
#### Example:

````
std::unordered_map<std::string, int> m;
m.insert({"apple", 3});
m.insert({"banana", 2});
auto it = m.find("apple");
if (it != m.end()) {
    std::cout << "Value of apple: " << it->second << std::endl;
} else {
    std::cout << "apple not found in unordered map\n";
}
````
---------------------------------------------------------------------------------------------------------- 
### std::bitset
 
> list of all methods with time complexity and example of c++ stl

> std::bitset is a container in C++ STL that represents a fixed-size sequence of bits. Here are the list of all methods with time complexity and examples:

````
std::bitset<N>::bitset(): Default constructor which initializes all the bits to 0.
Time complexity: O(1)
````
#### Example:
````
std::bitset<8> b1;
std::cout << b1 << '\n'; // prints "00000000"
std::bitset<N>::bitset(unsigned long long val): Constructor which initializes the bitset with the given unsigned long long value.
Time complexity: O(N)
````
#### Example:
````
std::bitset<8> b2(5);
std::cout << b2 << '\n'; // prints "00000101"
std::bitset<N>::count(): Returns the number of set bits in the bitset.
Time complexity: O(N)
````
#### Example:
````
std::bitset<8> b3(15);
std::cout << b3.count() << '\n'; // prints 4
std::bitset<N>::size(): Returns the size of the bitset.
Time complexity: O(1)
````
#### Example:
````
std::bitset<8> b4;
std::cout << b4.size() << '\n'; // prints 8
std::bitset<N>::set(): Sets all the bits to 1.
Time complexity: O(1)
````
#### Example:
````
std::bitset<8> b5;
b5.set();
std::cout << b5 << '\n'; // prints "11111111"
std::bitset<N>::set(pos, value): Sets the bit at the given position to the given value.
Time complexity: O(1)
````
#### Example:
````
std::bitset<8> b6;
b6.set(2, true);
std::cout << b6 << '\n'; // prints "00000100"
std::bitset<N>::reset(): Resets all the bits to 0.
Time complexity: O(1)
````
#### Example:
````
std::bitset<8> b7(255);
b7.reset();
std::cout << b7 << '\n'; // prints "00000000"
std::bitset<N>::reset(pos): Resets the bit at the given position to 0.
Time complexity: O(1)
````
#### Example:
````
std::bitset<8> b8(255);
b8.reset(2);
std::cout << b8 << '\n'; // prints "11111011"
std::bitset<N>::flip(): Flips all the bits.
Time complexity: O(1)
````
#### Example:
````
std::bitset<8> b9(5);
b9.flip();
std::cout << b9 << '\n'; // prints "11111010"
std::bitset<N>::flip(pos): Flips the bit at the given position.
Time complexity: O(1)
````
#### Example:
````
std::bitset<8> b10(5);
b10.flip(2);
std::cout << b10 << '\n'; // prints "00000101"
std::bitset<N>::test(pos): Returns the value of the bit
````
----------------------------------------------------------------------------------------------------
### math

The C++ STL provides various math functions that can be used for performing mathematical operations. Here are some of the commonly used functions with examples:

> **abs()**: This function returns the absolute value of the given number.
Time complexity: O(1)
#### Example:

````
int x = -10;
cout << abs(x); // Output: 10
````
> **pow()**: This function returns the power of a number.
Time complexity: O(logn)
#### Example:

````
double x = 2.0, y = 3.0;
cout << pow(x, y); // Output: 8.0
````
> **sqrt()**: This function returns the square root of the given number.
Time complexity: O(logn)
#### Example:

````
double x = 16.0;
cout << sqrt(x); // Output: 4.0
````
> **ceil()**: This function returns the smallest integer greater than or equal to the given number.
Time complexity: O(1)
#### Example:

````
double x = 4.3;
cout << ceil(x); // Output: 5
````
> **floor()**: This function returns the largest integer less than or equal to the given number.
Time complexity: O(1)
#### Example:

````
double x = 4.8;
cout << floor(x); // Output: 4
````
> **round()**: This function returns the nearest integer value of the given number.
Time complexity: O(1)
#### Example:

````
double x = 4.4;
cout << round(x); // Output: 4
````
> **fmod()**: This function returns the floating-point remainder of the division operation.
Time complexity: O(1)
#### Example:

````
double x = 10.5, y = 3.5;
cout << fmod(x, y); // Output: 3.5
````
> **log()**: This function returns the natural logarithm of the given number.
Time complexity: O(logn)
#### Example:

````
double x = 2.0;
cout << log(x); // Output: 0.693147
````
> **sin()**: This function returns the sine of the given angle in radians.
Time complexity: O(1)
#### Example:

````
double angle = 45.0;
cout << sin(angle * 3.14159 / 180.0); // Output: 0.707107
````
> **cos()**: This function returns the cosine of the given angle in radians.
Time complexity: O(1)
#### Example:

````
double angle = 60.0;
cout << cos(angle * 3.14159 / 180.0); // Output: 0.5
````

> **tan()**: This function returns the tangent of the given angle in radians.
Time complexity: O(1)
#### Example:

````
double angle = 30.0;
cout << tan(angle * 3.14159 / 180.0); // Output: 0.57735
````
> **atan()**: This function returns the arctangent of the given number in radians.
Time complexity: O(1)
#### Example:

````
double x = 1.0;
cout << atan(x); // Output: 0.785398
````
> **exp()**: This function returns the exponential value of the given number.
Time complexity: O(1)
#### Example:

````
double x = 2.0;
cout << exp(x); // Output: 7.38906
````
> **max()**: This function returns the maximum of the two given numbers.
Time complexity: O(n)
#### Example:

````
int x = 10, y = 20;
cout << max(x, y); // Output: 20
````
> **min()**: This function returns the minimum of the two given numbers.
Time complexity: O(n)
#### Example:

````
int x = 10, y = 20;
cout << min(x, y); // Output: 10
````

> **sort()**: Used to sort a range of elements in ascending or descending order.
#### Time complexity: O(n log n)
#### Example:
````
int arr[] = {4, 2, 1, 5, 3};
sort(arr, arr + 5); // arr will be sorted in ascending order
````
> **max()/min()**: Returns the maximum/minimum element in a range of elements.
#### Time complexity: O(n)
#### Example:
````
int arr[] = {4, 2, 1, 5, 3};
int max_num = *max_element(arr, arr + 5); // max_num will be 5
int min_num = *min_element(arr, arr + 5); // min_num will be 1
````
> **binary_search()**: Checks if a given element is present in a sorted range of elements.
#### Time complexity: O(log n)
#### Example:
````
int arr[] = {1, 2, 3, 4, 5};
bool found = binary_search(arr, arr + 5, 3); // found will be true
````

> **upper_bound()/lower_bound()**: Returns an iterator to the first element greater than or equal to the given element/first element greater than the given element in a sorted range of elements.
#### Time complexity: O(log n)
#### Example:
````
int arr[] = {1, 2, 3, 3, 5};
int* upper = upper_bound(arr, arr + 5, 3); // upper points to the second 3
int* lower = lower_bound(arr, arr + 5, 3); // lower points to the first 3
````
> **next_permutation()/prev_permutation()**: Rearranges the elements in a range into the next/previous lexicographically greater permutation of those elements.
#### Time complexity: O(n)
#### Example:
````
int arr[] = {1, 2, 3};
next_permutation(arr, arr + 3); // arr is now {1, 3, 2}
prev_permutation(arr, arr + 3); // arr is now {1, 2, 3} again
````
> **accumulate()**: Computes the sum of a range of elements.
#### Time complexity: O(n)
#### Example:
````
int arr[] = {1, 2, 3, 4, 5};
int sum = accumulate(arr, arr + 5, 0); // sum will be 15
````
> **gcd()/lcm()**: Computes the greatest common divisor/least common multiple of two numbers.
#### Time complexity: O(log min(a, b))
#### Example:
````
int a = 12, b = 18;
int gcd_num = gcd(a, b); // gcd_num will be 6
int lcm_num = lcm(a, b); // lcm_num will be 36
````
> **pow()**: Computes the value of a number raised to a given power.
#### Time complexity: O(log n)
#### Example:
````
int num = 2, power = 5;
int result = pow(num, power); // result will be 32
````

> **sqrt(x)** - computes the square root of a non-negative number x.

#### Example:

````
#include <iostream>
#include <cmath>

int main() {
    double x = 25.0;
    double result = sqrt(x);
    std::cout << "The square root of " << x << " is " << result << std::endl;
    return 0;
}
 **Output**:
The square root of 25 is 5
Time complexity: O(log x)
````

> cbrt In C++, cbrt() is a math function defined in the cmath library. It returns the cube root of the given argument.
````
double cbrt(double x);
Here's an example usage of cbrt():
````
````
#include <iostream>
#include <cmath>

int main() {
    double x = 27.0;
    double y = cbrt(x);
    std::cout << "The cube root of " << x << " is " << y << std::endl;
    return 0;
}
````
#### Output:


> The cube root of 27 is 3
> The time complexity of cbrt() is typically constant time, i.e., O(1), as it is implemented using hardware instructions on most systems.
----------------------------------------------------------------------------------------------------------
### string

provode list of all methods along with time complexity and example
The C++ Standard Template Library (STL) provides a rich set of methods to manipulate strings through the string class. Here is a list of commonly used methods along with their time complexity and an example of how to use them:

> **length()** - returns the length of the string. Time complexity: O(1)
#### Example:

````
string s = "Hello, world!";
cout << s.length(); // Output: 13
````
> **size()** - same as length(), returns the length of the string. Time complexity: O(1)
#### Example:

````
string s = "Hello, world!";
cout << s.size(); // Output: 13
````
> **empty()** - returns true if the string is empty, false otherwise. Time complexity: O(1)
#### Example:

````
string s1 = "";
string s2 = "Hello, world!";
cout << s1.empty() << " " << s2.empty(); // Output: 1 0
````
> **clear()** - clears the contents of the string. Time complexity: O(1)
#### Example:

````
string s = "Hello, world!";
s.clear();
cout << s; // Output: (empty string)
````
> **append(str)** - appends str at the end of the string. Time complexity: O(k), where k is the length of str
#### Example:

````
string s1 = "Hello, ";
string s2 = "world!";
s1.append(s2);
cout << s1; // Output: Hello, world!
````
> **substr(pos, len)** - returns a substring starting at position pos with length len. Time complexity: O(len)
#### Example:

````
string s = "Hello, world!";
string sub = s.substr(7, 5);
cout << sub; // Output: world
````
> **find(str, pos)** - finds the first occurrence of str in the string starting at position pos. Returns the position of str or string::npos if not found. Time complexity: O(n), where n is the length of the string
#### Example:

````
string s = "Hello, world!";
size_t pos = s.find("world");
if (pos != string::npos) {
    cout << pos; // Output: 7
}
````
> **replace(pos, len, str)** - replaces len characters starting at position pos with str. Time complexity: O(len + k), where k is the length of str
#### Example:

````
string s = "Hello, world!";
s.replace(7, 5, "John");
cout << s; // Output: Hello, John!
````
> **erase(pos, len)** - erases len characters starting at position pos. Time complexity: O(len)
#### Example:

````
string s = "Hello, world!";
s.erase(7, 5);
cout << s; // Output: Hello, !
````
> **push_back(c)** - appends the character c at the end of the string. Time complexity: O(1)
#### Example:

````
string s = "Hello, ";
s.push_back('w');
cout << s; // Output: Hello, w
````

> **at(pos)** - returns the character at position pos. Throws an exception of type out_of_range if pos is out of range. Time complexity: O(1)
Sure, here are some more methods for manipulating strings using the STL string class:
#### Example:

````
string s = "Hello, world!";
char c = s.at(7);
cout << c; // Output: w
````
> **front()** - returns the first character of the string. Throws an exception of type out_of_range if the string is empty. Time complexity: O(1)
#### Example:

````
string s = "Hello, world!";
char c = s.front();
cout << c; // Output: H
````
> **back()** - returns the last character of the string. Throws an exception of type out_of_range if the string is empty. Time complexity: O(1)
#### Example:

````
string s = "Hello, world!";
char c = s.back();
cout << c; // Output: !
````
> **compare(str)** - compares the string with str and returns 0 if they are equal, a value less than 0 if the string is less than str, and a value greater than 0 if the string is greater than str. Time complexity: O(n), where n is the length of the shorter string
#### Example:

````
string s1 = "Hello, world!";
string s2 = "Hello, John!";
int cmp = s1.compare(s2);
if (cmp == 0) {
    cout << "The strings are equal";
} else if (cmp < 0) {
    cout << "s1 is less than s2";
} else {
    cout << "s1 is greater than s2";
}
````
> **resize(len)** - resizes the string to have a length of len. If len is greater than the current length, the additional characters are set to the null character. If len is less than the current length, the string is truncated. Time complexity: O(len)
#### Example:

````
string s = "Hello, world!";
s.resize(10);
cout << s; // Output: Hello, wo
````
> **reserve(len)** - reserves enough memory to store a string of length len. Time complexity: O(len)
#### Example:

````
string s;
s.reserve(100);
s = "Hello, world!";
cout << s; // Output: Hello, world!
`````
> **c_str()** - returns a const pointer to a null-terminated character array with the contents of the string. Time complexity: O(1)
#### Example:

````
string s = "Hello, world!";
const char* cstr = s.c_str();
cout << cstr; // Output: Hello, world!
````
> **copy(char* dest, size_t len, size_t pos)** - copies at most len characters from the string starting at position pos to the character array pointed to by dest. Returns the number of characters copied. Time complexity: O(len)
#### Example:

````
string s = "Hello, world!";
char dest[6];
s.copy(dest, 5, 7);
cout << dest; // Output: world
````
> **find(str, pos)** - searches the string for the first occurrence of the substring str starting at position pos, and returns the position of the first character of the found substring, or string::npos if the substring is not found. Time complexity: O(n * m), where n is the length of the string and m is the length of the substring
#### Example:

````
string s = "Hello, world!";
size_t pos = s.find("world");
if (pos != string::npos) {
    cout << pos; // Output: 7
}
````
> **rfind(str, pos)** - searches the string for the last occurrence of the substring str starting at position pos, and returns the position of the first character of the found substring, or string::npos if the substring is not found. Time complexity: O(n * m), where n is the length of the string and m is the length of the substring
#### Example:

````
string s = "Hello, world!";
size_t pos = s.rfind("o");
if (pos != string::npos) {
    cout << pos; // Output: 8
}
````

> **substr(pos, len)** - returns a new string that is a substring of the original string, starting at position pos and consisting of len characters (or up to the end of the string if len is greater than the remaining length). Time complexity: O(len)
#### Example:

````
string s = "Hello, world!";
string sub = s.substr(7, 5);
cout << sub; // Output: world
````

These are some more useful methods available for manipulating strings using the C++ STL string class.

---------------------------------------------------------------------------------------------------------

