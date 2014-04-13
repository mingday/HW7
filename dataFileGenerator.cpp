// mingday
// Helper program for HW7

#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;

int main() {
	cout << "Welcome to Random Number File generator!" << endl;
	cout << "Number of integers: ";
	int n;
	cin >> n;
	cout << "Non-negative integer up to: ";
	int max;
	cin >> max;
	cout << "Output file name:  ";
	string s;
	cin >> s;
	cout << "... ";

	srand(time(0));
	ofstream fout;
	fout.open(s);

	fout << n << " ";
	for (int i = 0; i < n; i++)
		fout << rand() % (max + 1) << " ";

	fout.close();
	cout << "Done!" << endl;

	return 0;
}