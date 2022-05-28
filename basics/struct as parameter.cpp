#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// void fun(struct Rectangle rect)//call by value
// {
//     rect.length=22;
//     cout<<"Lenght"<<rect.length<<endl;
//     cout<<"Breadth"<<rect.breadth<<endl;
// }

// int main(){
//     struct Rectangle r={10,5};
//     fun(r);
//     printf("Length %d \nBreadth %d\n",r.length,r.breadth);
//     return 0;
    
// }

// void fun(struct Rectangle *rect)//call by reference
// {
//     rect->length=22;
//     cout<<"Lenght"<<rect->length<<endl;
//     cout<<"Breadth"<<rect->breadth<<endl;
// }

// int main(){
//     struct Rectangle r={10,5};
//     fun(&r);
//     printf("Length %d \nBreadth %d\n",r.length,r.breadth);
//     return 0;
    
// }

//struct in heep
struct Rectangle *fun()

{
    struct Rectangle *p;
    p=new Rectangle;//p=(struct Recatangle *)malloc(sizeof(struct Rectangle));--in c--

    p->length=15;
    p->breadth=7;

    return p;
}

int main(){
     
    struct Rectangle *ptr=fun();
    cout<<ptr->length<<endl<<ptr->breadth;
    return 0;
    
}