class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int n = nums.size();
        std::vector<int> ans(n * 2);

        for(int i {}; i < nums.size(); i++)
        {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }
        return ans;  
    }
};