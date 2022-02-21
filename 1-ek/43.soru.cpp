#include <iostream>
#include <time.h>
#include <conio.h>
#include <d_random.h>

template <typename T>
void SecmeliSiralama(T arr[],T boy)
{
     T EKDEindeksi;
     T i,j,temp;
     for(i=0;i<boy-1;i++)
     {
          EKDEindeksi=i;
          for(j=i+1;j<boy;j++)
           if(arr[EKDEindeksi]>arr[j])
             EKDEindeksi=j;
     if(EKDEindeksi !=i)
        {
                    temp=arr[i];
                    arr[i]=arr[EKDEindeksi];
                    arr[EKDEindeksi]=temp;}
        }
}
                    

int main()
{
    randomNumber sayi;
    int array[10];
    int i ,j, deger;
    
    for(i=0;i<10;i++)
    {
       deger=(sayi.random(999));
       array[i]=deger;
    }
    
       cout<<"1. dizi nin hali"<<endl<<endl;
     for(i=0;i<10;i++)
    {
       cout<<array[i]<<endl;
    } 
    
    SecmeliSiralama(array,10);
       cout<<"2. dizi"<<endl<<endl;
    for(j=0;j<10;j++)
    {
       cout<<array[j]<<endl;
    }              
       getch();
       return 0;
}
