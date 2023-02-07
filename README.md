# Leetcode-Problem-solutions

Problem: 7 Reverse a string (medium)
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Approach:
1. We have first give the absolute value of x to the function for reversing the number.
2. After reversing the number we have to multiply (-1) with the reversed number if the number was negative.
3. And finally, we have to check if the reversed number is greater than INT_MAX or lower than INT_MIN.

Solution in C++:
class Solution {
public:
    int reverse(int x) {
        int n = abs(x);
        long  revx=0;
        while(n!=0)
        {
           int ld=n%10;
            n=n/10;
            revx=revx*10+ld;
        }
        if(x<0)
            revx=revx*(-1);
        if(revx> INT_MAX || revx<INT_MIN) 
            return 0;
        return revx;
        
    }
};



Problem: 167. Two Sum II - Input Array Is Sorted
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Approach: We solve this problem using two pointers. Left pointer L and right pointer R.
1. L=0 and R=nums.size()-1
2. if sum is less than target then increase L by 1
3. if sum is greater than target then decrease R by 1
4. when sum==target, return the index of L and R.

C++ solutions:

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int n = numbers.size();
        int L=0, R=n-1;
       while(L<R)
        {
            if(numbers[L]+numbers[R]==target)
            {
                v.push_back(L+1);
                v.push_back(R+1);
                return v;
            }
            if(numbers[L]+numbers[R]<target)
                L++;
            if(numbers[L]+numbers[R]>target) 
                R--;
        }
        return v;
    }

};
