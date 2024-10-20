#include <iostream>
#include <vector> // include vector library for storing prime numbers

using namespace std;

// function to check if a number is prime
bool is_prime(int num) {
	if (num < 2) { // if number is less than 2, it's not a prime number
		return false;
	}
	for (int i = 2; i < num; i++) { // iterate over numbers from 2 to num-1
		if (num % i == 0) { // if num is divisible by i, it's not a prime number
			return false;
		}
	}
	return true; // if num is not divisible by any number in the range, it's a prime number
}

// function to calculate the product of all prime numbers from 2 to n
int product_of_primes(int n) {
	int product = 1;
	vector<int> primes; // create a vector to store prime numbers
	for (int i = 2; i <= n; i++) { // iterate over numbers from 2 to n
		if (is_prime(i)) { // check if i is a prime number
			primes.push_back(i); // add i to the vector of prime numbers
			product *= i; // multiply i to the product of all prime numbers so far
		}
	}
	return product; // return the product of all prime numbers
}

int main() {
	cout << product_of_primes(5) << endl; // Output: 30
	return 0;
}
