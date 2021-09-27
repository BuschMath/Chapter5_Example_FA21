#include <iostream>

using namespace std;

int main()
{
	cout << "Do you want to determine your outcome by letter or number? Enter l for letter or n for number.\n";
	char test;
	bool letter_grade;

	cin >> test;

	if (test == 'l')
	{
		letter_grade = true;
	}
	else
	{
		letter_grade = false;
	}

	if (letter_grade)
	{
		char Grade;
		cout << "Enter your grade: ";
		cin >> Grade;
		cout << endl;

		if (Grade == 'A' || Grade == 'B' || Grade == 'C' || Grade == 'a' || Grade == 'b' || Grade == 'c')
		{
			cout << "Congrats! You passed. \n\n";
		}
		else
		{
			cout << "That's sad. You failed. \n\n";
		}
	}
	else
	{
		double Grade_Number;
		cout << "Enter your grade: ";
		cin >> Grade_Number;

		if (Grade_Number >= 70)
		{
			cout << "Congrats! You passed. \n\n";
		}
		else
		{
			cout << "That's sad. You failed. \n\n";
		}
	}

	return 0;
}