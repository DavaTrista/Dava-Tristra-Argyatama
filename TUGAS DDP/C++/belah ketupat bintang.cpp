#include <iostream>

using namespace std;

int main ()
{
	cout << "## Program C++ Belah Ketupat Bintang ##" << endl;
	cout << "=======================================" << endl;
	cout << endl;
	
	int lebar_belah_ketupat,i,j,k;
	
	cout << "Input lebar belah ketupat : ";
	cin >> lebar_belah_ketupat;
	
	cout << endl;
	
	for(i=1;i<=lebar_belah_ketupat;i++) {
		
		for(j=1;j<=lebar_belah_ketupat-i;j++) {
				}
	    for(k=1;k<=i;k++) {
	    	cout << " ";
		}
		for(k=1;k<=lebar_belah_ketupat-i;k++) {
			cout << " *";
		}
		cout << endl;	
	}
	return 0;
}
