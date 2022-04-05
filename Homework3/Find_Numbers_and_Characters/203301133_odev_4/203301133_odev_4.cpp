#include <iostream>

using namespace std;

void toplamHarfRakamSayisi(char harfDizisi[5][60]);		// Fonksiyonu Tan�mlad�m. ��eri�ini main alt�nda yazaca��m.

	// Dizilerin her birinden ayr� ayr� harf ve rakam say�s� istendi�i i�in ayr� ayr� fonksiyon yazmak yerine 
    // tek fonksiyon alt�nda s�tun de�erleri g�nderdim.

void dizi(char harfDizisi[5][60], int sutun);

int main() {

							// Her biri 60 karakterden olu�an 5 adet iki boyutlu dizi tan�mlad�m.
	char harfDizisi[5][60] = { {"����322dA@@kyUMGyy3t5u7UMEy~{yyEC�}{y6(y6(y6(y4ty67"},{"6(y6(y6(y6(y6(y6(y6(3y6(3y6(3yEk�}|y1#+y15dff67fgg3ddd)=?"},
		{"#+y1#+y1#+y1#+y1#+y1#+y1#+y1#+y1#+y1#+y1#&&%(JK33Y)("},{"+yrmjyJIHkGFFk|zxy.y-y-njfy5'y0\"y,y + 37y + 33cuy[}s43"},
		{"7y+37y+37yy+37y+y+ykgc#+y1#+y6(6(3yE37y-65/gt46&"}};
	dizi(harfDizisi, 0);
	dizi(harfDizisi, 1);
	dizi(harfDizisi, 2);
	dizi(harfDizisi, 3);
	dizi(harfDizisi, 4);
	toplamHarfRakamSayisi(harfDizisi);
	return 0;

}

void toplamHarfRakamSayisi(char harfDizisi[5][60]) {
	int rakamSayisi = 0, harfSayisi = 0, toplam = 0; // toplam rakam ve harf say�s�n� tutacak olan de�i�kenleri olu�turup ilk de�er olarak 0 atad�m.
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 60; j++) {
			if (harfDizisi[i][j] >= 48 && harfDizisi[i][j] <= 57)	// ASCII Tablosuna g�re bu aral�ktaysa bir say�d�r.
				rakamSayisi++;
			else if ((harfDizisi[i][j] >= 32 && harfDizisi[i][j] <= 47) || (harfDizisi[i][j] >= 58 && harfDizisi[i][j] <= 255))	// ya da harftir
				harfSayisi++;
		}
	}
	cout << "Toplam Rakam Sayisi : " << rakamSayisi <<endl;
	cout << "Toplam Harf Sayisi : " << harfSayisi << endl;
	toplam = rakamSayisi + harfSayisi;
	cout << "Toplam Rakam ve Harf Sayisi : " << toplam << endl;
}


void dizi(char harfDizisi[5][60], int sutun) {
	int rakamSayisi = 0, harfSayisi = 0;

	for (int i = sutun; i < sutun+1; i++) {
		for (int j = 0; j < 60; j++) {
			if (harfDizisi[i][j] >= 48 && harfDizisi[i][j] <= 57)	// ASCII Tablosuna g�re bu aral�ktaysa bir say�d�r.
				rakamSayisi++;
			else if ((harfDizisi[i][j] >= 32 && harfDizisi[i][j] <= 47) || (harfDizisi[i][j] >= 58 && harfDizisi[i][j] <= 255))	// ya da harftir
				harfSayisi++;
		}
	}
	cout << sutun+1 <<  ".Dizinin Toplam Rakam Sayisi : " << rakamSayisi << endl;
	cout << sutun+1 << ".Dizinin Toplam Harf Sayisi : " << harfSayisi << endl;

}

