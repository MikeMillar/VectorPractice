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

	vector<double> numbers(20, 0); // Sets vector of size 20 with each element initialized to 0
	cout << "\n\n\nSize: " << numbers.size() << endl;
	int capacity = numbers.capacity(); // Current capacity of array
	cout << "Capacity: " << capacity << endl;
	for (int i = 0; i < 10000; i++) { // Loops 10000 times
		if (numbers.capacity() != capacity) { // If capacity changes, sets new capacity and outputs it
			capacity = numbers.capacity();
			cout << "Capacity increased to: " << capacity << endl;
		}
		numbers.push_back(i); // Pushes index to back of vector
	}

	numbers.reserve(20000); // Changes capacity of vector to reserve amount -- allocates memory
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;

	numbers.resize(100); // Resizes vector to 100 elements
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;

	numbers.clear(); // Deletes all elements
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;

	
	cout << "\n\n\n";

	// 2D Vectors
	vector< vector<int> > grid(3, vector<int>(4, 7)); // Creates a vector of rows, which contains vectors of collumns

	grid[1].push_back(8);

	for (int row = 0; row < grid.size(); row++) {
		for (int col = 0; col < grid[row].size(); col++) {
			cout << grid[row][col] << flush;
		}
		cout << endl;
	}

	cout << endl;
	// Mult Table 1-10 mults
	vector< vector<int> > table(11, vector<int>(11));
	for (int row = 1; row < table.size(); row++) {
		for (int col = 1; col < table[row].size(); col++) {
			table[row][col] = row * col;
			cout << table[row][col] << '\t';
		}
		cout << endl;
	}


	return 0;
}