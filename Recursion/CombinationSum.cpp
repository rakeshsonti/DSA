//tc->O(2^t*k) t is the target and k is the average length
//sc-> O(t*k) 
class Solution
{
    public:
        vector<vector < int>> combinationSum(vector<int> &candidates, int target)
        {
            vector<vector < int>> result;
            vector<int> sb;
            foundSum(candidates, target, result, sb,0);
            return result;
        }
    public:
        void foundSum(vector<int> &candidates, int target, vector<vector< int >> &result, vector< int > sb, int index)
        {
            if (index == candidates.size())
            {
                if (target == 0) result.push_back(sb);
                return;
            }
            
            if (candidates[index]<=target){
                sb.push_back(candidates[index]);
                foundSum(candidates, target - candidates[index], result, sb, index);
                sb.pop_back();
            }
            
            foundSum(candidates, target, result, sb, index + 1);
            
            
        }
};


// class Solution
// {
//     public:
//         vector<vector < int>> combinationSum(vector<int> &candidates, int target)
//         {
//             vector<vector < int>> result;
//             vector<int> sb;
//             foundSum(candidates, target, result, sb,0);
//             return result;
//         }
//     public:
//         void foundSum(vector<int> &candidates, int target, vector<vector< int >> &result, vector< int > sb, int index)
//         {
//             if (index == candidates.size())
//             {
//                 if (target == 0) result.push_back(sb);
//                 return;
//             }
//             if (target < 0 || index < 0) return;
//             foundSum(candidates, target, result, sb, index + 1);
//             sb.push_back(candidates[index]);
//             foundSum(candidates, target - candidates[index], result, sb, index);
//             sb.pop_back();
//         }
// };
