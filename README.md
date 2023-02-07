# Leetcode-Problem-solutions

Problem: 7 Reverse a string (medium)
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Approach:
1. We have first give the absolute value of x to the function for reversing the number.
2. After reversing the number we have to multiply (-1) with the reversed number if the number was negative.
3. And finally, we have to check if the reversed number is greater than INT_MAX or lower than INT_MIN.
