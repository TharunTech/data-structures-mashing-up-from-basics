#include <iostream>
#include <stdio.h>

using namespace std;



struct Rectangle{
    int length;
    int breadth;
};

int main()
{
    Rectangle *p; // struct Recatngle *p --for c--
    // p= (struct Rectangle*)malloc(sizeof(struct Rectangle));//for c
    p=new Rectangle;//for c++ to create in heep memory
    p->length=22;
    p->breadth=9;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;

}