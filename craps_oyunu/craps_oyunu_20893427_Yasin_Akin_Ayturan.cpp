//Yasin Ak�n Ayturan ~~ 20893427 ~~ Craps Oyunu
/*
Craps oyunu kasa ve oyuncu aras�nda oynan�r. Oyuncunun iki zar� atmas� ile oyun ba�lar.
ilk at��ta zarlar�n toplam� 7 veya 11 olursa oyuncu kazan�yor. 2, 3 veya 12 olursa kasa  kazan�r.
E�er oyuncunun att��� iki zar� toplam 4,5,6,8,9 olursa oyuncu zar atmaya devam eder. Hedefi gelen numaray� tutturmakt�r.
Ayn� toplam� bulana kadar pe� pe�e zar atar. Ayn� toplam� elde ederse kazan�r. At��lar� s�ras�nda 7 gelirse kasa kazan�r.
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
