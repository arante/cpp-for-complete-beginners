/**
 * variables.cpp
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/02/10 PHT
 */

#include <iostream>

using namespace std;

int main()
{
	int cats = 5;
	int dogs = 7;
	int totalAnimals = cats + dogs;

	cout << "Number of cats: " << cats << endl;
	cout << "Number of dogs: " << dogs << endl;
	cout << "Total number of animals: " << totalAnimals << endl;

	cout << "Acquired new dog." << endl;

	dogs = dogs + 1;

	cout << "New number of dogs: " << dogs << endl;

	return 0;
}
