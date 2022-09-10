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
