#include <iostream>
#include <sstream>

using namespace std;


string tentukanKategori(int nilai){
	string kategori;

	if(nilai >= 90 && nilai <= 100){
		kategori = "A";
	}
	else if(nilai >= 80 && nilai < 90){
		kategori = "B";
	}
	else if(nilai >= 70 && nilai < 80){
		kategori = "C";
	}
	else if(nilai >= 60 && nilai < 70){
		kategori = "D";
	}
	else if(nilai >= 50 && nilai < 60){
		kategori = "E";
	}
	else if(nilai < 50){
		kategori = "Tidak Lulus";
	}

	return kategori;
}

int main(int argc, char *argv[])
{
	string eq = "========================";
	const int arr_length = 5;
	int max_value = 0;
	string ex_name;
	string arr[arr_length][2];

	for(int i = 0; i <= arr_length - 1; i++){
		cout << "nilai ke-" << i + 1 << endl;
		cout << eq << endl;
		cout << "masukan nama : ";
		getline(cin >> std::ws,  *(*(arr+i+0)));
		cout << "masukan nilai : ";
		cin >> *(*(arr+i)+1);
		cout<<endl;
	}


    cout << endl << "Kategorisasi Nilai" << endl << eq << endl << endl;

	for(int p = 0; p <= arr_length-1; p++){
		string nama = *(*(arr+p)+0);
		string nilai = *(*(arr+p)+1);
		string kategori = tentukanKategori(stoi(nilai));
		cout
		<<endl
		<<endl
		<< eq
		<< endl
		<< "Nama : " << nama
		<< endl
		<< "Nilai : " << nilai
		<< endl
		<< "Kategori Nilai : " << kategori
		<< endl;
		if(stoi(nilai) > max_value){
		max_value = stoi(nilai);
		ex_name = nama;
		}
	}

	cout
	<< endl
	<< eq
	<< endl
	<< "Nilai Tertinggi : " << max_value
	<< endl
	<< "Pemilik : " << ex_name
	<< endl
	<< eq
	<< endl;


return 0;
}
