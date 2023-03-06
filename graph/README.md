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





