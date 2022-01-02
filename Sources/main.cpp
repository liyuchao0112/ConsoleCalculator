#include <iostream>
using namespace std;
int main() {
	double a,b;
	char c;
	cin>>a>>c>>b;
	switch(c) {
	case '+':
		cout<<a+b;
		break;
	case '-':
		cout<<a-b;
		break;
	case '*':
		cout<<a*b;
		break;
	case '/':
		if(b==0)
			cout<<"[ERROR] Divide by Zero!";
		else
			cout<<a/b;
		break;
	default:
		cout<<"[ERROR] Non-compliant Input!";
	}
	return 0;
}