//Write a program to check if a number is a power of two

#include<iostream>
using namespace std;
int power_of_two(int n)
{
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    if(count==1)
    {
        return count;
    }
}
int main()
{
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int res=power_of_two(n);

    if(res==1)
    {
        cout<<n<<" is the power of 2 : ";
    }
    else{
        cout<<n<<" is not the power of 2: ";
    }
}
