//time O(n)*O(n)
//space (n)
Use String builder instead of string// strings are immutable so it will take more time
Approch 
1) Iterate a string and check if duplicate character exit , don't add to resultant string else add to resultant string
2) Recursively follow step one till that all resultant string character's are unique
space: recursion take log(n) space and O(n) extra sapce to store resultant string 
time : inner loop will take O(n) and in worst case scenario need to call O(n) recursive call
