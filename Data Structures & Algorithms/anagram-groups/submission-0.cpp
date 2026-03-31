class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        std::unordered_map<std::string, vector<std::string>> map;
        std::vector<vector<string>> result;

        for (int i {}; i < strs.size(); i++)
        {
            std::string word = strs[i];
            std::sort(word.begin(), word.end());
            map[word].push_back(strs[i]);
        }
        
        for (auto & pair : map)
        {
            result.push_back(pair.second);
        }

        return result;
    }
};
