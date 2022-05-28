#include <iostream>
#include <stdio.h>

using namespace std;


int add(int a, int b)//formal parameters
{
    int c;
    c=a+b;

    return c;
}

int main(){

    int num1=10,num2=15,sum;//actual parameters

    sum = add(num1,num2);//function call


    cout<<sum<<endl;
    return 0;
}