class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int res {}, cnt {};
        for (int num : nums)
        {
            cnt = num ? cnt + 1 : 0;
            res = max(res, cnt);
        }
        return res;
    }
};