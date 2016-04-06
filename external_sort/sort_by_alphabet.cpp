#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

string createFileName(int n) {
	return string("")+(char)(n+'a')+".txt"; 
}

int main() {
	string s;
	ofstream myStreams[26];
	for(int i=0;i<26;i++) {
		myStreams[i].open(createFileName(i).c_str());
	}
	cerr << "established files" << endl;
	while (cin >> s) {
		int value = s[0] - 'a';
	 	//cerr << "value = " << value << endl;
	 	myStreams[value] << s << "\n";
		//(*myStreams[value]) << s << "\n";
	}
	cerr << "files created" << endl;
	for(int i=0;i<26;i++) {
		ifstream fin(createFileName(i).c_str());

		vector<string>a;
		while (fin >> s) {
			a.push_back(s);
		}
		sort(a.begin(),a.end());
		cerr << (char)(i+'a') << " is done" << endl;
		for(auto &x:a) {
			cout << x << "\n";
		}
	}
	return 0;
}