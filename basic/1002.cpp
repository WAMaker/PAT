#include <iostream>
#include <string>

using namespace std;
int main() {
	string s;
	cin >> s;
	
	int num;
	string py[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	for(int i = 0; i < s.length(); i++) {
		num += s[i] - '0';
	}
	s = to_string(num);

	for(int i = 0; i < s.length(); i++) {
		if(i != 0) {
			cout << " ";
		}
		cout << py[s[i] - '0'];
	}
	
	return 0;
}