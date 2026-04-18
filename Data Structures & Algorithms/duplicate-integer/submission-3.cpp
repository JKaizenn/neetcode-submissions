class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        std::unordered_set<int> set(nums.begin(), nums.end());

        if (nums.size() != set.size())
        {
            return true;
        }
        
        return false;
    }
};