#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstdlib>
using namespace std;

//second argument ie argv[1] is # of megabytes of file

int main(int argc, char *argv[]) {
	//ios_base::sync_with_stdio(false);
	string s;//1K
	for(int i=0;i<1024;i++) {
		s += rand()%26+'a';
	}
	int factor = 1;
	if (argc == 2) factor = atoi(argv[1]);
	const int NUM_STRINGS=1024 * factor;
	for(int i=0;i<NUM_STRINGS;i++) {
		random_shuffle(s.begin(),s.end());
		cout << s << "\n";
	}
	cerr << "Made file of " << factor << " MB\n";
	return 0;
}