#include<iostream>
#include <conio.h>
using namespace std;
int sumDigits(int);
int main()
{
    int i,a[3]={23,1234,90513};
    for(i=0;i<3;i++)
    cout<<a[i]<<" sayisinin basamaklarinin toplami= "<<sumDigits(a[i])<<endl<<endl;
    getch();
    return 0;
}
int sumDigits(int x)
{
    if(x/10==0)
    return x;
    if(x/10!=0)
    return sumDigits(x/10)+x%10;
}    
