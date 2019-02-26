/*
	Author 		: Muhamad Fahrul Azimi
	NPM 		: 140810180027
	Deskripsi	: Program ini dibuat untuk
	Tahun 		: 2019
*/

// nama file : exercise-01.cpp
#include <iostream>
using namespace std;

int main()
{
	for (int i=1; i<=100; i++){
	if (i%3==0){
		if (i%5==0){
		cout << "Fizz Buzz" << endl;
		continue;	
		}
	cout << "Fizz" << endl;}
	else if (i%5==0){
		if (i%3==0){
		cout << "Fizz Buzz" <<endl;
		continue;
		}
	cout << "Buzz" <<endl;}
	else
		cout << i << endl;	
	}
}
