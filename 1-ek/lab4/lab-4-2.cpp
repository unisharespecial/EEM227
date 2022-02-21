#include<iostream>
#include<vector>
#include<stack>
#include "d_random.h"

using namespace std;
int main()
{
    int b;
    
    randomNumber rnd;
    stack<int> s,t;
    
    for(int i=0;i<15;i++)
            s.push(rnd.random(100));
            
    stack<int> c=s;
    
    cout << "dizi: " ;       
    while(!c.empty()){
     cout << c.top() << " " ;
     c.pop(); 
     }
     cout<<" "<< endl;
     
    cout<<"cikarmak istediginiz elemani giriniz:";
    cin>>b;
    
     while(!s.empty()){
     if(s.top() == b){
     s.pop(); 
          }
          else {
          t.push(s.top());
          s.pop(); 
          }
     }
     
    cout << "istenilen deger cikarilan dizi: " ;
     while(!t.empty()){
            cout << t.top() << " " ;
            t.pop(); 
     }
     cout<<" "<< endl;
    
    system("pause");
    return 0;
}

      
            
