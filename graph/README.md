## Graph
![image](https://user-images.githubusercontent.com/52101117/216118438-bc113ad4-48b0-4c0d-a3bf-96e212de0798.png)

* 1. directed graph 2. undirected graph
* **path** node can not appear twise in a path
* we can travel throught the path
* **degree** no of path goes inside and outside
* total degree(UDG)=2*total edges
* **Directed graph** 1) indegree (no of incoming edges) 2) out degree (no of out going edges)
* **edges wieght** weight of that edge default edge weight is 1

![image](https://user-images.githubusercontent.com/52101117/217024532-f69a7387-639b-4903-af56-d3da55e0a8af.png)

--------------------------------------------------------------------------------------------------------------------------------
**All can be one graph**
> One graph can have multiple components. They may be connected or not connected

![image](https://user-images.githubusercontent.com/52101117/217027105-44a57833-0a8d-4b4e-8082-0a280cc49bad.png)

--------------------------------------------------------------------------------------------------
##### DFS (Depth first search) SC-> O(n) storing+O(n) visited +O(n) stack sapce ~ O(n) tc-> undirected GF=sum of degree of node=2*Edges+O(n) iteration of element || directed graph O(n) + O(E)
* as its name shows first iterate to the depth of the graph . We have multiple type of depth first search algorithm
* instead of storing the result of all sub element, iterate over its depth and then store the result into the result.

--------------------------------------------------------------------------------------------------------------------------------------
##### 547. Number of Provinces   
> tc-> O(n) for checking all the element+(O(V+2E)) = O(n)
> sc->O(n) visiting array +O(n) stack space (in case of skeved 

* first the convert the given matrix to adjcancy vector
* call dfs for all the elements and if the element is not already visited then count the result.
--------------------------------------------------------------------------------------------------------------------------------------

##### 994. Rotting Oranges
 > tc->  O(N*M)visit first time +O((N*M)*4)queue=o(N*M)
 > sc-> O(N*M) QUEUE +o(N*M) VIS=o(N*M)
* create an vising array of size nm and queue which can queue<{row,col},time}> store the data which can be rotten
* first push all the rotten value to queue with time 0
* create drow and crow array to find the neightbour of current element
* run a loop till queue is not empty
* pop an element and find all the neighbour of that element and check if current element can be rotten and already not visited then push current element with time and marks as visited
* also maintian total and cnt to check weather all the elements are rotten or not if not then return -1 else the max time
--------------------------------------------------------------------------------------------------------------------------------------
##### 733. Flood Fill
> //tc-> O(n*m*4) sc-> O(n*m) matrix to store the ans +O(n*m)stack space || queue space
###### BFS
* they provided initial row col index to start the bfs
* store given initial value to queue and apply bfs as run loop till queue is not empty
* assign image to vis vector
* fetch one element from the queue and check all neighbour, index value should be under 0>= and <=m,<=n
* image contains all the color
* change value if current element color is same as first element color and already not changed to new color . Change it to given color(new color) if same
* ```` if(nrow>=0 && ncol>=0 && nrow<n &&ncol<m
              &&image[nrow][ncol]==initColor && vis[nrow][ncol]!=newColor){
                q.push({nrow,ncol});
                vis[nrow][ncol]=newColor;
               }
  ````
 ##### DFS
  * condition will be same as bfs only instead of storing value to qeue we will call recursively . Need to main some value in parameter
  * call recursion with sr and sc and later on change if any value row col value found
  --------------------------------------------------------------------------------------------------------------------------------------
 ##### Detect cycle in an undirected graph                                        
  ###### DFS Solution ||    
  > TC-> O(n every node+2E(summation of all adjacent node))+O(N)outer for loop=O(N+2E)+O(N)
  > SC-> O(N) stack space+O(N) visited array= O(n)
 * call DFS function and mark the node as visited
 * recursively call dfs for all the adjcent element of the current element if adjacent not visited
 * if dsf of adjacent element return true then only return true else wait for the next element to return true
 * if adjacent element is already visited then check the parent of adjacent element if parent is not equals to the current that means cycle exists(logic: if we are reaching on an element from multiple parent that means cycle exists)
 * check all the components if cycle not found the only return false

###### BFS Solution
* logic will be similar (logic: if we are reaching on an element from multiple parent that means cycle exists)
* we will maintain a visted array and iterate like BFS traversal
* if node already visited then check the parent and current adjacent element if equals then return true;
--------------------------------------------------------------------------------------------------------------------------------------

