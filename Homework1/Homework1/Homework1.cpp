#include <iostream>
using namespace std;    // s�rekli std kullanmak istemedi�im i�in kullan�m�n� ger�ekle�tirdim.


int main()
{
    int islem;
    double sayi1, sayi2, sonuc; // Kullan�c�n�n ondal�kl� say� girme ihtimaline kar��l�k double kulland�m.
    cout << "1-)Toplama Islemi\n2-)Cikarma Islemi\n3-)Carpma Islemi\n4-)Bolme Islemi"<< endl;   // Kullan�c�ya tercihlerini sundum.
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
            cout << sayi1 << " + " << sayi2 << " = " << sonuc;    // toplama
            break;
        case 2:
            sonuc = sayi1 - sayi2;
            cout << sayi1 << " - " << sayi2 << " = " << sonuc;     // ��karma
            break;
        case 3:
            sonuc = sayi1 * sayi2;
            cout << sayi1 << " * " << sayi2 << " = " << sonuc;     // �arpma
            break;
        case 4:
            sonuc = sayi1 / sayi2;
            cout << sayi1 << " / " << sayi2 << " = " << sonuc;     // b�lme
            break;
        }
    }

    


}


