class Solution
{
   	// tc-> O(n)=O(n)
   	// sc-> O(1)    
    public:
        void sortColors(vector<int> &nums)
        {
            int start = 0, mid = 0, end = nums.size() - 1;
            while (mid <= end)
            {
                switch (nums[mid])
                {
                    case 0:
                        swap(nums[start++], nums[mid++]);
                        break;
                    case 1:
                        mid++;
                        break;
                    case 2:
                        swap(nums[mid], nums[end--]);
                        break;
                }
            }
        }
};

/*
class Solution
{
   	// tc-> O(n)+O(n)=O(n)
   	// sc-> O(1)    
    public:
        void sortColors(vector<int> &nums)
        {
           	// sort(nums.begin(),nums.end());
            int x = 0, y = 0, z = 0;
            for (int val: nums)
            {
                if (val == 0) x++;
                else if (val == 1) y++;
                else z++;
            }
            int i = 0;
            while (i < x)
            {
                nums[i] = 0;
                i++;
            }
            while (i<(x+y))
            {
                nums[i] = 1;
                i++;
            }
            while (i<(x+y+z))
            {
                nums[i] = 2;
                i++;
            }
        }
};
*/
