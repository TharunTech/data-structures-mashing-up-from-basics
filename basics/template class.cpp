#include <iostream>
#include <stdio.h>

using namespace std;

//to find area and length of a rectangle
//converting a class to a template class below is a normal class
// class Arithmetic{

// private:
//     int a;
//     int b;
// public:
//     Arithmetic(int a,int b);
//     int add();
//     int sub();

// };
//     Arithmetic::Arithmetic(int a,int b){//Arthmetic:: is used to say this function belongs to the class Arthmetic
//         this->a=a;//this->a refers to the a in class Arithmetic--"this" is the pointer to the current object in c++--
//         this->b=b;
//     }
//     int Arithmetic::add(){
//         int c;
//         c=a+b;
//         return c;
//     }
//     int Arithmetic::sub(){
//         int c;
//         c=a-b;
//         return c;
//     }



// int main(){
//     Arithmetic ar(10,5);
//     cout<<"add"<<ar.add()<<endl;
//     cout<<"sub "<<ar.sub()<<endl;

// }


//this is a template class
template<class T>
class Arithmetic{

private:
    T a;
    T b;
public:
    Arithmetic(T a,T b);
    T add();
    T sub();

};
    template<class T>
    Arithmetic<T>::Arithmetic(T a,T b){//Arthmetic:: is used to say this function belongs to the class Arthmetic
        this->a=a;//this->a refers to the a in class Arithmetic--"this" is the pointer to the current object in c++--
        this->b=b;
    }
    template<class T>
    T Arithmetic<T>::add(){//class name should take <T> to tell it as a template is being passed
        T c;
        c=a+b;
        return c;
    }
    template<class T>
    T Arithmetic<T>::sub(){
        T c;
        c=a-b;
        return c;
    }



int main(){
    Arithmetic <float> ar(10.1,5.8);
    cout<<"add"<<ar.add()<<endl;
    cout<<"sub "<<ar.sub()<<endl;
}
