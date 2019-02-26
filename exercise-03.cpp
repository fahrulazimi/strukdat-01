/*
	Author 		: Muhamad Fahrul Azimi
	NPM 		: 140810180027
	Deskripsi	: Program ini dibuat untuk swap
	Tahun 		: 2019
*/

// nama file : exercise-03.cpp
#include <iostream>
using namespace std;

void tukar(int&a,int&b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a,b;
	cout << "Input nilai a : "; cin >> a;
	cout << "Input nilai b : "; cin >> b;
	tukar (a,b);
	cout << "a : " << a <<endl;
	cout << "b : " << b <<endl;
}
