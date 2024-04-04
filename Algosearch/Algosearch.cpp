#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input(){
	while (true) {
		cout << "Enter the number of element in the array :";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimal 1 and maximum 20 element.\n\n";
	}
	cout << "\n------------------\n";
	cout << "Enter Array Element";
	cout << "\n------------------\n";
	for (i = 0; i < n; i++) {
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}

void LinearSearch() {
	char ch;

}