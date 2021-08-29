#include<iostream>
#include<vector>
#include "d_random.h"
using namespace std;
template<typename T>
void writeVector(vector<T>&Va)
{
     for(int i=0;i<Va.size();i++)
     cout<<" "<<Va[i];
}

template <typename T>
void writeVector(vector<T>&Va)
{
    for(int i=0;i<Va.size();i++){
    if(va[i] != -1)
    cout <<" "<< va[i];
    
    }            
}

int main()
{
    int a[]={ };
    int b;
    randomNumber rnd;
    cout<<"Kac elemanli olacagini giriniz:";
    cin>>b;
    for(int i=0;i<b;i++)
            a[i]=rnd.random(9);
    vector<int>V(a,a+b);
    writeVector(V);
    cout<<"\n";
    
    writeVector2(V);
    system("pause");
    return 0;
}

      
            
