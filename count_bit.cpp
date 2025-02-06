//Write a program to count set bits

#include<iostream>
using namespace std;

int count_bit(int n)
{
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    cout<<"total set bits in "<<n <<" is : "<<count_bit(n);
}
