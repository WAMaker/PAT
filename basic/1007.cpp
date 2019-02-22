#include <iostream>
#include <vector>

using namespace std;
int main() {
	int N;
	cin >> N;
	int num = 0;
	vector<int> primes;
	primes.push_back(2);
	primes.push_back(3);
	
	for (int i = 5; i <= N; i++) {
		if (i % 2 == 0) {
			continue;
		}
		
		bool isPrime = true;
		for (int j = 0; j < primes.size(); j++) {
			int prime = primes[j];
			if (prime * prime > i) {
				break;
			}
			if (i % prime == 0) {
				isPrime = false;
			}
		}
		
		if (!isPrime) {
			continue;
		}
		
		if (i - primes[primes.size() - 1] == 2) {
			num++;
		}
		primes.push_back(i);
	}
	
	cout << num << endl;
	return 0;
}