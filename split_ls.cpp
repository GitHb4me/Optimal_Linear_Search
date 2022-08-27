#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> nums ={1,6,3,4,5,6,7,8,9};
 int mid= nums.size()/2; int j=mid,k=nums.size(), num=6;  // num is number to search for
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]== num){cout<<"found at"<<i; break;}
            if(nums[mid]== num){ cout<<"found at"<<mid; break;}
            mid--;
            if(nums[j]== num){ cout<<"found at"<<j; break;}
            j++;   
            if(nums[k]==num){ cout<<"found at"<<k; break;} 
            k--;                  
        }
return 0;
}
/* in casse of passing ----> {1,2,6,4,5,6,7,8,9}  you can remove "break" if want to see all duplicate occurings 
still answer will be " at 5 " because 5th position is nearest from middle split as this search searches from middle of the array
*/
