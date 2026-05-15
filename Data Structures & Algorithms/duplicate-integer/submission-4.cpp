class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        // Given an integer array: NUMS, if a (UNIQUE) value appears
        // more than once, return true, otherwise return false
        std::unordered_set<int> container(nums.begin(), nums.end());

        for (int i {}; i < nums.size(); i++)
        {
            if (nums.size() > container.size())
            {
                return true;
            }
        }
        return false;     
    }
};