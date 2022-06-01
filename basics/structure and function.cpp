#include <iostream>
#include <stdio.h>

using namespace std;

//to find area and length of a rectangle
//modular program

struct Rectangle{

    int length;
    int breadth;

    /* data */
};

void initialize(struct Rectangle *r,int l,int b){
    r->length=l;
    r->breadth=b;
}


int area(struct Rectangle r){
    return r.length*r.breadth;
}

int perimeter(struct Rectangle r){
    int p;
    p=2*(r.length+r.breadth);

    return p;
}

int main(){

    struct Rectangle r={0,0};


    int l,b;
    printf("enter Length and Breadth");
    cin>>l>>b;

    initialize(&r,l,b);

    int a = area(r);
    int peri=perimeter(r);

    printf("Area= %d\nPerimeter= %d\n",a,peri);
    return 0;
}