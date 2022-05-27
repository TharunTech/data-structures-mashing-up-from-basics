
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;





// int main{


// int a = 10;//data variaable
// int *p; //address variable
// p = &a;//stores the address of a --initialization of the pointer--
// printf("%d",*p);//output is the value of a
// printf("%d",p); //output is the address of a
// }




// int main()
// {
//     int a = 10;
//     int *p;
//     p = &a;
//     cout<<a<<endl;
//     printf("using pinter %d",*p);
//     return 0;

// }

//ponter to a array

// int main()
// {
//     int b[5] = {2,3,4,5,6};
//     int *p;
//     p = b;//or p = &b[0] --to access the address for a array--

//     for(int i = 0;i<5;i++){
//         cout<<p[i]<<endl;
//     }
//     return 0;
// }


//pointer to create a array in heep memory

int main()
{
    int *p;
    // p = (int *)malloc(5*sizeof(int)); --in c--
    p = new int[5];//in c++
    p[0]=10;p[1]=15;p[2]=14;p[3]=21;p[4]=31;

    for(int i = 0;i<5;i++){
        cout<<p[i]<<endl;
    }
    delete[]p;//in c++
    // free(p); --for dealocation of memory from heep --in c--
    return 0;
}