#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int encrypter(int m, int e, int n) {
		
	unsigned int product = pow(m, e);
	product = product%n;
	
//	int c = product % n; 
	
	return product;
	
		
}

int decrypter(int c, int d, int n) {
	
	unsigned int product = pow(c,d);
	product = product%n;
	
	return product;
}

