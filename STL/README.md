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
 
std::vector<int> vec;
vec.push_back(1); // vec = {1}

2)`std::vector::pop_back()`: Removes the last element from the vector. Time complexity is constant, O(1).
 
std::vector<int> vec = {1, 2, 3};
vec.pop_back(); // vec = {1, 2}
  
3)`std::vector::insert():` Inserts an element at the specified position. Time complexity is linear, O(n).
 
std::vector<int> vec = {1, 2, 3};
auto it = vec.begin() + 1;
vec.insert(it, 4); // vec = {1, 4, 2, 3}
  
4)`std::vector::erase()`: Removes the element at the specified position. Time complexity is linear, O(n).
 
std::vector<int> vec = {1, 2, 3};
auto it = vec.begin() + 1;
vec.erase(it); // vec = {1, 3}
  
5)`std::vector::clear()`: Removes all elements from the vector. Time complexity is linear, O(n).
 
std::vector<int> vec = {1, 2, 3};
vec.clear(); // vec = {}
  
6)`std::vector::size()`: Returns the number of elements in the vector. Time complexity is constant, O(1).
 
std::vector<int> vec = {1, 2, 3};
int size = vec.size(); // size = 3
  
7)`std::vector::capacity():` Returns the number of elements that the vector can hold without reallocation. Time complexity is constant, O(1).
 
std::vector<int> vec = {1, 2, 3};
int capacity = vec.capacity(); // capacity >= 3

8)`std::vector::reserve():` Increases the vector's capacity to a specified value. Time complexity is linear, O(n).
 
std::vector<int> vec = {1, 2, 3};
vec.reserve(6); // capacity >= 6
  
9)`std::vector::shrink_to_fit():` Reduces the vector's capacity to fit its size. Time complexity is linear, O(n).
 
std::vector<int> vec = {1, 2, 3};
vec.shrink_to_fit(); // capacity == 3
  
10)`std::vector::operator[]():` Returns a reference to the element at the specified position. Time complexity is constant, O(1).
 
std::vector<int> vec = {1, 2, 3};
int second = vec[1]; // second = 2
  
11)`std::vector::at():` Returns a reference to the element at the specified position, with bounds checking. Time complexity is constant, O(1).
 
std::vector<int> vec = {1, 2, 3};
int second = vec.at(1); // second = 2
  
12)`std::vector::front():` Returns a reference to the first element in the vector. Time complexity is constant, O(1).
 
std::vector<int> vec = {1, 2, 3};

int first = vec.front(); // first = 1


13. `std::vector::back()`: Returns a reference to the last element in the vector. Time complexity is constant, O(1).
std::vector<int> vec = {1, 2, 3};
int last = vec.back(); // last = 3


14. `std::vector::empty()`: Returns true if the vector is empty, false otherwise. Time complexity is constant, O(1).
std::vector<int> vec = {1, 2, 3};
bool is_empty = vec.empty(); // is_empty = false

 

15. `std::vector::data()`: Returns a pointer to the underlying array that stores the vector's elements. Time complexity is constant, O(1).
std::vector<int> vec = {1, 2, 3};
int* ptr = vec.data();

 

16. `std::vector::swap()`: Swaps the contents of two vectors. Time complexity is linear, O(n).
std::vector<int> vec1 = {1, 2, 3};
std::vector<int> vec2 = {4, 5, 6};
vec1.swap(vec2); // vec1 = {4, 5, 6}, vec2 = {1, 2, 3}


Note that the time complexity of some operations, such as `insert()` and `erase()`, can be affected by the size of the vector and the position of the element being inserted or erased. In general, adding or removing elements from the end of the vector is faster than doing so at the beginning or in the middle.

----------------------------------------------------------------------------------------------------------------------
### Deque

`std::deque (short for double-ended queue) is a container in C++ Standard Library that provides a sequence-like interface. It supports constant time insertions and deletions at both the beginning and the end, and provides efficient random access to elements in the middle. Here is a list of all the methods of std::deque, along with their time complexity and an example:`

#### Constructors and Destructors
#### Default constructor
 
deque() noexcept;
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d1;

#### Fill constructor
 
explicit deque(size_type count);
explicit deque(size_type count, const T& value);
##### Complexity: Linear time in the size of the deque.

#### Example:
 
std::deque<int> d2(10);       // deque with 10 default-initialized ints
std::deque<int> d3(10, 42);   // deque with 10 ints initialized to 42

#### Range constructor
 
template<class InputIt>
deque(InputIt first, InputIt last);
##### Complexity: Linear time in the size of the range.

####  Example:
 
std::vector<int> v = {1, 2, 3, 4, 5};
std::deque<int> d4(v.begin(), v.end()); // deque initialized with the elements of the vector

#### Copy constructor
 
deque(const deque& other);
##### Complexity: Linear time in the size of other.

####  Example:
 
std::deque<int> d5(d4); // copy of d4

#### Move constructor
 
deque(deque&& other) noexcept;
##### Complexity: Constant time.
####  Example:
 
std::deque<int> d6(std::move(d5)); // move d5 to d6

#### Destructor
 
~deque();
Complexity: Linear time in the size of the deque.

#### Example:
 
{
    std::deque<int> d7(10, 42);
} // d7 is destroyed here
Element Access
At
 
reference at(size_type pos);
const_reference at(size_type pos) const;
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d8 = {1, 2, 3};
d8.at(0) = 42;
int x = d8.at(2);

#### Operator []
 
reference operator[](size_type pos);
const_reference operator[](size_type pos) const;

##### Complexity: Constant time.
#### Example:
 
std::deque<int> d9 = {1, 2, 3};
d9[0] = 42;
int x = d9[2];

#### Front
 
reference front();
const_reference front() const;
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d10 = {1, 2, 3};
d10.front() = 42;
int x = d10.front();

#### Back
 
reference back();
const_reference back() const;
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d11 = {1, 2, 3};
d11.back() = 42;
int x = d11.back();

### Iterators

#### Begin and End
 
iterator begin() noexcept;
const_iterator begin() const noexcept;
const_iterator cbegin() const noexcept;

#### iterator end()

 
iterator end() noexcept;
const_iterator end() const noexcept;
const_iterator cend() const noexcept;
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d12 = {1, 2, 3};
for (auto it = d12.begin(); it != d12.end(); ++it) {
    std::cout << *it << ' ';
}

#### Rbegin and Rend
 
reverse_iterator rbegin() noexcept;
const_reverse_iterator rbegin() const noexcept;
const_reverse_iterator crbegin() const noexcept;

reverse_iterator rend() noexcept;
const_reverse_iterator rend() const noexcept;
const_reverse_iterator crend() const noexcept;
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d13 = {1, 2, 3};
for (auto it = d13.rbegin(); it != d13.rend(); ++it) {
    std::cout << *it << ' ';
}

#### Capacity

#### Empty
 
bool empty() const noexcept;
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d14;
if (d14.empty()) {
    std::cout << "deque is empty\n";
}

#### Size
 
size_type size() const noexcept;
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d15 = {1, 2, 3};
std::cout << "size: " << d15.size() << '\n';

#### Max Size
 
size_type max_size() const noexcept;
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d16;
std::cout << "max size: " << d16.max_size() << '\n';

### Modifiers

#### Assign
 
void assign(size_type count, const T& value);
template<class InputIt>
void assign(InputIt first, InputIt last);
void assign(std::initializer_list<T> ilist);
##### Complexity: Linear time in the size of the assigned range.

#### Example:
 
std::deque<int> d17;
d17.assign(3, 42); // assign 3 ints with value 42
std::vector<int> v2 = {1, 2, 3};
d17.assign(v2.begin(), v2.end()); // assign the elements of the vector
d17.assign({4, 5, 6}); // assign the elements of an initializer list

#### Push Front
 
void push_front(const T& value);
void push_front(T&& value);
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d18 = {2, 3};
d18.push_front(1);

#### Pop Front
 
void pop_front();
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d19 = {1, 2, 3};
d19.pop_front();

#### Push Back
 
void push_back(const T& value);
void push_back(T&& value);
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d20 = {1, 2};
d20.push_back(3);

#### Pop Back
 
void pop_back();
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d21 = {1, 2, 3};
d21.pop_back();

 
iterator insert(const_iterator pos, const T& value);
iterator insert(const_iterator pos, T&& value);
iterator insert(const_iterator pos, size_type count, const T& value);
template<class InputIt>
iterator insert(const_iterator pos, InputIt first, InputIt last);
iterator insert(const_iterator pos, std::initializer_list<T> ilist);
##### Complexity: Linear time in the number of elements inserted plus the distance to the end of the deque.

#### Example:
 
std::deque<int> d22 = {1, 2, 5};
auto it = d22.begin() + 2; // points to 5
d22.insert(it, 3, 4); // inserts 4, 4, 4 before 5
d22.insert(d22.end(), {6, 7, 8}); // inserts 6, 7, 8 at the end of the deque

#### Erase
 
iterator erase(const_iterator pos);
iterator erase(const_iterator first, const_iterator last);
##### Complexity: Linear time in the number of elements erased plus the distance to the end of the deque.

#### Example:
 
std::deque<int> d23 = {1, 2, 3, 4, 5};
auto it1 = d23.begin() + 1; // points to 2
auto it2 = d23.end() - 2; // points to 4
d23.erase(it1); // erases 2
d23.erase(it2, d23.end()); // erases 4 and 5

#### Swap
 
void swap(deque& other) noexcept(std::allocator_traits<Allocator>::is_always_equal::value);
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d24 = {1, 2, 3};
std::deque<int> d25 = {4, 5, 6};
d24.swap(d25);

#### Clear
 
void clear() noexcept;
##### Complexity: Linear time in the number of elements.

#### Example:
 
std::deque<int> d26 = {1, 2, 3};
d26.clear();

### Allocator

#### Get Allocator
 
allocator_type get_allocator() const noexcept;
##### Complexity: Constant time.

#### Example:
 
std::deque<int> d27 = {1, 2, 3};
auto a = d27.get_allocator();

-----------------------------------------------------------------------------------------------------------------------------------
### std::list

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
