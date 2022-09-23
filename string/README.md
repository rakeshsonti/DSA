## Substring
 ### First approach
 1) run a loop from 0 to n
 2) run another loop for length of the substring from 1 to n-1
 3) use substr(startIndex,length of the substring) to print substring
 > tc-> O(n^3) sc-> O(1)
 
 ### Second approach
  1) run a loop from 0 to n
  2) run another loop for length of the substring from j=i to n-1
  3) use on variable to store previos substring and generate a new string using previos one
  > tc-> O(n^2) sc-> O(1)
 
  
 ### Third approach
  1) run a loop from 0 to n
  2) run another loop for length of the substring from j=i to n-1 (for the number of substring)
  3) run third loop from k=j to k<=i (for length of the substring)

  > tc-> O(n^3) sc-> O(1)
 ------------------------------------------------------------------------------------
 
 ## Decode String
  ### Recursive solution
   1. run a loop from 0 to n till we didn't find ']' character else append result into the result string
   2. if character is digit then we will write a logic to generate number beacuse there might be a chance number available in second or third digit
   3.  while (index < s.length() && isdigit(s[index]))
                {
                    k = k *10 + (s[index++] - '0');
                }
   4. now once digit finshed index index by one beacuse we know on the next index ']' is available
   5. call the function with the string
   6. once recursion over calculate the result k(calculate before recursion) time and append into the result
   7. return the string
   
   > time complexity-> O(n)+O(k) where n is the size of the string and k is the sum of all digits available in string = O(n)
   
   > space complexity-> O(n) recursion space
   ----------------------------------------------------------------------------------------------
