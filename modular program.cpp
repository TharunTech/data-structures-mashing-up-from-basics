#include <iostream>
#include <stdio.h>

using namespace std;

//to find area and length of a rectangle
//modular program


int area(int l,int b){
    return l*b;
}

int perimeter(int l,int b){
    int p;
    p=2*(l+b);

    return p;
}

int main(){

    int length=0,breadth=0;

    printf("enter Length and Breadth");
    cin>>length>>breadth;

    int a = area(length,breadth);
    int peri=perimeter(length,breadth);

    printf("Area= %d\nPerimeter= %d\n",area,peri);
    return 0;
}