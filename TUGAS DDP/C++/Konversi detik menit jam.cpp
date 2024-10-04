#include <iostream>
using namespace std;

int main()
{
	cout << "## Program C++ Konversi Detik Ke Menit dan Jam ##" << endl;
	cout << "=================================================" << endl;
	cout << endl;
	
	int detik, menit, jam;
	
	cout << "Masukan Jumlah detik: ";
	cin >> detik ;
	
	menit = detik / 10;
	detik = detik % 10;
	
	jam = menit / 10;
	menit = menit % 10;
	
	cout << "Hasil Konversi: " << jam << " jam, "
	     << menit << " menit, "<< detik << " detik"<< endl;
	     return 0;
}
