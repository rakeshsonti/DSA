### tc-> O(E+V)+O(V)+O(V+E)+O(nlog(n)) sc-> O(V)+O(2E)
​
### approach (topo sort logic)
​
* count all incoming adges and push the edges to the queue whose indegree is 0
* decrease the indegree while pop the node from the queue
* topo sort work with incoming edges but here in the question given as outgoing edges
* so reverse the adjacent list and apply topo sort
* once all the safe node added sort it and return