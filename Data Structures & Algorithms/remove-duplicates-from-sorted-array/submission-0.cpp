class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        std::set<int> set(nums.begin(), nums.end());
        int k {0};

        for (int num : set)
        {
            nums[k++] = num;
        }
        return set.size();
        
    }
};