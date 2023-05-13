#### tc-> O(V+2E) sc-> O(V+2E)
​
#### Approach
* do dfs traversal
* if node not colored then first fill with oposite color
* now check if already colored then check both the adjacent node should have same color
* if we got a single false so return false else return true