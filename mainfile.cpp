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

int main() {
	
	int encryptNumber;
	int decryption;
	
	int n;
	int e;	
	int d; 
	
	cout << "Enter the n, or the product of your primes." << endl;
	cin >> n;
	
	cout << "Enter an e, or a number s.t gcd(e, phi(n)) = 1." << endl;
	cin >> e;
	
	d = inverseFinder(e, n);
	
	char userChoice;
	cout << "Type 'd' to decrypt a message or 'e' to encrypt a message." << endl;
	cin >> userChoice;
	
	switch(userChoice) {
		
		case 'e' :
		
			cout << "Enter a number to encrypt. Type 0 when your message is finished." << endl;
			while (cin >> encryptNumber) {
			
		
				while (encryptNumber > n) {
					
					cout << "Invalid." << endl;
					cin >> encryptNumber;
					
				} 
				
				if (userChoice == 0) break;
				
				cout << encrypter(encryptNumber, e, n) << endl;
			
			}
			
			break;
			
		case 'd' :
			
			cout << "Enter the encrypted message you would like to decrypt." << endl;
			while (cin >> decryption) {
				
				cout << decrypter(decryption, d, n) << endl;
				
			}
			
			break;
			
			
		
	}
	
	return 0;
	
}

