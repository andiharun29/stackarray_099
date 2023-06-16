#include<iostream>
#include<string>
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
		if (top == 4) {
			cout << "number of data execend the limit" << endl;
			return 0;
		}
		top++;//step2
		stack_array[top] = element;//step 3
		cout << endl;
		cout << element << "ditambahkan (pushed)" << endl;

		return element;
	}
	void pop() {
		if (empty()) {//step 1
			cout << "\nstack is empty. cannot pop" << endl;  //1.a
			return;//1.b
		}
		cout << "\nthe popped element is : " << stack_array[top] << endl; // step2
		top--; //step 3 decrement
	}
	//method for check if data is empty
	bool empty() {
		return (top == -1);
	}
	void display() {
		if (empty()) {
			cout << "\nstack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	stackarray s;
	char ch;
	while (true) {
		cout << endl;
		cout << "\nMenu" << endl;
		cout << "1. push" << endl;
		cout << "2. pop" << endl;
		cout << "3. display" << endl;
		cout << "4. Exit" << endl;
		cout << "\nEnter your choice (1-4): ";
		cin >> (ch);
		switch (ch) {
		case '1': {
			int element;
			cout << "\nenter an element :";
			cin >> element;
			s.push(element);
			break;
		}
		case '2':
			if (s.empty()) {
				cout << "\nStack is Empty." << endl;
				break;
			}
			s.pop();
			break;
		case '3':
			s.display();
			break;
		case '4':
			return 0;
		default:
			cout << "\nInvalid choice" << endl;
			break;
		}
	}
}

