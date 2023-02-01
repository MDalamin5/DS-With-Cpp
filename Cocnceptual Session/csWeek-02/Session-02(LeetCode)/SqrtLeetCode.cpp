#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        
        
       long long int low=1;
       long long int high=x;
       long int ans;
        while(low<=high)
        {
            long long int mid=low+(high-low)/2;
            if(mid*mid<=x)
            {
                ans=mid;
                low=mid+1;
            }
            else if(mid*mid>x)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;

    }
};
int main()
{
    
    return 0;
}