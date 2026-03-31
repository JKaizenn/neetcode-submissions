class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        // Brute Force (O n^2) Space Complexity: 
        for (int i {}; i < nums.size(); i++)
        {
            for (int j {i + 1}; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};