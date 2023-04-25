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
### ConcurrentHashMap

> In Java, ConcurrentHashMap is a thread-safe implementation of the Map interface. It is designed to be used in multi-threaded environments where multiple threads can access and modify the map concurrently without causing any data inconsistency or thread safety issues.

Here's an example usage of ConcurrentHashMap:

````
import java.util.concurrent.ConcurrentHashMap;

public class ConcurrentHashMapExample {
    public static void main(String[] args) {
        ConcurrentHashMap<String, Integer> map = new ConcurrentHashMap<>();

        // Add elements to the map
        map.put("A", 1);
        map.put("B", 2);
        map.put("C", 3);
        System.out.println("ConcurrentHashMap: " + map);

        // Remove an element from the map
        map.remove("B");
        System.out.println("ConcurrentHashMap after removal: " + map);

        // Check if the map contains a key
        boolean containsKey = map.containsKey("A");
        System.out.println("ConcurrentHashMap contains key A? " + containsKey);

        // Replace an element in the map
        map.replace("C", 4);
        System.out.println("ConcurrentHashMap after replacement: " + map);
    }
}
````
#### Output:
````
ConcurrentHashMap: {A=1, B=2, C=3}
ConcurrentHashMap after removal: {A=1, C=3}
ConcurrentHashMap contains key A? true
ConcurrentHashMap after replacement: {A=1, C=4}
````
#### Here are some of the important methods of ConcurrentHashMap:

> **put(key, value)**: O(1) average case, O(n) worst case, where n is the number of elements in the map

> **get(key)**: O(1) average case, O(n) worst case, where n is the number of elements in the map

> **remove(key)**: O(1) average case, O(n) worst case, where n is the number of elements in the map

> **containsKey(key)**: O(1) average case, O(n) worst case, where n is the number of elements in the map

> **keySet()**: O(n) time to create the set, where n is the number of elements in the map

> **values()**: O(n) time to create the collection, where n is the number of elements in the map

> **entrySet()**: O(n) time to create the set, where n is the number of elements in the map

> **size()**: O(1) average case, O(n) worst case, where n is the number of elements in the map


> The time complexity of these methods in ConcurrentHashMap is typically O(1) or constant time. However, it may be higher if there are frequent rehashing operations due to the dynamic resizing of the underlying hash table.

### Vector:

The Vector class in Java is a legacy collection class that implements a dynamic array. It is similar to an ArrayList, but it is synchronized, which means that it is thread-safe. Here's an example of how to declare a Vector:

````
Vector<Integer> vc = new Vector<Integer>();
````
Now, let's take a look at some of the methods of the Vector class and their time complexity:

> **add(E element)** - This method is used to add an element to the end of the vector. The time complexity of this operation is O(1) amortized, but it can be O(n) in the worst case if the vector needs to be resized.
````
vc.add(10); // Adds 10 to the end of the vector
add(int index, E element) - This method is used to insert an element at a specific index in the vector. The time complexity of this operation is O(n), as it requires shifting all elements after the specified index to make room for the new element.

vc.add(1, 20); // Inserts 20 at index 1
````
> **get(int index)** - This method is used to retrieve the element at a specific index in the vector. The time complexity of this operation is O(1).
````
int element = vc.get(0); // Retrieves the element at index 0
````
>  **set(int index, E element)** - This method is used to replace an element at a specific index in the vector. The time complexity of this operation is O(1).

````
vc.set(0, 30); // Replaces the element at index 0 with 30
````

> **remove(int index)** - This method is used to remove the element at a specific index in the vector. The time complexity of this operation is O(n), as it requires shifting all elements after the specified index to fill the gap left by the removed element.
````
vc.remove(0); // Removes the element at index 0
size() - This method is used to get the number of elements in the vector. The time complexity of this operation is O(1).

int size = vc.size(); // Gets the number of elements in the vector
````
> **capacity()** - This method is used to get the current capacity of the vector. The time complexity of this operation is O(1).
````
int capacity = vc.capacity(); // Gets the current capacity of the vector
````

> **trimToSize()** - This method is used to trim the capacity of the vector to its current size. The time complexity of this operation is O(n), as it requires creating a new array and copying the elements to it.
````
vc.trimToSize(); // Trims the capacity of the vector to its current size
These are just a few examples of the methods available in the Vector class. There are many other methods available, such as isEmpty(), contains(Object o), and indexOf(Object o).
````
----------------------------------------------------------------------------------------------------------
### Math

> Java's Math class provides a wide range of mathematical functions. Here are some of the most commonly used methods with examples and time complexity:

> **abs()**: This method returns the absolute value of the given number.
#### Example:

````
int x = -10;
System.out.println(Math.abs(x)); // Output: 10
````
#### Time complexity: O(1)

> **max()**: This method returns the maximum of the two given numbers.
#### Example:

````
int x = 10, y = 20;
System.out.println(Math.max(x, y)); // Output: 20
````
#### Time complexity: O(1)

> **min()**: This method returns the minimum of the two given numbers.
#### Example:

````
int x = 10, y = 20;
System.out.println(Math.min(x, y)); // Output: 10
````
#### Time complexity: O(1)

> **pow()**: This method returns the value of the first argument raised to the power of the second argument.
#### Example:

````
double x = 2.0, y = 3.0;
System.out.println(Math.pow(x, y)); // Output: 8.0
````
#### Time complexity: O(log n)

> **sqrt()**: This method returns the square root of the given number.
#### Example:

````
double x = 25.0;
System.out.println(Math.sqrt(x)); // Output: 5.0
````
#### Time complexity: O(1)

> **cbrt()**: This method returns the cube root of the given number.
#### Example:

````
double x = 8.0;
System.out.println(Math.cbrt(x)); // Output: 2.0
````
#### Time complexity: O(log n)

> **ceil()**: This method returns the smallest integer greater than or equal to the given number.
#### Example:

````
double x = 2.5;
System.out.println(Math.ceil(x)); // Output: 3.0
````
#### Time complexity: O(1)

> **floor()**: This method returns the largest integer less than or equal to the given number.
#### Example:

````
double x = 2.5;
System.out.println(Math.floor(x)); // Output: 2.0
````
#### Time complexity: O(1)

> **round()**: This method returns the closest integer to the given number.
#### Example:

````
double x = 2.4;
System.out.println(Math.round(x)); // Output: 2
````
#### Time complexity: O(1)

> **sin()**: This method returns the sine of the given angle in radians.
#### Example:

````
double angle = 30.0;
System.out.println(Math.sin(angle * Math.PI / 180.0)); // Output: 0.5
````

#### Time complexity: O(1)
--------------------------------------------------------------------------------------------------

### Internal working of HashMap

Internal working of HashMap in java with example time complexity of each operation and function involed internally with details
Sure, I can provide an overview of the internal working of HashMap in Java.

HashMap is a hash table-based implementation of the Map interface. It stores the key-value pairs in an array and uses the key's hash code to determine the index of the array where the corresponding value is stored. In the array, each element is called a bucket, and each bucket contains a linked list of key-value pairs. The linked list is used to handle hash collisions, which occur when two or more keys have the same hash code.

Here's an example of how a HashMap can store key-value pairs:

````
HashMap<String, Integer> map = new HashMap<>();
map.put("apple", 1);
map.put("banana", 2);
map.put("cherry", 3);
````
In this example, "apple", "banana", and "cherry" are keys, and 1, 2, and 3 are values.

* When put() is called, HashMap computes the hash code of the key using the hashCode() method, which is then transformed to an index in the array using a hash function. If the bucket at that index is empty, the key-value pair is added to that bucket. If the bucket is not empty, a linked list is created at that bucket, and the key-value pair is added to the end of the linked list.

* When get() is called, HashMap computes the hash code of the key, uses the hash function to determine the index in the array, and then searches the linked list at that bucket to find the value corresponding to the key.

Here are the time complexities of some common operations in HashMap:

> **put(key, value)**: O(1) average case, O(n) worst case, where n is the number of elements in the map 

> **get(key)**: O(1) average case, O(n) worst case, where n is the number of elements in the map

> **remove(key)**: O(1) average case, O(n) worst case, where n is the number of elements in the map

> **containsKey(key)**: O(1) average case, O(n) worst case, where n is the number of elements in the map

> **keySet()**: O(n) time to create the set, where n is the number of elements in the map

> **values()**: O(n) time to create the collection, where n is the number of elements in the map

> **entrySet()**: O(n) time to create the set, where n is the number of elements in the map

> **size()**: O(1)

Note that the average case time complexity assumes a well-distributed hash function and no hash collisions. Worst case time complexity occurs when many keys have the same hash code, resulting in a long linked list for that hash bucket, which can cause performance degradation.

Internally, HashMap uses an array of Node objects to store the key-value pairs. Each Node contains a key, a value, and a reference to the next Node in the linked list. HashMap also uses a load factor to determine when to increase the size of the array. When the number of key-value pairs exceeds the load factor multiplied by the size of the array, the array is resized and all the key-value pairs are rehashed and moved to their new buckets.

#### Overall, HashMap provides an efficient way to store and retrieve key-value pairs, but the performance can degrade if the hash function is poorly distributed or if there are many hash collisions.
---------------------------------------------------------------------------------------------------------
### Thread

In Java, a thread is an independent path of execution within a program. Threads allow multiple tasks to be executed concurrently within the same program. Java provides several methods to create and manage threads.

#### Creating a Thread:
There are two ways to create a thread in Java:
Extend the Thread class and override the run() method.
Implement the Runnable interface and pass an instance of the Runnable to a new Thread object.
Example of extending the Thread class:

````
class MyThread extends Thread {
   public void run() {
      System.out.println("MyThread is running.");
   }
}

public class Main {
   public static void main(String[] args) {
      MyThread t = new MyThread();
      t.start();
   }
}
````

#### Example of implementing the Runnable interface:

````
class MyRunnable implements Runnable {
   public void run() {
      System.out.println("MyRunnable is running.");
   }
}

public class Main {
   public static void main(String[] args) {
      MyRunnable r = new MyRunnable();
      Thread t = new Thread(r);
      t.start();
   }
}
````

#### Starting a Thread:
To start a thread, we call the start() method on the Thread object. This method will create a new thread of execution and call the run() method on the Thread object.

#### Joining Threads:
We can use the join() method to wait for a thread to complete before continuing with the execution of the main thread.

#### Example:

````
class MyThread extends Thread {
   public void run() {
      System.out.println("MyThread is running.");
   }
}

public class Main {
   public static void main(String[] args) {
      MyThread t = new MyThread();
      t.start();
      try {
         t.join();
      } catch (InterruptedException e) {
         e.printStackTrace();
      }
      System.out.println("MyThread has completed.");
   }
}
````

#### Sleeping Threads:
We can use the sleep() method to pause the execution of a thread for a specified amount of time.
Example:

````
class MyThread extends Thread {
   public void run() {
      System.out.println("MyThread is running.");
      try {
         Thread.sleep(1000); // pause for 1 second
      } catch (InterruptedException e) {
         e.printStackTrace();
      }
      System.out.println("MyThread has completed.");
   }
}

public class Main {
   public static void main(String[] args) {
      MyThread t = new MyThread();
      t.start();
   }
}
````

#### Interrupting Threads:
We can use the interrupt() method to interrupt the execution of a thread.

#### Example:

````
class MyThread extends Thread {
   public void run() {
      System.out.println("MyThread is running.");
      while (!isInterrupted()) {
         // do some work
      }
      System.out.println("MyThread has been interrupted.");
   }
}

public class Main {
   public static void main(String[] args) {
      MyThread t = new MyThread();
      t.start();
      try {
         Thread.sleep(1000); // pause for 1 second
      } catch (InterruptedException e) {
         e.printStackTrace();
      }
      t.interrupt();
   }
}
````

#### Thread Synchronization:

When multiple threads are accessing the same shared resource, there may be a possibility of data inconsistency or race conditions. Thread synchronization is the mechanism that prevents such data inconsistencies by allowing only one thread at a time to access the shared resource. In Java, synchronization can be achieved by using the synchronized keyword or by using the Lock interface.

#### Example:

````
class Counter {
   private int count = 0;

   public synchronized void increment() {
      count++;
   }

   public int getCount() {
      return count;
   }
}

class WorkerThread extends Thread {
   Counter counter;

   public WorkerThread(Counter counter) {
      this.counter = counter;
   }

   public void run() {
      for(int i=0; i<10000; i++) {
         counter.increment();
      }
   }
}

public class Test {
   public static void main(String[] args) {
      Counter counter = new Counter();
      Thread thread1 = new WorkerThread(counter);
      Thread thread2 = new WorkerThread(counter);
      thread1.start();
      thread2.start();
      try {
         thread1.join();
         thread2.join();
      } catch(InterruptedException e) {
         e.printStackTrace();
      }
      System.out.println(counter.getCount());
   }
}
````

In this example, the Counter class has a synchronized increment() method which ensures that only one thread can access the count variable at a time. The WorkerThread class is a thread that increments the counter 10000 times. The Test class creates two worker threads and starts them. The main thread waits for both worker threads to complete using the join() method and then prints the final count value.

#### Thread Pools:
Creating a new thread for every task can be expensive in terms of system resources. Thread pools are a way to manage and reuse a fixed number of threads for executing a large number of tasks. Java provides the Executor framework to create and manage thread pools. The Executor framework provides a way to submit tasks to a pool of threads and also provides various ways to configure and manage the thread pool.

#### Example:

````
class WorkerThread implements Runnable {
   private String taskName;

   public WorkerThread(String taskName) {
      this.taskName = taskName;
   }

   public void run() {
      System.out.println(Thread.currentThread().getName() + " executing " + taskName);
      try {
         Thread.sleep(1000);
      } catch(InterruptedException e) {
         e.printStackTrace();
      }
   }
}

public class Test {
   public static void main(String[] args) {
      ExecutorService executor = Executors.newFixedThreadPool(2);
      for(int i=1; i<=5; i++) {
         WorkerThread worker = new WorkerThread("task " + i);
         executor.execute(worker);
      }
      executor.shutdown();
      while(!executor.isTerminated()) {
      }
      System.out.println("All tasks completed");
   }
}
````

In this example, the WorkerThread class implements the Runnable interface and executes a task. The Test class creates a thread pool of size 2 using the newFixedThreadPool() method of the Executors class. It then submits 5 tasks to the thread pool using the execute() method of the ExecutorService interface. After submitting all tasks, the main thread waits for all tasks to complete by calling the shutdown() and isTerminated() methods of the ExecutorService interface.

---------------------------------------------------------------------------------------------------------
### Exception

In Java, an exception is an event that interrupts the normal flow of a program's execution. It is an object that represents an unusual condition that occurs during the execution of a program, such as a runtime error or an unexpected situation that requires special handling.

There are three types of exceptions in Java: checked exceptions, unchecked exceptions, and errors.

Checked Exceptions: These are the exceptions that are checked by the compiler at the time of compilation. They occur at the compile time and must be handled by the programmer using try-catch block or by declaring them in the method signature using the throws keyword.
#### Example:

````
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    try {
      File file = new File("example.txt");
      Scanner sc = new Scanner(file);
    } catch (FileNotFoundException e) {
      System.out.println("File not found: " + e.getMessage());
    }
  }
}
````

In the above example, we are trying to read the contents of a file using the Scanner class. If the file is not found, a FileNotFoundException is thrown, which is a checked exception. We have handled this exception using the try-catch block.

Unchecked Exceptions: These are the exceptions that are not checked by the compiler at the time of compilation. They occur at the runtime and can be handled using the try-catch block.
#### Example:

````
public class Main {
  public static void main(String[] args) {
    int a = 10, b = 0;
    try {
      int result = a / b;
    } catch (ArithmeticException e) {
      System.out.println("Divide by zero: " + e.getMessage());
    }
  }
}
````

In the above example, we are trying to divide a number by zero, which is not allowed in Java. This will result in an ArithmeticException, which is an unchecked exception. We have handled this exception using the try-catch block.

> **Errors**: These are the exceptions that occur due to the lack of system resources or some serious problems that cannot be handled by the program. They are also unchecked exceptions and are not required to be handled.
#### Example:

````
public class Main {
  public static void main(String[] args) {
    int[] array = new int[1000000000];
  }
}
````

In the above example, we are trying to create an array of size 1000000000, which is not possible due to the lack of memory resources. This will result in an OutOfMemoryError, which is an error and cannot be handled.

In Java, we can create our own exceptions by extending the Exception class or the RuntimeException class. We can also create custom exception messages and handle them using the try-catch block.

The time complexity of exception handling in Java is O(1) for the try block and O(n) for the catch block, where n is the number of catch blocks. However, the time complexity of the code inside the try and catch blocks depends on the code itself and cannot be determined in general.

![java-exception-hierarchy-1](https://user-images.githubusercontent.com/52101117/233890156-da5c0872-109c-49b0-a7fa-b4577ea2fc4b.png)
![hierarchy-of-exception-handling](https://user-images.githubusercontent.com/52101117/233890159-7883ad79-2eb4-44cd-bef3-090e018c4263.png)


Exception handling is a mechanism in Java that allows you to handle runtime errors that can occur during program execution. Exceptions can be caused by a variety of factors such as user input errors, network issues, or bugs in the code. Proper exception handling can make your code more robust, reliable, and maintainable.

Here are some key elements of exception handling in Java:

> **try-catch block**: This is used to handle exceptions in your code. The try block contains the code that may throw an exception, while the catch block contains the code that handles the exception. Here's an example:
````
try {
    // code that may throw an exception
} catch (ExceptionType e) {
    // code that handles the exception
}
````

> **throw keyword**: This is used to manually throw an exception from your code. You can create a new instance of an exception class and throw it using the throw keyword. Here's an example:
````
if (value < 0) {
    throw new IllegalArgumentException("Value must be positive");
}
````
> **throws keyword**: This is used in method signatures to indicate that the method can potentially throw a certain type of exception. It allows the calling code to handle the exception or propagate it further up the call stack. Here's an example:
````
public void readFile(String filename) throws FileNotFoundException {
    // code that reads the file
}
````
> **finally block**: This is used to define a block of code that will always execute, regardless of whether an exception is thrown or not. It is typically used to release resources that were acquired in the try block. Here's an example:
````
try {
    // code that may throw an exception
} catch (ExceptionType e) {
    // code that handles the exception
} finally {
    // code that always executes
}
````

In summary, exception handling is an important part of Java programming. By using try-catch blocks, throw and throws keywords, and finally blocks, you can write more robust and error-tolerant code that can handle runtime errors gracefully.


----------------------------------------------------------------------------------------------------------

### Object-Oriented Programming (OOP):

Object-Oriented Programming (OOP) is a programming paradigm that revolves around the concept of objects, which contain both data and methods to manipulate that data. Java is an object-oriented programming language, and it supports the core OOP concepts: Encapsulation, Inheritance, Polymorphism, and Abstraction.

Let's take an example of a real-world scenario and see how OOP concepts can be applied to solve it.

#### Example: Banking System

Suppose you are building a banking system. Here are the OOP concepts that you can apply:

####  Encapsulation:
> Encapsulation is the process of hiding the implementation details of an object from the outside world. In Java, you can achieve encapsulation by using access modifiers such as public, private, and protected. Let's say you have a BankAccount class that represents a customer's bank account. You can encapsulate the account balance by making it private, and provide public methods to access or modify the balance.
````
public class BankAccount {
    private double balance;

    public double getBalance() {
        return balance;
    }

    public void deposit(double amount) {
        balance += amount;
    }

    public void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            throw new IllegalArgumentException("Insufficient balance");
        }
    }
}
````
#### Inheritance:
> Inheritance is the process of creating a new class from an existing class. The new class inherits the properties and methods of the existing class. Let's say you want to create a SavingsAccount class that extends the BankAccount class. The SavingsAccount class inherits the balance property and deposit() and withdraw() methods from the BankAccount class, and also has an additional interest rate property.
````
public class SavingsAccount extends BankAccount {
    private double interestRate;

    public double getInterestRate() {
        return interestRate;
    }

    public void setInterestRate(double interestRate) {
        this.interestRate = interestRate;
    }
}
````
#### Polymorphism:
> Polymorphism is the ability of an object to take on many forms. In Java, you can achieve polymorphism through method overriding and method overloading. Let's say you want to calculate the interest earned on a SavingsAccount. You can override the deposit() method in the SavingsAccount class to include the interest earned.
````
public class SavingsAccount extends BankAccount {
    private double interestRate;

    // constructor and getter/setter methods

    @Override
    public void deposit(double amount) {
        super.deposit(amount);
        balance += balance * interestRate;
    }
}
````
#### Abstraction:
> Abstraction is the process of hiding unnecessary details while showing only the essential features of an object. In Java, you can achieve abstraction by using abstract classes and interfaces. Let's say you want to add a CreditCard class to the banking system. You can create an abstract PaymentCard class that contains common properties and methods for both CreditCard and DebitCard classes.
````
public abstract class PaymentCard {
    private String cardNumber;
    private String expirationDate;

    public PaymentCard(String cardNumber, String expirationDate) {
        this.cardNumber = cardNumber;
        this.expirationDate = expirationDate;
    }

    public abstract void makePayment(double amount);
}

public class CreditCard extends PaymentCard {
    private double creditLimit;
    private double balance;

    public CreditCard(String cardNumber, String expirationDate, double creditLimit) {
        super(cardNumber, expirationDate);
        this.creditLimit = creditLimit;
    }

    public void makePayment(double amount) {
        if (balance + amount <= creditLimit) {
            balance += amount;
    } else {
        throw new IllegalArgumentException("Exceeds credit limit");
    }
}
}
````

> In summary, OOP concepts provide a way to organize and structure code in a more modular and reusable way. By encapsulating data and methods, you can ensure that the internal workings of an object are hidden from the outside world. By using inheritance, you can create new classes that reuse properties and methods of existing classes. Polymorphism allows you to write code that can work with objects of different types, while abstraction allows you to create interfaces and abstract classes that define common behavior for related objects.

---------------------------------------------------------------------------------------------------------------
### Garbage Collector (GC)

In Java, the Garbage Collector (GC) is a component of the Java Virtual Machine (JVM) that automatically manages memory allocation and deallocation for objects. Its primary goal is to free up memory that is no longer being used by the program.

When you create an object in Java, it is allocated in the heap memory. The GC periodically checks the heap to identify objects that are no longer being referenced by the program, and then frees up the memory used by those objects.

Here's an example of how garbage collection works:

````
public class MyClass {
    public static void main(String[] args) {
        String s = "Hello, world!"; // allocate memory for a String object
        System.out.println(s); // print the string
        s = null; // set the reference to null
        // at this point, the String object is no longer referenced by the program
        // the GC will eventually free up the memory used by the object
    }
}
````
In this example, a String object is created and assigned to the variable s. The System.out.println() method is called to print the string. Then, the reference to the string is set to null, indicating that it is no longer being used by the program. The GC will eventually free up the memory used by the string object.

Internally, the GC uses several algorithms to manage memory allocation and deallocation. One of the most commonly used algorithms is the Mark and Sweep algorithm, which works as follows:

The GC starts by marking all objects that are still in use by the program.
It then traverses the object graph, starting from the roots (such as local variables, static fields, and references on the call stack), and marks all objects that are reachable from the roots.
Any objects that are not marked are considered to be garbage and are eligible for collection.
The GC then frees up the memory used by the garbage objects.
There are other algorithms as well, such as the Copying algorithm, which divides the heap into two equal parts and moves live objects from one part to the other, and the Generational algorithm, which divides objects into different generations based on their age and frequency of use.

In general, the GC is designed to run automatically in the background, without requiring any intervention from the programmer. However, in some cases, you may want to optimize the GC behavior or troubleshoot memory-related issues. Java provides several GC tuning options that allow you to adjust the GC parameters, such as the frequency of garbage collection, the size of the heap, and the type of GC algorithm used.

-------------------------------------------------------------------------------------------------------------------------------
### Java Memory Model:

The Java Memory Model (JMM) is a specification that defines how the Java virtual machine (JVM) manages memory for Java programs. In Java, there are two types of memory: Heap and Stack.

##### Heap:
> Heap is a part of memory where objects are created and stored. All objects in Java are created in the heap. Heap memory is shared among all threads in a Java program.

##### Stack:
> Stack is a part of memory where local variables and method parameters are stored. Each thread in a Java program has its own stack. When a method is called, a new frame is created on the stack to hold the method's local variables and parameters. When the method returns, the frame is removed from the stack.

##### Garbage Collection:
> Garbage Collection is a process of reclaiming memory that is no longer being used by a program. In Java, the JVM automatically performs garbage collection. The JVM has a built-in garbage collector that runs in the background and frees memory that is no longer being used by a program.

##### Memory Leaks:
> Memory Leaks occur when a program allocates memory but does not release it when it is no longer needed. This can cause the program to run out of memory over time. In Java, memory leaks can occur when objects are not properly dereferenced or when there are circular references between objects.

To avoid memory leaks in Java, it is important to ensure that objects are properly dereferenced when they are no longer needed. This can be done by setting object references to null when they are no longer needed. It is also important to avoid circular references between objects by using weak references or by using a garbage collector that can handle circular references.

--------------------------------------------------------------------------------------------------------------

### Optional

#### Sure, here's a list of all the public methods of the Optional class in Java:

* **empty()**: Returns an empty Optional instance.
* **filter(Predicate<? super T> predicate)**: If a value is present and matches the given predicate, returns an Optional describing the value, otherwise returns an empty Optional.
* **flatMap(Function<? super T, Optional<U>> mapper)**: If a value is present, applies the provided Optional-bearing mapping function to it, returns that result, otherwise returns an empty Optional.
* **get()**: If a value is present in this Optional, returns the value, otherwise throws a NoSuchElementException.
* **ifPresent(Consumer<? super T> consumer)**: If a value is present, performs the given action with the value, otherwise does nothing.
* **ifPresentOrElse(Consumer<? super T> action, Runnable emptyAction)**: If a value is present, performs the given action with the value, otherwise performs the given empty-based action.
* **isPresent()**: Returns true if there is a value present, otherwise false.
* **map(Function<? super T, ? extends U> mapper)**: If a value is present, applies the provided mapping function to it, and if the result is non-null, returns an Optional describing the result, otherwise returns an empty Optional.
* **of(T value)**: Returns an Optional with the specified non-null value.
* **ofNullable(T value)**: Returns an Optional describing the specified value, if non-null, otherwise returns an empty Optional.
* **orElse(T other)**: If a value is present, returns the value, otherwise returns the specified other value.
* **orElseGet(Supplier<? extends T> other)**: If a value is present, returns the value, otherwise returns the result produced by the supplying function.
* **orElseThrow(Supplier<? extends X> exceptionSupplier)**: If a value is present, returns the value, otherwise throws an exception produced by the exception supplying function.

````
import java.util.NoSuchElementException;
import java.util.Optional;
import java.util.function.Supplier;

public class OptionalExamples {

    public static void main(String[] args) {
        
        // empty()
        Optional<String> emptyOptional = Optional.empty();
        System.out.println("emptyOptional is present: " + emptyOptional.isPresent());

        // of()
        Optional<String> nonEmptyOptional = Optional.of("Hello, World!");
        System.out.println("nonEmptyOptional value: " + nonEmptyOptional.get());

        // ofNullable()
        String nullableString = null;
        Optional<String> nullableOptional = Optional.ofNullable(nullableString);
        System.out.println("nullableOptional is present: " + nullableOptional.isPresent());

        // isPresent()
        if (nonEmptyOptional.isPresent()) {
            System.out.println("nonEmptyOptional value: " + nonEmptyOptional.get());
        }

        // get()
        try {
            String value = emptyOptional.get();
        } catch (NoSuchElementException e) {
            System.out.println("Caught exception: " + e.getMessage());
        }

        // orElse()
        String orElseResult = emptyOptional.orElse("Default Value");
        System.out.println("orElseResult: " + orElseResult);

        // orElseGet()
        Supplier<String> supplier = () -> "Supplier Value";
        String orElseGetResult = emptyOptional.orElseGet(supplier);
        System.out.println("orElseGetResult: " + orElseGetResult);

        // orElseThrow()
        try {
            String throwResult = emptyOptional.orElseThrow(() -> new Exception("Exception"));
        } catch (Exception e) {
            System.out.println("Caught exception: " + e.getMessage());
        }

        // map()
        Optional<String> mappedOptional = nonEmptyOptional.map(String::toUpperCase);
        System.out.println("mappedOptional value: " + mappedOptional.get());

        // filter()
        Optional<String> filteredOptional = nonEmptyOptional.filter(value -> value.length() > 5);
        System.out.println("filteredOptional is present: " + filteredOptional.isPresent());

        // flatMap()
        Optional<String> flatMappedOptional = nonEmptyOptional.flatMap(value -> Optional.of(value.toUpperCase()));
        System.out.println("flatMappedOptional value: " + flatMappedOptional.get());

        // ifPresent()
        nonEmptyOptional.ifPresent(value -> System.out.println("ifPresent value: " + value));

        // ifPresentOrElse()
        nonEmptyOptional.ifPresentOrElse(
            value -> System.out.println("ifPresentOrElse value: " + value), 
            () -> System.out.println("ifPresentOrElse empty action"));
    }
}
````

When you run this program, you should see the following output:
````
emptyOptional is present: false
nonEmptyOptional value: Hello, World!
nullableOptional is present: false
nonEmptyOptional value: Hello, World!
Caught exception: No value present
orElseResult: Default Value
orElseGetResult: Supplier Value
Caught exception: Exception
mappedOptional value: HELLO, WORLD!
filteredOptional is present: true
flatMappedOptional value: HELLO, WORLD!
ifPresent value: Hello, World!
ifPresentOrElse value: Hello, World!
````

This program demonstrates how to use each of the methods available in the Optional class in Java. It shows how to create empty and non-empty Optional objects, how to check if a value is present, how to get the value from an Optional, and how to provide default values. It also shows how to use methods like map, filter, and flatMap to work with Optional objects in a more functional way, and how to use

----------------------------------------------------------------------------------------------------------
### String Collection Java

Provide all methods along withnexample and time complexity
Sure, here are some common methods available for manipulating strings in Java:

> **charAt(int index)** - returns the character at the specified index in the string. Time complexity: O(1)
#### Example:

````
String str = "Hello, world!";
char c = str.charAt(7);
System.out.println(c); // Output: w
````

> **length()** - returns the length of the string. Time complexity: O(1)
#### Example:

````
String str = "Hello, world!";
int len = str.length();
System.out.println(len); // Output: 13
````

> **substring(int beginIndex)** - returns a substring of the original string, starting at beginIndex and extending to the end of the string. Time complexity: O(n), where n is the length of the resulting substring
#### Example:

````
String str = "Hello, world!";
String sub = str.substring(7);
System.out.println(sub); // Output: world!
````
> **substring(int beginIndex, int endIndex)** - returns a substring of the original string, starting at beginIndex and extending up to but not including endIndex. Time complexity: O(n), where n is the length of the resulting substring
#### Example:

````
String str = "Hello, world!";
String sub = str.substring(7, 12);
System.out.println(sub); // Output: world
````
> **equals(Object obj)** - compares the string to the specified object and returns true if they are equal, false otherwise. Time complexity: O(n), where n is the length of the string
#### Example:

````
String str1 = "Hello, world!";
String str2 = "hello, world!";
boolean equals = str1.equals(str2);
System.out.println(equals); // Output: false
````
> **equalsIgnoreCase(String anotherString)** - compares the string to another string, ignoring case differences, and returns true if they are equal, false otherwise. Time complexity: O(n), where n is the length of the string
#### Example:

````
String str1 = "Hello, world!";
String str2 = "hello, world!";
boolean equalsIgnoreCase = str1.equalsIgnoreCase(str2);
System.out.println(equalsIgnoreCase); // Output: true
````
> **indexOf(int ch)** - returns the index within the string of the first occurrence of the specified character, or -1 if the character is not found. Time complexity: O(n), where n is the length of the string
#### Example:

````
String str = "Hello, world!";
int index = str.indexOf('w');
System.out.println(index); // Output: 7
````
> **lastIndexOf(int ch)** - returns the index within the string of the last occurrence of the specified character, or -1 if the character is not found. Time complexity: O(n), where n is the length of the string
#### Example:

````
String str = "Hello, world!";
int index = str.lastIndexOf('o');
System.out.println(index); // Output: 8
````
> **contains(CharSequence s)** - returns true if the string contains the specified character sequence, false otherwise. Time complexity: O(n), where n is the length of the string
#### Example:

````
String str = "Hello, world!";
boolean contains = str.contains("world");
System.out.println(contains); // Output: true
````
> **replace(char oldChar, char newChar)** - returns a new string resulting from replacing all occurrences of oldChar in the string with newChar. Time complexity: O(n), where n is the length of the string
#### Example:

````
String str = "Hello, world!";
String replaced = str
````

> **startsWith(String prefix)** - returns true if the string starts with the specified prefix, false otherwise. Time complexity: O(m), where m is the length of the prefix
#### Example:

````
String str = "Hello, world!";
boolean startsWith = str.startsWith("Hello");
System.out.println(startsWith); // Output: true
````
> **endsWith(String suffix)** - returns true if the string ends with the specified suffix, false otherwise. Time complexity: O(m), where m is the length of the suffix
#### Example:

````
String str = "Hello, world!";
boolean endsWith = str.endsWith("world!");
System.out.println(endsWith); // Output: true
````
> **isEmpty()** - returns true if the string is empty (has length 0), false otherwise. Time complexity: O(1)
#### Example:

````
String str = "Hello, world!";
boolean isEmpty = str.isEmpty();
System.out.println(isEmpty); // Output: false
````
> **toCharArray()** - returns a char array containing the characters in the string. Time complexity: O(n), where n is the length of the string
#### Example:

````
String str = "Hello, world!";
char[] chars = str.toCharArray();
System.out.println(chars[7]); // Output: w
````
> **toLowerCase()** - returns a new string with all characters in lowercase. Time complexity: O(n), where n is the length of the string
#### Example:

````
String str = "Hello, world!";
String lowercase = str.toLowerCase();
System.out.println(lowercase); // Output: hello, world!
````
> **toUpperCase()** - returns a new string with all characters in uppercase. Time complexity: O(n), where n is the length of the string
#### Example:

````
String str = "Hello, world!";
String uppercase = str.toUpperCase();
System.out.println(uppercase); // Output: HELLO, WORLD!
````
> **trim()** - returns a new string with leading and trailing whitespace removed. Time complexity: O(n), where n is the length of the string
#### Example:

````
String str = "   Hello, world!   ";
String trimmed = str.trim();
System.out.println(trimmed); // Output: Hello, world!
````

#### Here is the completed example with all the methods:
````
String str = "Hello, world!";
char c = str.charAt(7);
int len = str.length();
String sub1 = str.substring(7);
String sub2 = str.substring(7, 12);
boolean equals = str.equals("hello, world!");
boolean equalsIgnoreCase = str.equalsIgnoreCase("hello, world!");
int index1 = str.indexOf('w');
int index2 = str.lastIndexOf('o');
boolean contains = str.contains("world");
String replaced = str.replace('o', 'x');
boolean startsWith = str.startsWith("Hello");
boolean endsWith = str.endsWith("world!");
boolean isEmpty = str.isEmpty();
char[] chars = str.toCharArray();
String lowercase = str.toLowerCase();
String uppercase = str.toUpperCase();
String trimmed = str.trim();
````

````
System.out.println(c); // Output: w
System.out.println(len); // Output: 13
System.out.println(sub1); // Output: world!
System.out.println(sub2); // Output: world
System.out.println(equals); // Output: false
System.out.println(equalsIgnoreCase); // Output: true
System.out.println(index1); // Output: 7
System.out.println(index2); // Output: 8
System.out.println(contains); // Output: true
System.out.println(replaced); // Output: Hellx, wxrld!
System.out.println(startsWith); // Output: true
````

----------------------------------------------------------------------------------------------------------------------

### Functional Interface

> Explain functional interface and provide list of all functional interface with example and time complexity
A functional interface is an interface that has only one abstract method. Functional interfaces are used to enable the use of lambda expressions in Java. Lambda expressions are a way to write concise and expressive code, and they are particularly useful for working with collections and streams.

Here is a list of some common functional interfaces in Java along with examples and time complexity:

> **Consumer<T>** - a functional interface that takes a single argument of type T and returns no result. It is typically used to perform some action on an object.
#### Example:

````
Consumer<String> printer = str -> System.out.println(str);
printer.accept("Hello, world!"); // Output: Hello, world!
````
#### Time complexity: O(1)

> **Function<T, R>** - a functional interface that takes a single argument of type T and returns a result of type R. It is typically used to transform an object into another object.
#### Example:

````
Function<Integer, String> converter = num -> Integer.toString(num);
String str = converter.apply(42);
System.out.println(str); // Output: 42
````
#### Time complexity: O(1)

> **Predicate<T>** - a functional interface that takes a single argument of type T and returns a boolean value. It is typically used to test an object and determine if it satisfies a certain condition.
#### Example:

````
Predicate<Integer> isEven = num -> num % 2 == 0;
boolean result = isEven.test(42);
System.out.println(result); // Output: true
````
#### Time complexity: O(1)

> **Supplier<T>** - a functional interface that takes no arguments and returns a result of type T. It is typically used to generate a value on demand.
#### Example:

````
Supplier<Integer> generator = () -> (int)(Math.random() * 100);
int num = generator.get();
System.out.println(num); // Output: a random number between 0 and 100
````
#### Time complexity: O(1)

> **UnaryOperator<T>** - a functional interface that takes a single argument of type T and returns a result of type T. It is a subtype of Function<T, T>.
#### Example:

````
UnaryOperator<Integer> increment = num -> num + 1;
int result = increment.apply(42);
System.out.println(result); // Output: 43
````
#### Time complexity: O(1)

> **BinaryOperator<T>** - a functional interface that takes two arguments of type T and returns a result of type T. It is a subtype of BiFunction<T, T, T>.
#### Example:

````
BinaryOperator<Integer> add = (a, b) -> a + b;
int result = add.apply(2, 3);
System.out.println(result); // Output: 5
````
#### Time complexity: O(1)



> **BiConsumer<T, U>** - a functional interface that takes two arguments of type T and U and returns no result.
#### Example:

````
BiConsumer<Integer, Integer> printer = (a, b) -> System.out.println(a + b);
printer.accept(2, 3); // Output: 5
````
#### Time complexity: O(1)

> **BiFunction<T, U, R>** - a functional interface that takes two arguments of type T and U and returns a result of type R.
#### Example:

````
BiFunction<Integer, Integer, Integer> add = (a, b) -> a + b;
int result = add.apply(2, 3);
System.out.println(result); // Output: 5
````
#### Time complexity: O(1)

> **BiPredicate<T, U>** - a functional interface that takes two arguments of type T and U and returns a boolean value.
#### Example:

````
BiPredicate<Integer, Integer> isGreaterThan = (a, b) -> a > b;
boolean result = isGreaterThan.test(5, 3);
System.out.println(result); // Output: true
````
#### Time complexity: O(1)

> **ToDoubleFunction<T>** - a functional interface that takes an argument of type T and returns a double value.
#### Example:

````
ToDoubleFunction<Integer> converter = num -> num * 1.0;
double result = converter.applyAsDouble(42);
System.out.println(result); // Output: 42.0
````
#### Time complexity: O(1)

> **ToIntFunction<T>** - a functional interface that takes an argument of type T and returns an int value.
#### Example:

````
ToIntFunction<String> length = str -> str.length();
int result = length.applyAsInt("Hello, world!");
System.out.println(result); // Output: 13
````
#### Time complexity: O(1)

> **ToLongFunction<T>** - a functional interface that takes an argument of type T and returns a long value.
#### Example:

````
ToLongFunction<String> hash = str -> str.hashCode();
long result = hash.applyAsLong("Hello, world!");
System.out.println(result); // Output: -1092583899
````
#### Time complexity: O(1)

> Note that the time complexity of lambda expressions is determined by the time complexity of the code they execute. The time complexity of lambda expressions can range from O(1) to O(n) or higher, depending on the code they execute.


Note that the time complexity of lambda expressions is determined by the time complexity of the code they execute. The time complexity of lambda expressions can range from O(1) to O(n) or higher, depending on the code they execute.

---------------------------------------------------------------------------------------------------------------------
### Here is a list of all the functional interfaces available in Java:

> **Function<T, R>** - a functional interface that takes an argument of type T and returns a result of type R.

> **Consumer<T>** - a functional interface that takes an argument of type T and returns no result.

> **Predicate<T>** - a functional interface that takes an argument of type T and returns a boolean value.

> **Supplier<T>** - a functional interface that takes no arguments and returns a result of type T.

> **UnaryOperator<T>** - a functional interface that takes an argument of type T and returns a result of type T.

> **BinaryOperator<T>** - a functional interface that takes two arguments of type T and returns a result of type T.

> **BiConsumer<T, U>** - a functional interface that takes two arguments of type T and U and returns no result.

> **BiFunction<T, U, R>** - a functional interface that takes two arguments of type T and U and returns a result of type R.

> **BiPredicate<T, U>** - a functional interface that takes two arguments of type T and U and returns a boolean value.

> **ToDoubleFunction<T>** - a functional interface that takes an argument of type T and returns a double value.

> **ToIntFunction<T>** - a functional interface that takes an argument of type T and returns an int value.

> **ToLongFunction<T>** - a functional interface that takes an argument of type T and returns a long value.

> **IntFunction<R>** - a functional interface that takes an int argument and returns a result of type R.

> **IntConsumer** - a functional interface that takes an int argument and returns no result.

> **IntPredicate** - a functional interface that takes an int argument and returns a boolean value.

> **IntSupplier** - a functional interface that takes no arguments and returns an int value.

> **IntUnaryOperator** - a functional interface that takes an int argument and returns an int value.

> **IntBinaryOperator** - a functional interface that takes two int arguments and returns an int value.

> **LongFunction<R>** - a functional interface that takes a long argument and returns a result of type R.

> **LongConsumer** - a functional interface that takes a long argument and returns no result.

> **LongPredicate** - a functional interface that takes a long argument and returns a boolean value.

> **LongSupplier** - a functional interface that takes no arguments and returns a long value.

> **LongUnaryOperator** - a functional interface that takes a long argument and returns a long value.

> **LongBinaryOperator** - a functional interface that takes two long arguments and returns a long value.

> **DoubleFunction<R>** - a functional interface that takes a double argument and returns a result of type R.

> **DoubleConsumer** - a functional interface that takes a double argument and returns no result.

> **DoublePredicate** - a functional interface that takes a double argument and returns a boolean value.

> **DoubleSupplier** - a functional interface that takes no arguments and returns a double value.

> **DoubleUnaryOperator** - a functional interface that takes a double argument and returns a double value

--------------------------------------------------------------------------------------------------------------------------
