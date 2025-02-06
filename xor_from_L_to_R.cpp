//Write a program to find the XOR of numbers from L to R

/* navie approach :

  initialize answer as zero,traverse all number from L to R and perform XOR
  of the numbers one by ine with the answer.
  This would take O(N) time.

*/


#include<iostream>
using namespace std;
int find_xor(int l,int r)
{
    int ans=0;
    for(int i=l;i<=r;i++)
    {
        ans=ans^i;
    }
    return ans;
}

int main()
{
    int l=4,r=8;

    int res =find_xor(l,r);
    cout<<res;
}
