class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i <= num.size(); i++) {
            int complement = target - num[i];

            if (mp.find(complement) != mp.end()) {
                return { mp[complement], i };
            }
            mp[num[i]] = i;
        }
        return {};
    }
};