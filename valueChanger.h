#include <iostream>
#include <cmath>
using namespace std;

int encrypter(int m, int e, int n) {
	
	//Converting to ASCII
//	m += 64;
	
	int product = 1;
	
	product = pow(m, e);
	product = product%n;
	
	cout << product;
	
//	for (int i = 0; i < e; i++) {
		
//		product *= m;
		
//	}
	//At this point m = m^e.
	
	int c = product % n; 
	cout << c << endl;
	
	return c;
	
	
		
}

int decrypter(int c, int d, int n) {
	
	int product = 1;
	
	product = pow(c,d);
	product = product%n;
	
	cout << product << endl;
	
//	for (int i = 0; i < d; i++) {
		
//		product *= c%n; 
		
	
	
	return product;
}

