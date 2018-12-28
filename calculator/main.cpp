#include <iostream> 
#include "funcs.h" 
using namespace std;

int main() 
{ 
	double a, b;
	char op;

	cout << "a =";
	cin >> a;

	cout << "b =";
	cin >> b;

	cout << "operator: ";
	cin >> op;

	switch(op){
	case '+': 
		cout << MySum(a, b) << endl; 
		break;
	case '-': 
		cout << MySub(a, b) << endl; 
		break;
	case '*': 
		cout << MyMul(a, b) << endl; 
		break;
	case '/': 
		cout << MyDiv(a, b) << endl; 
		break;
	}

	system("pause");
	return 0;
}