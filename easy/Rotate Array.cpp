class Solution {
public: 
    void reverse(vector<int>& nums, int m,int n)
    {
        for(int i=0;i<(n-m)/2;i++)
        {
            int tmp = nums[m+i];
            nums[m+i] = nums[n-i-1];
            nums[n-i-1] = tmp;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums,0,nums.size());
        reverse(nums,0,k);
        reverse (nums,k,nums.size());
    }
};