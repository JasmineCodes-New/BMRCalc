// JasmineIrvinProj2.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

	//declares variables used
	char bmr_Again;
	double weight;
	double height;
	int age;
	double bmr;
	char gender;

	do {
		cout << "Welcome to my BMR Calculator!\n";
		cout << "Gender (M or F):";
		cin >> gender; // asks user for M or F

		while (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f')
		{
			cout << "Wrong gender input. Please enter again. Gender (M or F): ";
			cin >> gender;
		}

		// runs if gender is female
		if (gender == 'F' || gender == 'f')
		{
			cout << "Weight (in pounds): ";
			cin >> weight; // inputs weight and stores to variable
			cout << "Height (In Inches): ";
			cin >> height; // inputs height and stores to variable
			cout << "Age (in years): ";
			cin >> age; // inputs age and stores to variable
			bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age); // runs calculation to figure the BMR of Female
			cout << "She needs about " << bmr << " calories to maintain her weight.\n";
			cout.precision(3);
			cout << "That is about " << bmr / 230 << " chocolate bar's!\n";
			cout << "Do you want to do another calculation? (Y/N): ";
			cin >> bmr_Again;

		}

		// runs if gender is male
		else if (gender == 'M' || gender == 'm')
		{
			cout << "Weight (in pounds): ";
			cin >> weight; // inputs weight and stores to variable
			cout << "Height (In Inches): ";
			cin >> height; // inputs height and stores to variable
			cout << "Age (in years): ";
			cin >> age; // inputs age and stores to variable
			bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age); // runs calculation to figure the BMR of Male
			cout << "He needs about " << bmr << " calories to maintain his weight.\n";
			cout.precision(3);
			cout << "That is about " << bmr / 230 << " chocolate bar's!\n";
			cout << "Do you want to do another calculation? (Y/N): ";
			cin >> bmr_Again;

		}

	} while (bmr_Again == 'Y' || 'y');


	return 0;
}

// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
