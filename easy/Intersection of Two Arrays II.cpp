class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> map;
        vector<int> nums3;
        for(int i=0;i<nums1.size();i++)
        {
            map[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(map[nums2[i]]!=0)
            {
                map[nums2[i]]--;
                nums3.push_back(nums2[i]);
            }
            
        }
        return nums3;
    }
};