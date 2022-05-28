#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int a=10;
    int &r=a;//reference variable--we must initialized at the time only--

    //we cannot change the reference to another variable
    r=40;//when u change r , a also changes
    cout<<a<<endl<<r;
    
    return 0;
}