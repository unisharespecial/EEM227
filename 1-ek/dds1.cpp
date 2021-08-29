#include<iostream>
#include<vector>
#include <conio.h>
#include "d_random.h"
using namespace std;
template<typename T>
void writeVector(vector<T>&Vv1){
     for(int i=0;i<Vv1.size();i++)
     cout<<" "<<Vv1[i];
}

     
template <typename T>
void writeVector2(vector<T>&Vv1){

    for(int i=0;i<Vv1.size();i++){
    if(Vv1[i] != -1)
    cout <<" "<< Vv1[i];
    
    }            
}     

   
int main()
{
    int v1[]={ };
    int uzunluk;
    int i,j;
    randomNumber rnd;
    
    cout << "kac adet deger girilsin" << endl;
    cin >> uzunluk;
    cout << endl << endl;


    for(i=0;i<uzunluk;i++) 
    v1[i]=rnd.random(9);

    vector<int>V(v1,v1+uzunluk);
    writeVector(V);
    cout << endl;
    
  for(i=1;i<V.size();i++) {
  for(j=0;j<V.size()-i;j++) {
      if(V[j]==V[i+j]){
      V[i+j]=-1;
      }
  } 
  } 
  
    writeVector2(V);
    cout << endl;

     
    getch();   
    return 0;
}
   
            
