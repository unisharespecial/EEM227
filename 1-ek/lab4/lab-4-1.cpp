#include <iostream>
#include <stack>
#include <iomanip>
#include <vector>
#include <conio.h>

using namespace std;
int main()
{
    int t,s;
    stack<int> c;
    
    cout<<"Taban degerini giriniz (2-16 ): ";
    cin>>t;
    
    cout<<"Tamsayi giriniz: ";
    cin>>s;
    cout<< endl;
    
    while(!(s/t==0))
    {
     c.push(s%t);
     s=s/t;
     if(s/t==0)
     c.push(s);
    }
    
    cout<< s << " sayisinin " << t << " tabanindaki karsiligi= " ;
    while(!c.empty())
    {
     cout<<c.top();
     c.pop();
    }
    
    getch();
    return 0;
}
