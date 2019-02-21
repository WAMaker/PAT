#include <iostream>
#include <string>

using namespace std;
int main() {
	int num;
	cin >> num;
	
	string output;
	int b[3] = {0};
	for (int i = 0; i < 3; i++) {
		b[i] = num % 10;
		num /= 10;
	}
	
	for (int i = 0; i < b[2]; i++) {
		output += "B";
	}
	for (int i = 0; i < b[1]; i++) {
		output += "S";
	}
	for (int i = 0; i < b[0]; i++) {
		output += to_string(i + 1);
	}
	
	cout << output << endl;
	
	return 0;
}