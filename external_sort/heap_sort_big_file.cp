#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//stopped at 68m on 3GB file
int minHeap(const string &a,const string &b) {
	return a > b;
}

int main() {
	//get input
	ios_base::sync_with_stdio(false);
	vector<string> a;
	string s;
	while (cin >> s) {
		a.emplace_back(s);
	}
	make_heap(a.begin(),a.end(),minHeap);
	int size = a.size();
	for(int i=0;i<size;i++){
		cout << a.front() << "\n";
		pop_heap(a.begin(),a.begin()+size-i);
	}
	return 0;
}