#include <iostream>
#include <stdio.h>

using namespace std;


// void fun(int A[],int n)// can also be like void fun(int *A,int n)
// {

//     for(int i=0;i<n;i++)
//     cout<<A[i]<<endl;
// }


// int main(){

//     int A[]={2,4,5,5,12};
//     int n =5;

//     fun(A,n);
//     for(int x:A)
//     cout<<x<<" ";
// }

//creating a array inside a function and returing its address
int * fun(int size)
{
    int *p;
    p=new int[size];

    for(int i=0;i<size;i++)
    p[i]=i+1;

    return p;

}

int main()
{
    int *ptr,sz=5;

    ptr=fun(sz);

    for(int i=0;i<sz;i++)
    cout<<ptr[i]<<endl;

    return 0;

}