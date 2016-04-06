#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	//get input
	ios_base::sync_with_stdio(false);
	vector<string> a;
	string s;
	while (cin >> s) {
		a.emplace_back(s);
	}
	sort(a.begin(),a.end());
	for(auto &x:a) cout << x << "\n";
	return 0;
}