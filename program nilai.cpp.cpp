#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim, pilihan; 
    int nilai1, nilai2, nilai3, nilai4;
 
 while (true){
 
    
    cout << "\n masukkan nama kamu : " ;
    cin >> nama;
    cout << " masukkan nim kamu : "  ;
    cin >> nim; 

	if (nim.length() !=10){
		cout << " nim harus 10 digit"  << endl ;
		cout << " silahkan masukkan ulang dari awal " << endl << endl;
		continue;
}
	
		


    cout << "\n masukkan nilai pertemuan pertama : ";
    cin >> nilai1;

    cout << " masukkan nilai pertemuan kedua : ";
	cin >> nilai2;

    cout << " masukkan nilai pertemuan ketiga : ";
	cin >> nilai3;

    cout << " masukkan nilai pertemuan keempat : " ;
	cin >> nilai4;

    double rata = ( nilai1 + nilai2 + nilai3 + nilai4) /4.0;
   /* cout << rata;*/
    
    if (rata > 100) {
    	cout << " Tidak ada nilai yang lebih dari 100";
	}
    
    else if (rata >= 85 ) {
		cout << "\n nilai kamu : " << rata <<  " Predikat nilai kamu A ";
	}
    
    else if (rata >= 55 ) {
    	cout << "\n nilai kamu : " << rata <<  " Predikat nilai kamu B ";
	}
    
    else if (rata >= 25 ) {
    	cout << "\n nilai kamu : " << rata <<  " Predikat nilai kamu C ";
	}
    
    else if (rata >=  5 ) {
    	cout << "\n nilai kamu : " << rata <<  " Predikat nilai kamu D " ;
	}
    
   
    
    else { 
		cout << " sintaks ERROR";
	}
    
    
    cout << "\n\n\n apakah anda mau mengecek nya lagi? pilih Y atau N :  ";
	 cin >> pilihan ;
    
    if (pilihan == "Y" || pilihan == "y\n\n" ) {
    	continue;
	}
    else if (pilihan == "N" || pilihan == "n"){
    	break;
	}
}
    return 0;
}
