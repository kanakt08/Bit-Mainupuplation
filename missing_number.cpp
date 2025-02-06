//Write a program to find the only odd occurring number

#include<iostream>
using namespace std;
int missing_number(int arr[],int n)
{
    int xor1=0,xor2=0;

    for(int i=0;i<n-1;i++)
    {
        xor2= xor2^ arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;
    return (xor1^xor2);
}
int main()
{
    int arr[]={1,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int res=missing_number(arr,n);

    cout<<res;
}
