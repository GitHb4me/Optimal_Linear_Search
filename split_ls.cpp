#include<bits/stdc++.h>          // following method is valid only with no duplicate occuring elements
using namespace std;            // OR all elements in array must be distinct and unique
int main()
{
vector<auto> nums ={1,2,3,4,5,6,7,8,9};
 int mid= nums.size()/2; int j=mid,k=nums.size(); auto num=6;  // num is element to search for (Irrespective of data type)
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
/* in case of passing ----> {1,2,6,4,5,6,7,8,9}  you can remove "break" if want to see all duplicate occurings but after removing break it will have Big O(N) complexity 
still answer will be " at 5 " because 5th position is nearest from middle split as this search searches from middle of the array
*/
