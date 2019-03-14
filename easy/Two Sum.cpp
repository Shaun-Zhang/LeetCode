class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> indices;
        for(int i=0;i<nums.size();i++)
        { 
            map<int,int>::iterator iter = indices.find(nums[i]);
            if(iter==indices.end())
            {
                indices[target-nums[i]]=i;
            }
            else
            {
                vector<int> res = {indices[nums[i]],i};
                return res;
            }
        }
    }
};