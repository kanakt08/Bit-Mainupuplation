//Write a program to count the number of bits to be flipped to convert A to B

#include<iostream>
using namespace std;
int count_bit(int n)
{
    int count_b=0;

    while(n>0)
    {
        count_b++;
        n&=(n-1);
    }
    return count_b;
}

int flipped_count(int n1,int n2)
{
    return count_bit(n1^n2);
}

int main()
{
    int n1,n2;
    cout<<"enter the value of n1 and n2 : ";
    cin>>n1>>n2;

    int res=flipped_count(n1,n2);
    cout<<res;
}
