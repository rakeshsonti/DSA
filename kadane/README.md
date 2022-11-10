### Kadane

  ````
     1. we main two vaiable one for current sum and other one for max sum
     2. iterate the array from 1-n
     3. if current sum is less than 0 than current sum assign to 0
     4. if current sum is greater than max sum then change max sum value and assign to current sum
  ````
     
### 152. Maximum Product Subarray
  ##### First approach tc->O(n) sc->O(1)
  
   ````
   1. generally in kadane approach we care about only maxsum but in case of maxproduct if two negative no multiply that form a positive no. so we have to maintain maxproduct as well as minProduct
   2. why minProduct required?
    if we multiply a max number with negative number that become minimum number and multiply negative with negative become positive or max so for eleminating (-)*(-)=+ case we are managing maxProduct and minProduct
   ````
   --------------------------------------------------------------------
    
    
    
