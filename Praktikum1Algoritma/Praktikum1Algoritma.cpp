#include <iostream>
using namespace std;

int a[20];                           // Deklarasi array a dengan ukuran 20
int n;                               // Deklarasi Variabel n untuk menyimpan banyaknya elemen array

void input() {                       // Procedur untuk input
	while (true) {                   // Looping
		cout << "Masukan banyaknya elemen pada array : ";  // Output ke layar
		cin >> n;                    // Input dari pengguna
		if (n <= 20)                 // jika n kurang dari atau sama dengan 20
			break;                   // keluar dari loop
		else {                       // jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";   // Output ke layar

		}
	}
	cout << endl;                              // Output baris kosong
	cout << "====================" << endl;    // Output ke layar
	cout << "Masukan Elemen Array" << endl;    // Output ke layar
	cout << "====================" << endl;    // Output ke layar

	for (int i = 0; i < n; i++) {              // looping dengan 1 dimulai dari 0 hingga n-1
		cout << "Data Ke-" << (i + 1) << "; ";    // Output ke layar
		cin >> a[i];                              // input dari pengguna

	}
}
