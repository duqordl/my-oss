#include<iostream>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	// A
	/*Person(){
		id = 1;
		weight = 20.5;
		name = "Grace";
	}
	Person(int id, string name) {
		this->id = id;
		weight = 20.5;
		this->name = name;
	}
	Person(int id, string name, double weight) {
		this->id = id;
		this->weight = weight;
		this->name = name;
	}*/

	// B
	Person(int id = 1, string name = "Grace", double weight = 20.5) {
		this->id = id;
		this->weight = weight;
		this->name = name;
	}

	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}