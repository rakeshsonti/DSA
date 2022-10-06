class Solution
{
    //tc-> O(m*nlog(n))+O(n)
    //sc->O(1)
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i=0;
        while(i<m && n>0){
            if(nums1[i]>nums2[0]){
                swap(nums1[i],nums2[0]);
                }
            i++;
        }
        i=0;
        while(i<n){
            nums1[m+i]=nums2[i];
            i++;
        }
    }
};

//---------------------------------------------------------------------------------------------------------

class Solution
{
    //tc-> O(n)+O(nlog(m+n))
    //sc->O(1)
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i=0;
       while(i<n){
           nums1[m+i]=nums2[i];
           i++;
       }
        sort(nums1.begin(),nums1.end());
    }
};

//---------------------------------------------------------------------------------------------------------
//tc-> O(m+n) sc-> O(m+n)
class Solution
{
    public:
        void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
        {
            vector<int> ans(m+n);
            int i = 0;
            int j = 0;
            int k = 0;
            while (i < m && j < n)
            {
                if (nums1[i] < nums2[j])
                {
                    ans[k] = nums1[i];
                    i++;
                }
                else
                {
                    ans[k] = nums2[j];
                    j++;
                }
                k++;
            }
            while (i < m)
            {
                ans[k] = nums1[i];
                k++;
                i++;
            }
            while (j < n)
            {
                ans[k] = nums2[j];
                k++;
                j++;
            }
            k = 0;
            while (k < ans.size())
            {
                nums1[k] = ans[k];
                k++;
            }
        }
};
