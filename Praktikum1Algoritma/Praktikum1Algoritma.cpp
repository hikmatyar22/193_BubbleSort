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

void display() {                                // Prosedur untuk menampilkan hasil
	cout << endl;                              // Output baris kosong
	cout << "================================" << endl;    // Output ke layar
	cout << "Elemen Array yang telah tersusun" << endl;    // Output ke layar
	cout << "================================" << endl;    // Output ke layar
	for (int j = 0; j < n; j++) {                // looping dengan j dimulai dari 0 hingga n-1
		cout << "Data Ke-" << j + 1 << ": ";
		cout << a[j] << endl;                    // Output ke layar
	}
	cout << endl;                                // Output Baris kosong
}

void bubbleSortArray() {                         // Prosedur untuk mengurutkan array dengan metode bubble sort
	int pass = 1;                                // step 1

	for (pass; pass <= n - 1; pass++) {        // looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j <= n - 1 - pass; j++) {  // looping dengan j dimulai dari 0 hingga n-1
			if (a[j] > a[j + 1]) {                // jika nilai pada a[j] lebih besar dari a[j + 1]
				int temp = a[j];                  // simpan nilai a[j] ke variabel semntara temp
				a[j] = a[j + 1];                  // Asssign nilai a[j + 1] ke a [j]
				a[j + 1] = temp;                  // Asssign nilai temp ke a[j + 1]
			}
		}
	}
}

