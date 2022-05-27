#include <iostream>
#include <stdio.h>

using namespace std;

//TO print right angle triangle
int main()
{
//program1
// int n = 5;
// for(int i = 1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
//program2
// int n = 5;
// for(int i = 1;i<=n;i++){

//     for(int j=2*(n-i);j>=1;j--){
//         cout<<"-";
//         }
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

int n;
cin>>"enter size of array">>n;
int a[5];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    if(a[i]==1000){
        int temp;
        temp+=1000;
    }else{
        
    }
}
}