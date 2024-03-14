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

	for (i = 1; i <= n - 1; i++) {                  // 1. Looping ddengan i dimulai dari 1 hingga n-1

		temp = arr[i];                              // 2. Simpan nilai arr[i] ke variabel sementara temporari

		j = i - 1;                                  // 3. setting naili j sama dengan i-1

		while (j >= 0 && arr[j] > temp)             // 4. Looping whilevdimana nilai j lebih besar sama dengan 0 dan 
		{                                           //arr[j] lebih besar daripada temp
			arr[j + 1] = arr[j];                    // 4a. simpan arr[j] ke dalam variabel arr[j]
			j--;                                    // 4b. Decrement nilai j by 1
		}

		arr[j + 1] = temp;                              // 5. simpan nilai temp ke dalam arr[j+1]

		cout << "\nPass " << i << ": ";                 // Output ke layar
		for (int k = 0; k < n; k++)                     // Looping nilai k dimulai dari 0 hingga n-1
		{
			cout << arr[k] << " ";                       // Output ke layar
		}
	}
}

void display() {                                                // Prosedur display
	cout << endl;                                           // Output baris kosong
	cout << "\n==============================" << endl;     // Output ke layar
	cout << "Elemen Array yang telah tersusun" << endl;     // Output ke layar
	cout << "================================" << endl;     // Otput ke layar

	for (int j = 0; j < n; j++) {                           // Looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;                             // Output ke layar
	}
	cout << endl;                                           // Output baris kosong
}
