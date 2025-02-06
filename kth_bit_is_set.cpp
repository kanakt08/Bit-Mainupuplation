//Write a program to check if the kth bit is set

#include<iostream>
using namespace std;

void iskthbit(int n,int k)
{
    if(n&(1<<k-1))
    {
        cout<<"Set";
    }
    else{
        cout<<"not set";
    }
}

int main()
{
    int n=11,k=2;

    iskthbit(n,k);

}
