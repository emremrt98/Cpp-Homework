#include <iostream>
using namespace std;

		// ODEV 2 - SORU 3 (ARMSTRONG SAYILARI)

int main()
{
	int yuzdelik, ondalik, birlik, sonuc;
	for (int i = 0; i < 1000; i++) {
		int kalan;
		yuzdelik = i / 100;
		ondalik = (i % 100) / 10;
		birlik = (i % 100) % 10;
		sonuc = (pow(yuzdelik, 3)) + (pow(ondalik, 3)) + (pow(birlik, 3));
		if (sonuc == i) {
			cout << i << " ";
		}
		
	}
	
}