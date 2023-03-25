#include<iostream>

using namespace std;

class Animal{
	int length;
	int weight;
	public:

	Animal(int len, int wt){
        length = len;
        weight = wt;
	}
	void printAnimal(){
		cout << length << endl;
		cout << weight << endl;
	}
};

int main(){
	/* Way -1 (Creates an object of the class on the stack)
        No need to delete. It automatically gets deleted as it goes out of the scope */
	Animal Dog(10, 20);
	Dog.printAnimal();

    /* Way - 2 (Creates an object on the heap: dynamic memory)
        Need to be deleted */
    Animal *Cat = new Animal(13, 22);
    Cat->printAnimal();

    delete Cat;


	return 0; // Exited successfully
}
