//Yasin Akýn Ayturan ~~ 20893427 ~~ Craps Oyunu
/*
Craps oyunu kasa ve oyuncu arasýnda oynanýr. Oyuncunun iki zarý atmasý ile oyun baþlar.
ilk atýþta zarlarýn toplamý 7 veya 11 olursa oyuncu kazanýyor. 2, 3 veya 12 olursa kasa  kazanýr.
Eðer oyuncunun attýðý iki zarý toplam 4,5,6,8,9 olursa oyuncu zar atmaya devam eder. Hedefi gelen numarayý tutturmaktýr.
Ayný toplamý bulana kadar peþ peþe zar atar. Ayný toplamý elde ederse kazanýr. Atýþlarý sýrasýnda 7 gelirse kasa kazanýr.
*/

#include <iostream>
#include <conio.h>
#include <time.h>
#include <d_random.h>

   int main()
   {
   randomNumber rastgele;
   int iAtis, sAtis;
   
   iAtis = ((1+rastgele.random(6))+(1+rastgele.random(6)));
   
   if(iAtis==2||iAtis==3||iAtis==12)
      cout<< "Ilk Atis " << iAtis << " Kasa Kazandi" << endl;
   else if(iAtis==7||iAtis==11)
      cout<< "Ilk Atis " << iAtis << " Oyuncu Kazandi" << endl;
   else {
      cout<< "gelen zar " << iAtis << " atis devam ediyor "<< endl;   
      do { 
         sAtis = ((1+rastgele.random(6))+(1+rastgele.random(6)));
         cout<< "Sonraki Atis " << sAtis << endl;   
      }while(sAtis!=7&&sAtis!=iAtis);
      if(sAtis==7) cout << "Kasa Kazandi " << endl;
      else cout << "Oyuncu Kazandi " << endl;
   }
   
   getch();
   return 0;
   }
