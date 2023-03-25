#include<iostream>

using namespace std;

class Animal{
	bool veg;

	public:
	int length;
	int weight;

	Animal(){
		veg = true;
	}

	void printAnimal(){
		cout << length << endl;
		cout << weight << endl;
		cout << veg << endl;
	}
};

int main(){
	// Initialization with default constructor
	Animal Dog;
	Dog.length = 2;
	Dog.weight = 3;


	Dog.printAnimal();


	return 0; // Exited successfully
}
