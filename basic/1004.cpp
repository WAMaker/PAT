#include <iostream>
#include <string>

using namespace std;
int main() {
	int tests;
	cin >> tests;
	
	int min = 101;
	string min_name, min_id;
	int max = -1;
	string max_name, max_id;
	for (int i = 0; i < tests; i++) {
		string name, sid;
		int score;
		
		cin >> name >> sid >> score;
		
		if (score > max) {
			max_name = name;
			max_id = sid;
			max = score;
		}
		if (score < min) {
			min_name = name;
			min_id = sid;
			min = score;
		}
	}
	
	cout << max_name << " " << max_id << endl;
	cout << min_name << " " << min_id << endl;
	
	return 0;
} 