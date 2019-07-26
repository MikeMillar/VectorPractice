#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> test(5); // Sets a vector with 5 indexes -- size indication not required

	vector<string> strings; // Sets a vactor with 0 indexes
	strings.push_back("one"); // Adds element to back of vector
	strings.push_back("two");
	strings.push_back("three");
	cout << strings[1] << endl; // Just like array, don't use index number that doesn't excit
	cout << strings.size() << endl;

	for (int i = 0; i < strings.size(); i++) {
		cout << strings[i] << endl;
	}

	vector<string>::iterator it = strings.begin(); // Points to first element
	cout << *it << endl; // prints "one"
	it++; // Moves it to next index.
	cout << *it << endl; // Prints "two"

	for (vector<string>::iterator it2 = strings.begin(); it2 != strings.end(); it2++) { // Same as for loop above, with different syntax
		cout << *it2 << endl;
	}

	vector<string>::iterator it3 = strings.begin(); 
	it3 += 2; // Moves 2 spaces forward in vector
	cout << *it3 << endl;

	return 0;
}