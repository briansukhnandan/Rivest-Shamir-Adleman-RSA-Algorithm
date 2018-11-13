#include <iostream>
#include <cmath>
using namespace std;

#include "algorithms.h"
#include "valueChanger.h"

//Brian Sukhnandan

/* 
NOTES ON RSA ENCRYPTION:
-Generate an n where:
 n = p * q (where p and q are prime numbers.)
-Compute phi(n) (Euler-totient function) which can be done via (p-1)(q-1).
-Find an e such that gcd(e, phi(n)) = 1.
-In the group (Z,nZ,.) find e^-1 (inverse of e such that ed % phi(n) = 1), and call that d.
-Take a value you would like to encrypt and do: (m^e)%n to get c, your encrypted message.
-To decrypt, finally do (c^d)%n to get m, your decrypted message.
*/

//FOR REFERENCE:
//MY KEY:
//n = 91, e = 5

int main() {
	
	int encryptNumber;
	
	int n;
	int e;	
	int d; 
	int decryption;
	
	cout << "Enter the letter index you want to encrypt." << endl <<
			"e.g. A=1, B=2" << endl;
	cin >> encryptNumber;
	
	while (encryptNumber > 26) {
		
		cout << "Invalid." << endl;
		cin >> encryptNumber;
		
	} 
	
	//Converting to ASCII.
	encryptNumber += 64;	
	
	cout << "Enter the n, or the product of your primes." << endl;
	cin >> n;
	
	cout << "Enter an e, or a number s.t gcd(e, phi(n)) = 1." << endl;
	cin >> e;
	
	d = inverseFinder(e, n);
	
	cout << encrypter(encryptNumber, e, n) << endl;
	
	return 0;
	
}

