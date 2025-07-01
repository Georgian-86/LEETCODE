class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap; // stores number and its index

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (hashMap.find(complement) != hashMap.end()) {
                return {hashMap[complement], i};
            }
            hashMap[nums[i]] = i;
        }

        return {}; // In case no solution is found (though problem guarantees one)
    }
};
