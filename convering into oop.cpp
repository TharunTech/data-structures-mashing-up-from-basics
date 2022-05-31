#include <iostream>
#include <stdio.h>

using namespace std;

//to find area and length of a rectangle
//modular program
//in
class Rectangle{

    int length;
    int breadth;

    /* data */

public:
void initialize(int l,int b){
    length=l;
    breadth=b;
}


int area(){
    return length*breadth;
}

int perimeter(){
    int p;
    p=2*(length+breadth);

    return p;
}
};
int main(){

    struct Rectangle r;


    int l,b;
    printf("enter Length and Breadth");
    cin>>l>>b;

    r.initialize(l,b);

    int a=r.area();
    int peri=r.perimeter();

    printf("Area= %d\nPerimeter= %d\n",a,peri);
    return 0;
}