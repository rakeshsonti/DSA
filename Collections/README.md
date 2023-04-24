## Collection data strucure till Java 8

> In Java 8, the following collection data structures are available:

* **ArrayList**: An implementation of the List interface that uses an array to store the elements.

* **LinkedList**: An implementation of the List interface that uses a doubly-linked list to store the elements.

* **HashSet**: An implementation of the Set interface that uses a hash table to store the elements.

* **TreeSet**: An implementation of the SortedSet interface that uses a red-black tree to store the elements.

* **HashMap**: An implementation of the Map interface that uses a hash table to store key-value pairs.

* **TreeMap**: An implementation of the SortedMap interface that uses a red-black tree to store key-value pairs.

* **LinkedHashMap**: An implementation of the Map interface that maintains a doubly-linked list of the entries in the map, in the order they were inserted.

* **ArrayDeque**: An implementation of the Deque interface that uses an array to store the elements.

* **PriorityQueue**: An implementation of the Queue interface that stores elements in a priority queue.

* **Stack**: A class that implements the Stack data structure using an array.


![java-collection-hierarchy](https://user-images.githubusercontent.com/52101117/233855962-d0f659f2-8a88-4132-aac9-114a61b114e8.png)

---------------------------------------------------------------------------------------------------------------------------------
### ArrayList

> provide time complexity and all method with examples of ArrayList in java
ArrayList is an implementation of the List interface in Java that uses an array to store the elements. Here are some of the most commonly used methods of ArrayList, along with their time complexity and examples:

> **add(E element)**: Adds an element to the end of the list. If the list needs to be resized, the operation takes O(n) time.
````
ArrayList<String> list = new ArrayList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
````
> **add(int index, E element)**: Adds an element at the specified index in the list. If the list needs to be resized, the operation takes O(n) time.
````
ArrayList<String> list = new ArrayList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
list.add(1, "orange");
````
> **remove(int index)**: Removes the element at the specified index from the list. The operation takes O(n) time in the worst case because all the elements after the specified index need to be shifted to fill the gap.
````
ArrayList<String> list = new ArrayList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
list.remove(1);
````
> **get(int index)**: Returns the element at the specified index in the list. The operation takes O(1) time.
````
ArrayList<String> list = new ArrayList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
String fruit = list.get(1);
````
> **set(int index, E element)**: Replaces the element at the specified index in the list with the specified element. The operation takes O(1) time.
````
ArrayList<String> list = new ArrayList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
list.set(1, "orange");
````
> **size()**: Returns the number of elements in the list. The operation takes O(1) time.
````
ArrayList<String> list = new ArrayList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
int size = list.size();
````
> **contains(Object o)**: Returns true if the list contains the specified element. The operation takes O(n) time in the worst case because it may need to iterate over all the elements in the list.
````
ArrayList<String> list = new ArrayList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
boolean containsBanana = list.contains("banana");
````
> **indexOf(Object o)**: Returns the index of the first occurrence of the specified element in the list, or -1 if the element is not found. The operation takes O(n) time in the worst case because it may need to iterate over all the elements in the list.
````
ArrayList<String> list = new ArrayList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
int index = list.indexOf("banana");
````
> **clear()**: Removes all elements from the list. The operation takes O(n) time.
````
ArrayList<String> list = new ArrayList<>();
list.add("apple");
list.add("banana");
list.clear();
````
> Note that the time complexity of some operations may vary depending on the size of the list and the implementation details of the ArrayList class.

---------------------------------------------------------------------------------------------------------------------------
### LinkedList

> LinkedList is an implementation of the List interface in Java that uses a linked list to store the elements. Here are some of the most commonly used methods of LinkedList, along with their time complexity and examples:

> **add(E element)**: Adds an element to the end of the list. The operation takes O(1) time.
````
LinkedList<String> list = new LinkedList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
````

> **add(int index, E element)**: Adds an element at the specified index in the list. The operation takes O(n) time in the worst case because it may need to traverse the list to find the specified index.
````
LinkedList<String> list = new LinkedList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
list.add(1, "orange");
````
> **remove(int index)**: Removes the element at the specified index from the list. The operation takes O(n) time in the worst case because it may need to traverse the list to find the specified index.
````
LinkedList<String> list = new LinkedList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
list.remove(1);
````
> **get(int index)**: Returns the element at the specified index in the list. The operation takes O(n) time in the worst case because it may need to traverse the list to find the specified index.
````
LinkedList<String> list = new LinkedList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
String fruit = list.get(1);
````
> **set(int index, E element)**: Replaces the element at the specified index in the list with the specified element. The operation takes O(n) time in the worst case because it may need to traverse the list to find the specified index.
````
LinkedList<String> list = new LinkedList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
list.set(1, "orange");
````
> **size()**: Returns the number of elements in the list. The operation takes O(1) time.
````
LinkedList<String> list = new LinkedList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
int size = list.size();
````
> **contains(Object o)**: Returns true if the list contains the specified element. The operation takes O(n) time in the worst case because it may need to traverse the list to find the specified element.
````
LinkedList<String> list = new LinkedList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
boolean containsBanana = list.contains("banana");
````

> **indexOf(Object o)**: Returns the index of the first occurrence of the specified element in the list, or -1 if the element is not found. The operation takes O(n) time in the worst case because it may need to traverse the list to find the specified element.
````
LinkedList<String> list = new LinkedList<>();
list.add("apple");
list.add("banana");
list.add("cherry");
int index = list.indexOf("banana");
````
> **clear()**: Removes all elements from the list. The operation takes O(1) time.
````
LinkedList<String> list = new LinkedList<>();
list.add("apple");
list.add("banana");
list.clear();
````
#### Note that the time complexity of some operations may vary depending on the size of the list and the implementation details of the LinkedList class.

--------------------------------------------------------------------------------------------------------
### HashSet

> provide time complexity and all method with examples of LinkedList in java
HashSet is an implementation of the Set interface in Java that stores elements in a hash table. Here are some of the most commonly used methods of HashSet, along with their time complexity and examples:

> **add(E element)**: Adds an element to the set. The operation takes O(1) time in the average case, but O(n) time in the worst case if the hash table needs to be resized.
````
HashSet<String> set = new HashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
````
> **remove(Object o)**: Removes the specified element from the set. The operation takes O(1) time in the average case, but O(n) time in the worst case if the hash table needs to be searched.
````
HashSet<String> set = new HashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
set.remove("banana");
````
> **contains(Object o)**: Returns true if the set contains the specified element. The operation takes O(1) time in the average case, but O(n) time in the worst case if the hash table needs to be searched.
````
HashSet<String> set = new HashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
boolean containsBanana = set.contains("banana");
````
**isEmpty()**: Returns true if the set is empty. The operation takes O(1) time.
````
HashSet<String> set = new HashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
boolean empty = set.isEmpty();
````
> **size()**: Returns the number of elements in the set. The operation takes O(1) time.
````
HashSet<String> set = new HashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
int size = set.size();
````
> **clear()**: Removes all elements from the set. The operation takes O(1) time.
````
HashSet<String> set = new HashSet<>();
set.add("apple");
set.add("banana");
set.clear();
````
#### Note that the time complexity of some operations may vary depending on the size of the set and the implementation details of the HashSet class.
-----------------------------------------------------------------------------------------------------------------------------------
### TreeSet

> provide time complexity and all method with examples of LinkedList in java
TreeSet is an implementation of the SortedSet interface in Java that stores elements in a sorted tree structure. Here are some of the most commonly used methods of TreeSet, along with their time complexity and examples:

> **add(E element)**: Adds an element to the set. The operation takes O(log n) time in the average case.
````
TreeSet<Integer> set = new TreeSet<>();
set.add(3);
set.add(1);
set.add(2);
````
> **remove(Object o)**: Removes the specified element from the set. The operation takes O(log n) time in the average case.
````
TreeSet<Integer> set = new TreeSet<>();
set.add(3);
set.add(1);
set.add(2);
set.remove(2);
````
> **contains(Object o)**: Returns true if the set contains the specified element. The operation takes O(log n) time in the average case.
````
TreeSet<Integer> set = new TreeSet<>();
set.add(3);
set.add(1);
set.add(2);
boolean containsTwo = set.contains(2);
````
> **isEmpty()**: Returns true if the set is empty. The operation takes O(1) time.
````
TreeSet<Integer> set = new TreeSet<>();
set.add(3);
set.add(1);
set.add(2);
boolean empty = set.isEmpty();
````
> **size()**: Returns the number of elements in the set. The operation takes O(1) time.
````
TreeSet<Integer> set = new TreeSet<>();
set.add(3);
set.add(1);
set.add(2);
int size = set.size();
````
> **clear()**: Removes all elements from the set. The operation takes O(1) time.
````
TreeSet<Integer> set = new TreeSet<>();
set.add(3);
set.add(1);
set.add(2);
set.clear();
````
#### Note that the time complexity of some operations may vary depending on the size of the set and the implementation details of the TreeSet class. Also note that TreeSet is a sorted set, which means that it provides additional methods for navigating and accessing elements in sorted order.
------------------------------------------------------------------------------------------------------------

### LinkedHashSet

> LinkedHashSet is an implementation of the Set interface in Java that maintains a linked list of the elements in the set, which allows iteration in the order that the elements were added. Here are some of the most commonly used methods of LinkedHashSet, along with their time complexity and examples:

> **add(E e)**: Adds the specified element to the set if it is not already present. The operation takes O(1) time in the average case.
````
LinkedHashSet<String> set = new LinkedHashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
````
> **contains(Object o)**: Returns true if the set contains the specified element. The operation takes O(1) time in the average case.
````
LinkedHashSet<String> set = new LinkedHashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
boolean contains = set.contains("banana");
````
> **isEmpty()**: Returns true if the set is empty. The operation takes O(1) time.
````
LinkedHashSet<String> set = new LinkedHashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
boolean empty = set.isEmpty();
````
> **size()**: Returns the number of elements in the set. The operation takes O(1) time.
````
LinkedHashSet<String> set = new LinkedHashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
int size = set.size();
````
> **clear()**: Removes all elements from the set. The operation takes O(1) time.
````
LinkedHashSet<String> set = new LinkedHashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
set.clear();
````
> **remove(Object o)**: Removes the specified element from the set if it is present. The operation takes O(1) time in the average case.
````
LinkedHashSet<String> set = new LinkedHashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
boolean removed = set.remove("banana");
````
> **addAll(Collection<? extends E> c)**: Adds all of the elements in the specified collection to the set. The operation takes O(n) time, where n is the number of elements in the collection.
````
LinkedHashSet<String> set = new LinkedHashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
List<String> list = new ArrayList<>();
list.add("date");
list.add("elderberry");
set.addAll(list);
````
> **containsAll(Collection<?> c)**: Returns true if the set contains all of the elements in the specified collection. The operation takes O(n) time, where n is the number of elements in the collection.
````
LinkedHashSet<String> set = new LinkedHashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
List<String> list = new ArrayList<>();
list.add("apple");
list.add("cherry");
boolean containsAll = set.containsAll(list);
````
> **removeAll(Collection<?> c)**: Removes all of the elements in the specified collection from the set. The operation takes O(n) time, where n is the number of elements in the collection.
````
LinkedHashSet<String> set = new LinkedHashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
List<String> list = new ArrayList<>();
list.add("apple");
list.add("cherry");
boolean removedAll = set.removeAll(list);
````
> **retainAll(Collection<?> c)**: Retains only the elements in the set that are contained in the specified collection. The operation takes O(n) time, where n is the number of elements in the collection.
````
LinkedHashSet<String> set = new LinkedHashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
List<String> list = new ArrayList<>();
list.add("apple");
list.add("cherry");
boolean retainedAll = set.retainAll(list);
````
> **toArray()**: Returns an array containing all of the elements in the set, in the order that they were added.
````
LinkedHashSet<String> set = new LinkedHashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
Object[] array = set.toArray();
````
> **toArray(T[] a)**: Returns an array containing all of the elements in the set, in the order that they were added, and stores the elements in the specified array if it is large enough.
````
LinkedHashSet<String> set = new LinkedHashSet<>();
set.add("apple");
set.add("banana");
set.add("cherry");
String[] array = new String[3];
set.toArray(array);
````

#### Note that the time complexity of some operations may vary depending on the size of the set and the implementation details of the LinkedHashSet class. Also note that LinkedHashSet maintains the order of the elements in the set, which means that it provides additional methods for iterating over the elements in the order that they were added.
-----------------------------------------------------------------------------------------------------------
