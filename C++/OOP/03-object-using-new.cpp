#include <iostream>

using namespace std;

class Animal{

	public:
	int weight;

	Animal(){
		cout << "Constructor Called" << endl;
	}

	void details(){
		cout << "Weight is : " << weight << endl;
	}

	~Animal(){
		cout << "Destructor Called" << endl;
	}
};

int main(){
	Animal* Dog = new Animal();

	Dog->weight = 20;
	Dog->details();

	delete Dog;

	return 0;
}
