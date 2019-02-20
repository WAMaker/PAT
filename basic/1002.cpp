#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	int tests;
	cin >> tests;
	
	map<string, string> name_sid;
	map<int, string> score_name;
	vector<int> scores;
	for (int i = 0; i < tests; i++) {
		string name;
		string sid;
		int score;
		
		cin >> name >> sid >> score;
		
		name_sid[name] = sid;
		score_name[score] = name;
		scores.push_back(score);
	}
	sort(scores.begin(), scores.end(), cmp);
	
	int top = scores[0];
	string top_name = score_name[top];
	string top_sid = name_sid[top_name];
	cout << top_name << " " << top_sid << endl;
	
	int bottom = scores[scores.size() - 1];
	string bottom_name = score_name[bottom];
	string bottom_sid = name_sid[bottom_name];
	cout << bottom_name << " " << bottom_sid << endl;
	
	return 0;
}