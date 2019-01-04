// Robert M Wood Jr.
// CPW 218
// 01/04/19
// Decisions

#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

int main() {
	// why only reading 1?
	int howMany = 0;
	int weekend = 0;
	string when = " ";
	double cost = 0;
	string subject = " subjects, ";

	cout << "This program calculates the cost" << endl
		<< "of a portrait sitting. The price depends " << endl
		<< "on the number of subjects in the portrait" << endl
		<< "and the day of the week" << endl << endl;

	cout << "Enter the number of subjects: ";
	cin >> howMany;
	cout << endl;
	cout << "Will the sitting be on a weekend? (0 = no, 1 = yes); ";
	cin >> weekend;
	
	if (howMany = 1) {
		cost = 100;
		subject = " subject, ";
	}
	else if (howMany = 2) {
		cost = 130;
	}
	else if (howMany = 3) {
		cost = 150;
	}
	else if (howMany = 4) {
		cost = 165;
	}
	else if (howMany = 5) {
		cost = 175;
	}
	else if (howMany = 6) {
		cost = 180;
	}
	else{
		cost = 185;
	}

	if (weekend) {
		when = "on a weekend,";
		cost = cost + (cost * 0.20);
	}
	else {
		when = "on a weekday,";
	}

	cout << "For a sitting with " << howMany << subject << endl
		<< when << " the cost is " << cost << "." << endl;

	system("pause");
	return 0;
}

