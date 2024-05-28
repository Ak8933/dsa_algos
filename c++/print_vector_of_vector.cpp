// C++ code to demonstrate traversal
// of a 2D vector

#include <iostream>
#include <vector>
using namespace std;

// Driver Method
int main()
{
	// Initializing 2D vector "vect" with
	// sample values
	vector<vector<int> > vec{ { 1, 2 },
							{ 4, 5, 6 },
							{ 7, 8, 9 } };

	// Displaying the 2D vector
	for (int i = 0; i < 3; i++) {
		for (
			auto it = vec[i].begin();
			it != vec[i].end(); it++)
			cout << *it << " ";
		cout << endl;
	}

	return 0;
}
