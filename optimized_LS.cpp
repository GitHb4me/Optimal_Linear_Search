#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> nums ={1,2,3,4,5,6,7,8,9};
 int mid= nums.size()/2; int f=nums.size(), j=mid, num=6;
        for(int i=0;i<f;i++)
        {
            if(nums[mid]== num){ cout<<"found at"<<mid; break;}
            mid--;
            if(nums[j]== num){ cout<<"found at"<<j; break;}
            j++;    
        }
return 0;
}