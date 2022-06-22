class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> hm;
        
        for(int i = 0; i < nums.size(); i++){
            int search = target - nums[i];
            
            if(hm.find(search) == hm.end()){
                hm[nums[i]] = i;
            } else {
                ans.push_back(hm[search]);
                ans.push_back(i); 
            }
        }
        return ans;
    }
};