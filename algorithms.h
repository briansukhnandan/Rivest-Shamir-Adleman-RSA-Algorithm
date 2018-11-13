#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
	
	if (b > a) {
		
		int temp = a;
		a = b;
		b = temp;
		
	}
	
	if (b == 0) {
		
		return a;
		
	}
	
	gcd(b, (a%b));
}

int phi(int n) {
	
	//The idea is to calculate the amount of numbers
	//from 1 to n-1 that have a GCD of 1 with the
	//number n.
	
	//By default, these groups have the identity element 1 in it.
	//So i will set result = 1 to accomodate for that.
	int result = 1;
	
	for (int i = 2; i <= (n-1); i++) {
		
		if (gcd(n, i) == 1) {
			
			result++;
			
		} 
		
	}
	
	return result;
	
}

int inverseFinder(int a, int n) {
	
	int inverse = 2;
	/*
	do {
		
		if (inverse > (n-1)) {
			return 0;
		}
		
		inverse++;
			
	}while ( (a * inverse) % phi(n) != 1);*/
	
	do {
		
		if (inverse > (phi(n)-1)) {
			return 0;
		}
		
		inverse++;
			
	}while ( (a * inverse) % phi(n) != 1);
		
	return inverse;
	
}
