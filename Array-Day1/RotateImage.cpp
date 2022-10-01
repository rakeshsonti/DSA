class Solution
{
    //tc-> O(n^2)
    //sc-> O(n)
    public:
        void rotate(vector<vector < int>> &matrix)
        {
            int ans[matrix.size()][matrix[0].size()];
            for(int i=0;i<matrix.size();i++){
                for(int j=0;j<matrix[0].size();j++){
                    ans[j][matrix.size()-i-1]=matrix[i][j];
                }
            }
            for(int i=0;i<matrix.size();i++){
                for(int j=0;j<matrix[0].size();j++){
                   matrix[i][j]=ans[i][j];
                }
            }
        }
};
//----------------------------------------------------------------------------------------------------------------
class Solution
{
    //tc-> O(n^2)+O(log(n))+O(n^2)
    //sc-> O(n)
    public:
        void rotate(vector<vector < int>> &matrix)
        {
            vector<vector < int>> ans;
            for (int i = matrix.size() - 1; i >= 0; i--)
            {
                vector<int> vc;
                for (int j = matrix[0].size() - 1; j >= 0; j--)
                {
                    vc.push_back(matrix[j][i]);
                }
                ans.push_back(vc);
            }
            int i = 0, j = matrix.size() - 1;
            while (i < j)
            {
                swap(ans[i], ans[j]);
                i++;
                j--;
            }
            matrix.assign(ans.begin(), ans.end());
        }
};
