#include <iostream>
#include <string>
using namespace std;

class stackarray {
private:
	int stack_array[5];
	int top;

public:
	//constructor
	stackarray() {
		top = -1;
	}

	int push(int element) {
		if (top == 4) { //step 1
			cout << "number of data exceeds the limit." << endl;
			return 0;
		}
	}
};