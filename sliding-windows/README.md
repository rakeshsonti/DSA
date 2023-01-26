# Sliding Winodws || Two Pointer
  ### Definations: 
  ````
The Sliding window is a problem-solving technique of data structure and algorithm for problems that apply arrays or lists.
These problems are painless to solve using a brute force approach in O(n²) or O(n³). 
However, the Sliding window technique can reduce the time complexity to O(n).
  ````
##### How to use Sliding Window Technique?

The general use of Sliding window technique can be demonstrated as following:

* Find the size of window required 
* Compute the result for 1st window, i.e. from start of data structure
* Then use a loop to slide the window by 1, and keep computing the result window by window.

##### What is Sliding Window?

Consider a long chain connected together. Suppose you want to apply oil in the complete chain with your hands, without pouring the oil from above.
One way to do so is to: 

* pick some oil, 
* apply onto a section of chain, 
* then again pick some oil
* then apply it to the next section where oil is not applied yet
and so on till the complete chain is oiled.
* Another way to do so, is to use a cloth, dip it in oil, and then hold onto one end of the chain with this cloth. Then instead of re-dipping it again and again, just slide the cloth with hand onto the next section, and next, and so on till the other end.

The second way is known as the Sliding window technique and the portion which is slided from one end to end, is known as Sliding Window.

![WindowSlidingTechniquedrawio2-660x423](https://user-images.githubusercontent.com/52101117/204191168-9f906000-7e76-45fc-a0be-07b745c8bc2e.jpg)

##### Below are some fundamental clues to identify such kind of problem:

* The problem will be based on an array, list or string type of data structure.
* It will ask to find subrange in that array or string will have to give longest, shortest, or target values.
* Its concept is mainly based on ideas like the longest sequence or shortest sequence of something that satisfies a given condition perfectly.

##### In general, any problem where the author is asking for any of the following return values can use a sliding window:

* Minimum value
* Maximum value
* Longest value
* Shortest value
* K-sized value

-----------------------------------------------------------------------------------------------------------------------
## Sliding Winodws || Two Pointer
----------------------------------------------------------------------------------------------------------------------
### 3. Longest Substring Without Repeating Characters
##### tc-> O(n+n)=O(2n) sc-> O(n) || not passing all the test case
* We will use two pointer left and right
* use set to find duplicate value
* iterate string 0 to n-1
* if value does not exists into the set then increse the right pointer by one and insert the value into the set 
* calculate the max length ||  maxValue=max(maxValue,(right-left+1)); +1 because of o based indexing
* if value exists then remove the first index value and increse the left pointer by 1

##### tc-> O(n) sc->O(n) || frequency array is slightly faster than map
* use a map to store the index of element occurs previously 
* iterate the string from 0 to n-1
* if value exists then increase the left pointer and assign the left value to max of left and mp[ch]
* left=max(mp[ch]+1,left);
* there can be a situation where left moved ahead and mp[ch] has a lower value so instead of mp[ch] we will choose left e.g. "abba"
-----------------------------------------------------------------------------------------------------------------------
### 1004. Max Consecutive Ones III
##### tc-> O(N) sc-> O(1) 
* we use two pointer left and right 
* we will keep moving right pointer till we got 1 and k zeros.
* once we lost k zeros , shift left pointer to first zero and again start counting the window size
-------------------------------------------------------------------------------------------------------------
### 904. Fruit Into Baskets
##### Two pointer approach || tc-> O(n) sc-> O(constant)
* we will take one map to count the frequency
* iterate value from 0 to n-1
* if value does not exists into the map simply add else increase the count
* if map contains more than two type of fruits then simply start removing the fruits from the map
* remove or descrease the frequency till map contains less then equals 2 type of fruits
* calculate the max windows size till now
-------------------------------------------------------------------------------------------------------------------
### 424. Longest Repeating Character Replacement
##### Sliding window: tc-> O(n) sc->O(n) || tc-> O(n) sc->O(256) = constant O(1)
* take a map and iterate the string 0 to n-1
* count the frequency of character and keep tracking maxFrequency
* if current window size -maxFrequency > k = invalid window size need to repair
* maxFrequency is the valid character till now and we will try to convert other character to max frequency character
* remaining character=windowsize-maxFrequecy
* if remaining character is greater than k means current window is not valid so start increasing the left pointer and make sure window is valid
* we are using constant space as 256 so space complexity is O(1)
---------------------------------------------------------------------------------------------------------------
### 930. Binary Subarrays With Sum
##### hashmap approach tc-> O(n) sc-> O(n)
* count the prefix sum
* check if **prefix-goal** already available then include count to ans
* if not available then include **prefix-goal** frequency to map 
##### sliding window approach tc-> O(n) sc-> O(1)
* It is quite self explanatory we calculate all the subarrays with atmost sum goal. Then substract no. of subarrays with atmost sum goal-1. Substract and giving us subarrays of only sum goal.
----------------------------------------------------------------------------------------------------------
