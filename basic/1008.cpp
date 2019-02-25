#include <iostream>
#include <vector>

using namespace std;
int main() {
	int len, count;
	cin >> len >> count;
	vector<int> a(len);
	
	count %= len;
	for (int i = 0; i < len; i++) {
		cin >> a[i];
	}
	
	int idx = len - count;
	bool has_output = false;
	for (int i = idx; i < a.size(); i++) {
		if (i != idx) {
			cout << " ";
		}
		has_output = true;
		cout << a[i];
	}
	for (int i = 0; i < idx; i++) {
		if (has_output) {
			cout << " ";
		}
		has_output = true;
		cout << a[i];
	}
	
	return 0;
}