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
