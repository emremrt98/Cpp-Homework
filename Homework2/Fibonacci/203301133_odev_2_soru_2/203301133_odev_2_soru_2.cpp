#include <iostream>
using namespace std;

                // �DEV 2 - SORU 2 (FIBONACCI SAYILARI)
int main()
{   
    int a = 1, b, i = 1;
    while (a <= 30 || b <= 30) {    // �art� 30 dan k���k olduklar� s�rece �al��maya ayarlad�m.
        cout << a << " " << i << " ";
        b = i + a;  // Her bir d�ng�de toplamlar�n� tutacak ek bir de�i�ken olu�turdum
        a = b;  // Bu toplamdan ��kan de�eri a ya atayarak ekrana d�necek de�erin art�k bir fibonacci olu�mas�n� sa�lad�
        i += a; 
    }
}

