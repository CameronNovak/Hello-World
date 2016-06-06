#include <iostream>
#include <string>

int main() {
	using namespace std;
	string input;
	cout << "Please enter a string (I.E. \"Hello World\"): ";
	getline(cin, input);
	cout << input << endl;
	return 0;
}
