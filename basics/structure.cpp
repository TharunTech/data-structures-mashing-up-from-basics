#include <iostream>
#include <stdio.h>

using namespace std;



struct Rectangle{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r;//declatrtion
    // struct Rectangle r={10,5};//declaration and initialziation
    r.length=15;
    r.breadth=10;//modify the data of a struct
    cout<<r.length*r.breadth;
}
