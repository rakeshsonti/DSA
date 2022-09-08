### Pascle Tringle
````
 1) iterate two loop
 2) first loop iterate till n time
 3) in second loop for first and last index we will add 1 
 4) for intermediate index , we will add some of previos level , j-1 and j sum
 ```` 
 > tc-> 0+1+2+3+4.....+(n-1)=(n-1)((n-1)+1)/2=(n^2-n)/2=O(n^2)
 
 >sc->O(1)

### Combination Sum
````
  1) We will use pick up of not pickup approach
  2) if pickup the element then do target-candidates[index]
  3) if not pick up then simply call function 
  4) if candidate[index] <=target then pick up the element 
  5) in base case if index==size of candidate then check if target is zero so include it to result and return
 ```` 

 > tc-> tc->O(2^t*k) t is the target and k is the average length
 
 > sc-> O(t*k) 
