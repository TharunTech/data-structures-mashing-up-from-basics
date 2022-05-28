#include <iostream>
#include <stdio.h>

using namespace std;
// //call by value
// int add(int a, int b)//formal parameters
// {
//     a++;
//     cout<<a<<endl;


//     return 0;
// }

// int main(){

//     int num1=10,num2=15,sum;//actual parameters

//     sum = add(num1,num2);//function call

//     cout<<num1;
//     return 0;
// }

//call by address
// void swap(int *x, int *y)//formal parameters
// {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int main(){

//     int num1=10,num2=15;//actual parameters

//     swap(&num1,&num2);

//     cout<<"no1 :"<<num1<<endl;
//     cout<<"no2 :"<<num2<<endl;
//     return 0;
// }

//call by address
void swap(int &x, int &y)//formal parameters
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){

    int num1=10,num2=15;//actual parameters

    swap(num1,num2);

    cout<<"no1 :"<<num1<<endl;
    cout<<"no2 :"<<num2<<endl;
    return 0;
}