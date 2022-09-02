## N Meetings In A Room
#### Best approach
````
1) We want to organize maximum meetings in a room, so meeting ending time should be less
2) We will store start , end and , index in a vector
3) sort vector (sort based on end index , if end index is equals then sort based on there index lower index come first)
4) iterate the sort vector and check in previous end time is less than current start time 
5) then meeting can be possible and store it to resultant vector else continue
````
> //tc->O(n)iterate start value to vector+O(nlog(n)) for sort+O(n) iterate the sort array

> //sc-> O(n) for storing maintaining the pair

## Minimum Plateform
#### Best approach
````
1) First we will sort arrival train time and departure train time
2) then we will iterate all the time array and check if departure time is greater than arrival 
 time the take new plateform otherwise use the same plateform for the next train.
3) If any previous plateform is free then next train will use that plateform
````
> //tc->O(2nlong(n))for sort two array O(2n) for iterating the array
> //sc-> O(1) not using any extra space
