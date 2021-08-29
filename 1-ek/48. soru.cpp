#include<iostream>
#include <conio.h>
using namespace std;
int sumTon(int);
    int main(){
    int n=10;
    
    sumTon(n);
    
    cout<<"n=1 den n=10 kadar toplami: "<<sumTon(n)<<endl;
    getch();
    return 0;
    }
    int sumTon(int n)
    {
    if(n==1)
    return 1;
    else 
    return sumTon(n-1)+n;
} 
