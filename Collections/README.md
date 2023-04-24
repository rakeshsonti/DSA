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
#### HashMap is a collection that maps keys to values. It is implemented as a hash table, and provides constant-time performance for the basic operations (get and put) in the average case, assuming that the hash function distributes the elements properly among the buckets.

Here are the main methods provided by the HashMap class in Java:

> **put(K key, V value)**: Associates the specified value with the specified key in this map. The operation takes O(1) time in the average case, assuming that the hash function distributes the elements properly among the buckets.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);
````
> **get(Object key)**: Returns the value to which the specified key is mapped, or null if this map contains no mapping for the key. The operation takes O(1) time in the average case, assuming that the hash function distributes the elements properly among the buckets.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);
Integer value = map.get("banana");
````
> **remove(Object key)**: Removes the mapping for the specified key from this map if present. The operation takes O(1) time in the average case, assuming that the hash function distributes the elements properly among the buckets.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);
Integer removedValue = map.remove("banana");
````
> **containsKey(Object key)**: Returns true if this map contains a mapping for the specified key. The operation takes O(1) time in the average case, assuming that the hash function distributes the elements properly among the buckets.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);
boolean containsKey = map.containsKey("banana");
````
> **containsValue(Object value)**: Returns true if this map maps one or more keys to the specified value. The operation takes O(n) time, where n is the number of mappings in the map.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);
boolean containsValue = map.containsValue(2);
````
> **size()**: Returns the number of key-value mappings in this map. The operation takes O(1) time.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);
int size = map.size();
````
> **keySet()**: Returns a Set view of the keys contained in this map. The operation takes O(1) time.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);
Set<String> keySet = map.keySet();
````
> **values()**: Returns a Collection view of the values contained in this map. The operation takes O(n) time, where n is the number of mappings in the map.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);
Collection<Integer> values = map.values();
````

> **putAll(Map<? extends K,? extends V> m)**: Copies all of the mappings from the specified map to this map. The operation takes O(n) time, where n is the number of mappings in the specified map.
````
HashMap<String, Integer> map1 = new HashMap<>();
map1.put("apple", 1);
map1.put("banana", 2);
map1.put("cherry", 3);

HashMap<String, Integer> map2 = new HashMap<>();
map2.putAll(map1);
````
> **clear()**: Removes all of the mappings from this map. The operation takes O(1) time.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);
map.clear();
````
> **isEmpty()**: Returns true if this map contains no key-value mappings. The operation takes O(1) time.
````
HashMap<String, Integer> map = new HashMap<>();
boolean isEmpty = map.isEmpty();
entrySet(): Returns a Set view of the mappings contained in this map. The set contains objects of type Map.Entry<K, V>. The operation takes O(1) time.

HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);
Set<Map.Entry<String, Integer>> entrySet = map.entrySet();
````
> **putIfAbsent(K key, V value)**: If the specified key is not already associated with a value (or is mapped to null), associates it with the given value and returns null; otherwise, returns the current value associated with the key. The operation takes O(1) time in the average case, assuming that the hash function distributes the elements properly among the buckets.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);
Integer previousValue = map.putIfAbsent("banana", 4); // returns 2
Integer newValue = map.putIfAbsent("date", 5); // returns null
````
> **getOrDefault(Object key, V defaultValue)**: Returns the value to which the specified key is mapped, or defaultValue if this map contains no mapping for the key. The operation takes O(1) time in the average case, assuming that the hash function distributes the elements properly among the buckets.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);
Integer value = map.getOrDefault("date", 0); // returns 0
````
> **replace(K key, V value)**: Replaces the entry for the specified key only if it is currently mapped to some value, and returns the previous value associated with the key, or null if there was no mapping for the key. The operation takes O(1) time in the average case, assuming that the hash function distributes the elements properly among the buckets.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);
Integer previousValue = map.replace("banana", 4); // returns 2
Integer nonExistingValue = map.replace("date", 5); // returns null
````
> **replaceAll(BiFunction<? super K,? super V,? extends V**

> **compute(K key, BiFunction<? super K,? super V,? extends V> remappingFunction)**: If the specified key is not already associated with a value (or is mapped to null), attempts to compute its value using the given mapping function and enters it into this map unless null. The operation takes O(1) time in the average case, assuming that the hash function distributes the elements properly among the buckets.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

map.compute("apple", (k, v) -> v + 1); // adds 1 to the value of "apple"
map.compute("date", (k, v) -> (v == null) ? 1 : v + 1); // adds 1 to the value of "date" or sets it to 1 if it doesn't exist
````

> **computeIfAbsent(K key, Function<? super K,? extends V> mappingFunction)**: If the specified key is not already associated with a value (or is mapped to null), attempts to compute its value using the given mapping function and enters it into this map unless null. The operation takes O(1) time in the average case, assuming that the hash function distributes the elements properly among the buckets.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

map.computeIfAbsent("apple", k -> k.length()); // returns 1
map.computeIfAbsent("date", k -> k.length()); // adds "date" with value 4 to the map and returns 4
````
> **computeIfPresent(K key, BiFunction<? super K,? super V,? extends V> remappingFunction)**: If the specified key is already associated with a value (or is mapped to null), attempts to compute a new mapping given the key and its current mapped value. The operation takes O(1) time in the average case, assuming that the hash function distributes the elements properly among the buckets.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

map.computeIfPresent("apple", (k, v) -> v + 1); // adds 1 to the value of "apple"
map.computeIfPresent("date", (k, v) -> v + 1); // returns null
````
> **merge(K key, V value, BiFunction<? super V,? super V,? extends V> remappingFunction)**: If the specified key is not already associated with a value (or is mapped to null), associates it with the given value. Otherwise, computes a new value by invoking the given function on the current mapped value and the given value, and enters the new value into this map. The operation takes O(1) time in the average case, assuming that the hash function distributes the elements properly among the buckets.
````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

map.merge("apple", 2, (v1, v2) -> v1 + v2); // adds 2 to the value of "apple"
map.merge("date", 1, (v1, v2) -> v1 + v2); // adds "date" with value 1 to the map
````
----------------------------------------------------------------------------------------------------------
#### TreeMap is a sorted map implementation that stores key-value pairs in a tree-based data structure, specifically a red-black tree. The time complexity of the basic operations of TreeMap are as follows:
````
get(Object key): O(log N)
put(K key, V value): O(log N)
remove(Object key): O(log N)
containsKey(Object key): O(log N)
size(): O(1)
isEmpty(): O(1)
The TreeMap class also provides a number of additional methods:
````
> **clear()**: Removes all of the mappings from this map. The operation takes O(N) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

map.clear(); // removes all mappings from the map
````
> **clone()**: Returns a shallow copy of this TreeMap instance. The operation takes O(N) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

TreeMap<String, Integer> copy = (TreeMap<String, Integer>) map.clone(); // creates a shallow copy of the map
````
> **ceilingEntry(K key)**: Returns a key-value mapping associated with the least key greater than or equal to the given key, or null if there is no such key. The operation takes O(log N) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

Map.Entry<String, Integer> entry = map.ceilingEntry("banana"); // returns the mapping for "banana" or "cherry"
````
> **ceilingKey(K key)**: Returns the least key greater than or equal to the given key, or null if there is no such key. The operation takes O(log N) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

String key = map.ceilingKey("banana"); // returns "banana" or "cherry"
````
> **descendingKeySet()**: Returns a reverse order NavigableSet view of the keys contained in this map. The operation takes O(1) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

NavigableSet<String> keys = map.descendingKeySet(); // returns a set containing "cherry", "banana", "apple"
````
> **descendingMap()**: Returns a reverse order view of the mappings contained in this map. The operation takes O(1) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

NavigableMap<String, Integer> descendingMap = map.descendingMap(); // returns a map containing the mappings in reverse order
````
> **firstEntry()**: Returns a key-value mapping associated with the least key in this map, or null if the map is empty. The operation takes O(log N) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
map.put("banana", 2
````
> **firstKey()**: Returns the first (lowest) key currently in this map, or null if the map is empty. The operation takes O(log N) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

String firstKey = map.firstKey(); // returns "apple"
````
> **floorEntry(K key)**: Returns a key-value mapping associated with the greatest key less than or equal to the given key, or null if there is no such key. The operation takes O(log N) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

Map.Entry<String, Integer> entry = map.floorEntry("banana"); // returns the mapping for "banana" or "apple"
````
> **floorKey(K key)**: Returns the greatest key less than or equal to the given key, or null if there is no such key. The operation takes O(log N) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

String key = map.floorKey("banana"); // returns "banana" or "apple"
````
> **higherEntry(K key)**: Returns a key-value mapping associated with the least key strictly greater than the given key, or null if there is no such key. The operation takes O(log N) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

Map.Entry<String, Integer> entry = map.higherEntry("banana"); // returns the mapping for "cherry" or null
````
> **higherKey(K key)**: Returns the least key strictly greater than the given key, or null if there is no such key. The operation takes O(log N) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

String key = map.higherKey("banana"); // returns "cherry" or null
````
> **lastEntry()**: Returns a key-value mapping associated with the greatest key in this map, or null if the map is empty. The operation takes O(log N) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

Map.Entry<String, Integer> entry = map.lastEntry(); // returns the mapping for "cherry"
````
> **lastKey()**: Returns the last (highest) key currently in this map, or null if the map is empty. The operation takes O(log N) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);

String lastKey = map.lastKey(); // returns "cherry"
````
> **navigableKeySet()**: Returns a NavigableSet view of the keys contained in this map. The set's iterator returns the keys in ascending order. The operation takes O(1) time.
````
TreeMap<String, Integer> map = new TreeMap<>();
map.put("apple", 1);
````

-------------------------------------------------------------------------------------------------------------
### LinkedHashMap

> LinkedHashMap is a type of Map collection in Java that maintains the insertion order of elements. It is implemented as a hash table with a linked list running through it, so it provides the predictable iteration order (insertion order). Here are the methods and their time complexity in LinkedHashMap:

> **put(key, value)**: Inserts the key-value pair into the map. If the key is already present, then the value is updated.

> **Time complexity**: O(1) average case, O(n) worst case when the hash function has many collisions and the linked list grows.

#### Example:

````
LinkedHashMap<String, Integer> map = new LinkedHashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("orange", 3);
System.out.println(map); // Output: {apple=1, banana=2, orange=3}
````
> **get(key)**: Returns the value associated with the given key.

Time complexity: O(1) average case, O(n) worst case when the hash function has many collisions and the linked list grows.

####  Example:

````
LinkedHashMap<String, Integer> map = new LinkedHashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("orange", 3);
int value = map.get("banana");
System.out.println(value); // Output: 2
````
> **remove(key)**: Removes the key-value pair associated with the given key.

Time complexity: O(1) average case, O(n) worst case when the hash function has many collisions and the linked list grows.

####  Example:

````
LinkedHashMap<String, Integer> map = new LinkedHashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("orange", 3);
map.remove("banana");
System.out.println(map); // Output: {apple=1, orange=3}
````
> **clear()**: Removes all the key-value pairs from the map.

Time complexity: O(n)

#### Example:

````
LinkedHashMap<String, Integer> map = new LinkedHashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("orange", 3);
map.clear();
System.out.println(map); // Output: {}
````
> **keySet()**: Returns a Set of all the keys in the map.

Time complexity: O(n)

####  Example:

````
LinkedHashMap<String, Integer> map = new LinkedHashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("orange", 3);
Set<String> keys = map.keySet();
System.out.println(keys); // Output: [apple, banana, orange]
````
> **values()**: Returns a Collection of all the values in the map.

Time complexity: O(n)

####  Example:

````
LinkedHashMap<String, Integer> map = new LinkedHashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("orange", 3);
Collection<Integer> values = map.values();
System.out.println(values); // Output: [1, 2, 3]
````
> **entrySet()**: Returns a Set of all the key-value pairs in the map as Map.Entry objects.

Time complexity: O(n)

#### Example:

````
LinkedHashMap<String, Integer> map = new LinkedHashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("orange", 3);
Set<Map.Entry<String, Integer>> entries = map.entrySet();
System.out.println(entries
````


> **containsValue**(Object value): Returns true if this map contains the specified value, otherwise returns false.

Time complexity: O(n), where n is the number of entries in the map.

#### Example:

````
LinkedHashMap<String, Integer> map = new LinkedHashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("orange", 3);
boolean containsValue = map.containsValue(2); // returns true
````
> **keySet()**: Returns a set view of the keys contained in this map.

Time complexity: O(1).

#### Example:

````
LinkedHashMap<String, Integer> map = new LinkedHashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("orange", 3);
Set<String> keySet = map.keySet(); // returns ["apple", "banana", "orange"]
````
> **values()**: Returns a collection view of the values contained in this map.

Time complexity: O(n), where n is the number of entries in the map.

#### Example:

````
LinkedHashMap<String, Integer> map = new LinkedHashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("orange", 3);
Collection<Integer> values = map.values(); // returns [1, 2, 3]
````
> **entrySet()**: Returns a set view of the mappings contained in this map.

Time complexity: O(1).

#### Example:

````
LinkedHashMap<String, Integer> map = new LinkedHashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("orange", 3);
Set<Map.Entry<String, Integer>> entrySet = map.entrySet(); // returns [{apple=1}, {banana=2}, {orange=3}]
````
------------------------------------------------------------------------------------------------------------
### ArrayDeque

provide time complexity and all method with examples of LinkedList in java
Sure! Here are the methods of ArrayDeque along with their time complexity and examples:

> **addFirst(E e)**: Inserts the specified element at the front of this deque.

Time complexity: O(1).

#### Example:

````
ArrayDeque<Integer> deque = new ArrayDeque<>();
deque.addFirst(1);
deque.addFirst(2);
deque.addFirst(3);
System.out.println(deque); // output: [3, 2, 1]
addLast(E e): Inserts the specified element at the end of this deque.
````
Time complexity: O(1).

#### Example:

````
ArrayDeque<Integer> deque = new ArrayDeque<>();
deque.addLast(1);
deque.addLast(2);
deque.addLast(3);
System.out.println(deque); // output: [1, 2, 3]
````
> **offerFirst(E e)**: Inserts the specified element at the front of this deque, returning true upon success and false if capacity is full.

Time complexity: O(1).

#### Example:

````
ArrayDeque<Integer> deque = new ArrayDeque<>(2);
deque.offerFirst(1);
deque.offerFirst(2);
boolean success = deque.offerFirst(3); // returns false
System.out.println(deque); // output: [2, 1]
````
> **offerLast(E e)**: Inserts the specified element at the end of this deque, returning true upon success and false if capacity is full.

Time complexity: O(1).

#### Example:

````
ArrayDeque<Integer> deque = new ArrayDeque<>(2);
deque.offerLast(1);
deque.offerLast(2);
boolean success = deque.offerLast(3); // returns false
System.out.println(deque); // output: [1, 2]
````
> **removeFirst()**: Retrieves and removes the first element of this deque.

Time complexity: O(1).

#### Example:

````
ArrayDeque<Integer> deque = new ArrayDeque<>();
deque.addFirst(1);
deque.addFirst(2);
deque.addFirst(3);
int first = deque.removeFirst(); // returns 3
System.out.println(deque); // output: [2, 1]
````
> **removeLast()**: Retrieves and removes the last element of this deque.

Time complexity: O(1).

#### Example:

````
ArrayDeque<Integer> deque = new ArrayDeque<>();
deque.addLast(1);
deque.addLast(2);
deque.addLast(3);
int last = deque.removeLast(); // returns 3
System.out.println(deque); // output: [1, 2]
````
> **pollFirst()**: Retrieves and removes the first element of this deque, returning null if deque is empty.

Time complexity: O(1).

#### Example:

````
ArrayDeque<Integer> deque = new ArrayDeque<>();
deque.addFirst(1);
deque.addFirst(2);
deque.addFirst(3);
Integer first = deque.pollFirst(); // returns 3
System.out.println(deque); // output: [2, 1]
````
> **pollLast()**: Retrieves and removes the last element of this deque, returning null if deque is empty.

#### Time complexity: O(1).
---------------------------------------------------------------------------------------------------
### PriorityQueue

provide time complexity and all method with examples in java
Sure! Here are the time complexities and examples for the PriorityQueue class in Java:

#### Time Complexities:
````
add(E element)/offer(E element): O(log n)
remove(): O(log n)
poll(): O(log n)
element(): O(1)
peek(): O(1)
size(): O(1)
````
#### Methods:

> **add(E element)**: Adds the specified element to the priority queue. Returns true if the element was added successfully, false otherwise. This method is equivalent to offer(E element).
````
PriorityQueue<String> pq = new PriorityQueue<>();
pq.add("Apple");
pq.add("Banana");
pq.add("Cherry");
System.out.println(pq); // [Apple, Banana, Cherry]
````
> **offer(E element)**: Adds the specified element to the priority queue. Returns true if the element was added successfully, false otherwise. This method is equivalent to add(E element).
````
PriorityQueue<String> pq = new PriorityQueue<>();
pq.offer("Apple");
pq.offer("Banana");
pq.offer("Cherry");
System.out.println(pq); // [Apple, Banana, Cherry]
````
> **remove()**: Removes the head element of the priority queue. Throws NoSuchElementException if the priority queue is empty.
````
PriorityQueue<String> pq = new PriorityQueue<>();
pq.offer("Apple");
pq.offer("Banana");
pq.offer("Cherry");
System.out.println(pq.remove()); // Apple
System.out.println(pq); // [Banana, Cherry]
````
> **poll()**: Retrieves and removes the head element of the priority queue, or returns null if the priority queue is empty.
````
PriorityQueue<String> pq = new PriorityQueue<>();
pq.offer("Apple");
pq.offer("Banana");
pq.offer("Cherry");
System.out.println(pq.poll()); // Apple
System.out.println(pq); // [Banana, Cherry]
````
> **element()**: Retrieves the head element of the priority queue without removing it. Throws NoSuchElementException if the priority queue is empty.
````
PriorityQueue<String> pq = new PriorityQueue<>();
pq.offer("Apple");
pq.offer("Banana");
pq.offer("Cherry");
System.out.println(pq.element()); // Apple
System.out.println(pq); // [Apple, Banana, Cherry]
````
> **peek()**: Retrieves the head element of the priority queue without removing it, or returns null if the priority queue is empty.
````
PriorityQueue<String> pq = new PriorityQueue<>();
pq.offer("Apple");
pq.offer("Banana");
pq.offer("Cherry");
System.out.println(pq.peek()); // Apple
System.out.println(pq); // [Apple, Banana, Cherry]
````
> **size()**: Returns the number of elements in the priority queue.
````
PriorityQueue<String> pq = new PriorityQueue<>();
pq.offer("Apple");
pq.offer("Banana");
pq.offer("Cherry");
System.out.println(pq.size()); // 3
````
-------------------------------------------------------------------------------------------------------
### Stack
provide time complexity and all method with examples in java
Sure, here are the time complexities and examples for the Stack class in Java:

#### Time Complexities:

````
push(E element): O(1)
pop(): O(1)
peek(): O(1)
empty(): O(1)
search(Object o): O(n)
````

#### Methods:

> **push(E element)**: Pushes an element onto the stack. This method is equivalent to addElement(E element).
````
Stack<String> stack = new Stack<>();
stack.push("Apple");
stack.push("Banana");
stack.push("Cherry");
System.out.println(stack); // [Apple, Banana, Cherry]
`````
> **pop()**: Removes the top element from the stack and returns it. Throws an EmptyStackException if the stack is empty.
````
Stack<String> stack = new Stack<>();
stack.push("Apple");
stack.push("Banana");
stack.push("Cherry");
System.out.println(stack.pop()); // Cherry
System.out.println(stack); // [Apple, Banana]
````
> **peek()**: Returns the top element of the stack without removing it. Throws an EmptyStackException if the stack is empty.
````
Stack<String> stack = new Stack<>();
stack.push("Apple");
stack.push("Banana");
stack.push("Cherry");
System.out.println(stack.peek()); // Cherry
System.out.println(stack); // [Apple, Banana, Cherry]
````
> **empty()**: Returns true if the stack is empty, false otherwise.
````
Stack<String> stack = new Stack<>();
System.out.println(stack.empty()); // true
stack.push("Apple");
System.out.println(stack.empty()); // false
````
> **search(Object o)**: Searches the stack for the specified object and returns its position (0-based) on the stack, or -1 if the object is not found.
````
Stack<String> stack = new Stack<>();
stack.push("Apple");
stack.push("Banana");
stack.push("Cherry");
System.out.println(stack.search("Banana")); // 1
System.out.println(stack.search("Grape")); // -1
````
------------------------------------------------------------------------------------------------------
