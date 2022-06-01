#include <iostream>
#include <stdio.h>

using namespace std;

//to find area and length of a rectangle


int main(){

    int length=0,breadth=0;

    printf("enter Length and Breadth");
    cin>>length>>breadth;

    int area=length*breadth;
    int peri=2*(length+breadth);

    printf("Area= %d\nPerimeter= %d\n",area,peri);
    return 0;
}