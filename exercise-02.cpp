/*
	Author 		: Muhamad Fahrul Azimi
	NPM 		: 140810180027
	Deskripsi	: Program ini dibuat untuk mengkonversi celcius ke fahrenheit
	Tahun 		: 2019
*/

// nama file : exercise-02.cpp
#include <iostream>
using namespace std;

float cel2Fah (float c){
	float konv;
	konv = (c*9/5)+32;
	return konv;
}
int main()
{
	float c,temp;
	cout << "Input celcius : "; cin >> c;
	temp = cel2Fah(c);
	cout << "Suhu dalam Fahrenheit : " << temp;
	
}
