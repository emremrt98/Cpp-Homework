#include <iostream>
using namespace std;

            // �DEV 2 - 1.SORU (HESAP MAK�NES�)
int main()
{
    double sonuc = 0;

    while(1) {
  
        int islem;
        double sayi1, sayi2;  // Kullan�c�n�n ondal�kl� say� girme ihtimaline kar��l�k double kulland�m.
        cout << "1-)Toplama Islemi\n2-)Cikarma Islemi\n3-)Carpma Islemi\n4-)Bolme Islemi" << endl;   // Kullan�c�ya tercihlerini sundum.
        cout << "Islemi Giriniz : "; cin >> islem;

        if ((islem <= 0) || (islem > 4))    // �ncelikle sunulan aral�klar aras�nda giri� yap�p yapmad���n� sorgulad�m.
            cout << "Yanlis Islem Girdiniz. Programi Yeniden Baslatiniz\a"; // E�er girmediyse gerekli bilgiyi verip program� sonland�rd�m.
        else {
            cout << "Sayi1 : "; cin >> sayi1;   // else durumunda gerekli tercihi yapm�� olup art�k girmek istedi�i say�lar� soruyorum.
            cout << "Sayi2 : "; cin >> sayi2;
            switch (islem)
            {
            case 1:
                sonuc = sayi1 + sayi2;
                cout << sayi1 << " + " << sayi2 << " = " << sonuc << endl;    // toplama
                break;
            case 2:
                sonuc = sayi1 - sayi2;
                cout << sayi1 << " - " << sayi2 << " = " << sonuc << endl;     // ��karma
                break;
            case 3:
                sonuc = sayi1 * sayi2;
                cout << sayi1 << " * " << sayi2 << " = " << sonuc << endl;     // �arpma
                break;
            case 4:
                if (sayi2 == 0) {
                   cout << "Tanimsiz" << endl;     // b�lme
                   break;
                }
                sonuc = sayi1 / sayi2;
                cout << sayi1 << " / " << sayi2 << " = " << sonuc << endl;     // b�lme
                break;
            }
        }
    }

                
            
    return 0;
}




