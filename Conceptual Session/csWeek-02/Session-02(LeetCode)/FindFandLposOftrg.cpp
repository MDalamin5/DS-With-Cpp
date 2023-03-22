#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=(int)nums.size();
        int low=0;
        int high=n-1;
        int l,r;
        vector<int>ans;
        int first_index=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                first_index=mid;
                high=mid-1;
            }
           else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            high=mid-1;
        }

        int last_index=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                last_index=mid;
                low=mid+1;
            }
           else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            high=mid-1;
        }
       
        ans.push_back(first_index);
        ans.push_back(last_index);
        return ans;
    }
};

int main()
{

    return 0;
}