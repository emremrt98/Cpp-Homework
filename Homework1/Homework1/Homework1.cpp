#include <iostream>
using namespace std;    // sürekli std kullanmak istemediðim için kullanýmýný gerçekleþtirdim.


int main()
{
    int islem;
    double sayi1, sayi2, sonuc; // Kullanýcýnýn ondalýklý sayý girme ihtimaline karþýlýk double kullandým.
    cout << "1-)Toplama Islemi\n2-)Cikarma Islemi\n3-)Carpma Islemi\n4-)Bolme Islemi"<< endl;   // Kullanýcýya tercihlerini sundum.
    cout << "Islemi Giriniz : "; cin >> islem;

    if ((islem <= 0) || (islem > 4))    // Öncelikle sunulan aralýklar arasýnda giriþ yapýp yapmadýðýný sorguladým.
        cout << "Yanlis Islem Girdiniz. Programi Yeniden Baslatiniz\a"; // Eðer girmediyse gerekli bilgiyi verip programý sonlandýrdým.
    else {
        cout << "Sayi1 : "; cin >> sayi1;   // else durumunda gerekli tercihi yapmýþ olup artýk girmek istediði sayýlarý soruyorum.
        cout << "Sayi2 : "; cin >> sayi2;
        switch (islem)
        {
        case 1:
            sonuc = sayi1 + sayi2;
            cout << sayi1 << " + " << sayi2 << " = " << sonuc;    // toplama
            break;
        case 2:
            sonuc = sayi1 - sayi2;
            cout << sayi1 << " - " << sayi2 << " = " << sonuc;     // çýkarma
            break;
        case 3:
            sonuc = sayi1 * sayi2;
            cout << sayi1 << " * " << sayi2 << " = " << sonuc;     // çarpma
            break;
        case 4:
            sonuc = sayi1 / sayi2;
            cout << sayi1 << " / " << sayi2 << " = " << sonuc;     // bölme
            break;
        }
    }

    


}


