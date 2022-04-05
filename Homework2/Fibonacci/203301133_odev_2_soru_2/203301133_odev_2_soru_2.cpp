#include <iostream>
using namespace std;

                // ÖDEV 2 - SORU 2 (FIBONACCI SAYILARI)
int main()
{   
    int a = 1, b, i = 1;
    while (a <= 30 || b <= 30) {    // Þartý 30 dan küçük olduklarý sürece çalýþmaya ayarladým.
        cout << a << " " << i << " ";
        b = i + a;  // Her bir döngüde toplamlarýný tutacak ek bir deðiþken oluþturdum
        a = b;  // Bu toplamdan çýkan deðeri a ya atayarak ekrana dönecek deðerin artýk bir fibonacci oluþmasýný saðladý
        i += a; 
    }
}

