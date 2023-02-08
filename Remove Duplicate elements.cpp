class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=0, j=i+1;j<nums.size();i++,j++)
        {
            if(nums[i]!=nums[j])
            {
                nums[k++]=nums[j];
            }
        }
        return k;
    }
};
