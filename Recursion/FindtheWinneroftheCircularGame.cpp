class Solution
{
   	//tc-> O(n) sc-> O(n) because of recursion
    public:
        int searchWinner(vector<int> &vc, int index, int k)
        {
            if (vc.size() == 1)
            {
                return vc[0];
            }
            index--;
            index = index % vc.size();
            vc.erase(vc.begin() + index);
            return searchWinner(vc, index + k, k);
        }
    int findTheWinner(int n, int k)
    {
        vector<int> vc;
        for (int i = 1; i <= n; i++) vc.push_back(i);
        return searchWinner(vc, 0 + k, k);
    }
};
----------------------------------------------------------------------------------------------------
class Solution {
   	//tc-> O(n*k) sc-> O(n)
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1;i<=n;i++)q.push(i);
        int i=1;
        while(q.size()>1){
            if(i==k){
                i=1;
                q.pop();
                continue;
            }
            int num=q.front();
            q.pop();
            q.push(num);
            i++;
        }
        return q.front();
    }
}; 
