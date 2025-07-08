class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        bool flag = false;
        for (int i=0; i<n-2; i++){
            int j = i+1;
            int k = i+2;
            if ( (nums[i] < nums[k]) &&
            (nums[i] < nums[j]) && 
            (nums[j] > nums[k])){
                flag = true;
            }
        }
        return flag;
    }
};