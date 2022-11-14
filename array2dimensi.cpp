/*
    Nama File   :array2dimensi.cpp
    Programmer  :Manja Fani Oktavia
    NIM         :22343056
    Program array 2 dimensi yaitu user menginput nilai masing-masing elemen matrik ordo 3 × 4
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int A[3][4];

	for (int b=0;b<3;b++){
		for (int k=0;k<4;k++){
			  cout<<"A["<<b<<"]["<<k<<"] = ";
			  cin>>A[b][k];
		}
		cout << endl;
	}

	for (int b=0;b<3;b++){
		for (int k=0;k<4;k++){
			 cout<<A[b][k]<<" ";
		}
		cout << endl;
	}
	getch();
}
