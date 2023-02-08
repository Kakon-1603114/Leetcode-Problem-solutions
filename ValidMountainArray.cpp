#Valid Mountain Array
#Given an array of integers arr, return true if and only if it is a valid mountain array.

#Recall that arr is a mountain array if and only if:

#arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
  arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
  arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
  
Solution:

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        int p;
        if(n<3) return false;
        int maxx=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>maxx)
            {
                maxx=arr[i];
                p=i; 
            }
        }
        if(p==0 || p==n-1) return false;
        
        for(int i=0,j=i+1;i<p;i++,j++)
        {
            if(arr[i]>=arr[j]) return false;
        }
        for(int i=p,j=i+1;j<n;i++,j++)
        {
            if(arr[i]<=arr[j]) return false;
        }
        
        return true;
        
    }
};
