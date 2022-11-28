# Sliding Winodws
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



