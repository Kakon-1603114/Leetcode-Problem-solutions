#Given an array of integers nums, sort the array in ascending order and return it.

#You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

 #My code using a min heap:

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        
        for(int i=0;i<nums.size();i++)
        {
            int t=pq.top();
            ans.push_back(t);
            pq.pop();
        }
        return ans;
        
    }
};
