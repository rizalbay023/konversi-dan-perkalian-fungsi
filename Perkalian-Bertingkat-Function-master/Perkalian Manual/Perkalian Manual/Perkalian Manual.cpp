#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int panjangInt(int x)
{
	int panj = 0;
	while (x > 0)
	{
		x /= 10;
		panj++;
	}
	return panj;
}

int main()
{
	do
	{
		system("CLS");
		cout << "Perkalian Bertingkat" << endl << endl;
		system("pause");
		system("CLS");
		int bil1, bil2, pilihan2;
		cout << "Masukkan Bilangan 1 : ";
		cin >> bil1;
		cout << "Masukkan Bilangan 2 : ";
		cin >> bil2;
		int bilPeng, bilPengA;
		system("CLS");
		if (bil2 > bil1)
		{
			bilPeng = bil1;
			bilPengA = bil2;
		}
		else
		{
			bilPeng = bil2;
			bilPengA = bil1;
		}
		for (int i = 0; i < (panjangInt(bil2) - panjangInt(bil1)) + (panjangInt(bil1) - 1); i++)
		{
			cout << " ";
		}
		cout << bil1 << endl;
		for (int i = 0; i < (panjangInt(bil1) - panjangInt(bil2)) + (panjangInt(bil2) - 1); i++)
		{
			cout << " ";
		}
		cout << bil2 << endl;
		int panjangUnder = panjangInt(bil1) >= panjangInt(bil2) ? panjangInt(bil1) + (panjangInt(bil2) - 1) : panjangInt(bil2) + (panjangInt(bil1) - 1);
		for (int i = 0; i < panjangUnder; i++)
		{
			cout << "_";
		}
		cout << "x" << endl;
		string bilP = to_string(bilPeng);
		for (int i = panjangInt(bilPeng) - 1; i >= 0; i--)
		{
			int a = (int)bilP[i] - 48;
			int b = a * bilPengA;
			int kali = 1;
			for (int k = a == 0 ? -1 : 0; k < i; k++) cout << " ";
			cout << b << endl;
		}
		int panjangUnder1 = panjangInt(bil1) >= panjangInt(bil2) ? panjangInt(bil1) + (panjangInt(bil2) - 1) : panjangInt(bil2) + (panjangInt(bil1) - 1);
		for (int i = 0; i < panjangUnder1; i++)
		{
			cout << "_";
		}
		cout << "+" << endl;
		cout << bil1 * bil2;
		cout << endl << endl;
		system("pause");
		system("CLS");
		cout << "Keluar Program?" << endl;
		cout << "1. Ya \n2. Tidak" << endl << endl;
		cout << "Pilih: ";
		cin >> pilihan2;
		cout << endl;
		if (pilihan2 == 1)
		{
			break;
		}
		else if (pilihan2 == 2)
		{

		}
	} while (true);
}