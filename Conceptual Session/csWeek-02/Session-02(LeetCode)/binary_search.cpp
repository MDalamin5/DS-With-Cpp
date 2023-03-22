#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int flag=-1;
        int low=0;
        int high= (int)nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                flag=mid;
                break;
            }
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            high=mid-1;

        }
        if(flag==-1)
        return -1;
        else
        return flag;
        
    }
};
int main()
{

    
    return 0;
}