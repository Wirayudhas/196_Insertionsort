#include <iostream>
using namespace std;

int arr[20];                    //membuat array dengan panjang data 20
int n;                          //membuat variabel inputan n

void input() {                  //prosedur input
	while (true)
	{
		cout << "Masukan jumlah data pada array: "; // Membuat inputan jumlah elemen Array
		cin >> n;                                   // Memanggil variabel n

		if (n <= 20) {                                  // Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 elemen. \n"; // Menapilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;                                   // Membbuat harak per baris program 
	cout << "====================" << endl;         // Membuat tampilan susunan data elemen Array
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++)                     // Menggunakan perulangan for untuk menyimpan
	{
		cout << "Data ke- " << (i + 1) << ": ";     // Memasukan atau menginputkan nilai data n
		cin >> arr[i];                              // Menyimpan nilai data n kedalam array arr
	}

}

void insertionsort() {                                  // Prosedur insertionsort

	int temp;                                       // Membuat variable data temporer atau penyimpan sementara
	int i, j;                                       // Membuat variable J sebagai penanda
