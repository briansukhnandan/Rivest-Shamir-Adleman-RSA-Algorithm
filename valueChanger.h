#include <iostream>
#include <cmath>
using namespace std;

int encrypter(int m, int e, int n) {
	
	int product = 1;
	
	for (int i = 0; i < e; i++) {
		
		product *= m;
		
	}
	//At this point m = m^e.
	
	int c = product % n; 
	
	return c;
	
}

