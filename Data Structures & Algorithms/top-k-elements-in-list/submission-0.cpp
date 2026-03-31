class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        // Create a map to store the pairs of val and most frequent
        std::unordered_map<int,int> map;

        // Max priority queue
        std::priority_queue<std::pair<int,int>> maxPq;

        // Result Vector
        std::vector<int> result;


        for (int num : nums)
        {
            map[num]++;
        }

        for (auto const& [freq, val] : map)
        {
            maxPq.push({val,freq});
        }

        for (int i {}; i < k; i++)
        {
            result.push_back(maxPq.top().second);
            maxPq.pop();
        }

        return result;
    }
};
