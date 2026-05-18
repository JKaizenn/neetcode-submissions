class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int currentCount {};
        int maxCount {};

        for (int i {}; i < nums.size(); i++)
        {
                if (nums[i] == 1)
                {
                    currentCount++;
                    maxCount = max(maxCount, currentCount);
                }

                if(nums[i] == 0)
                {
                    currentCount = 0;
                }

        }

        return maxCount;
    }
};