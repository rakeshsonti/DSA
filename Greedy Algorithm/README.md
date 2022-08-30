## N Meetings In A Room
#### Best approach
````
1) We want to organize maximum meetings in a room, so meeting ending time should be less
2) We will store start , end and , index in a vector
3) sort vector based on end time
4) iterate the sort vector and check in previous end time is less than current start time 
5) then meeting can be possible and store it to resultant vector else continue
````
> //tc->O(n)iterate start value to vector+O(nlog(n)) for sort+O(n) iterate the sort array

> //sc-> O(n) for storing maintaining the pair
