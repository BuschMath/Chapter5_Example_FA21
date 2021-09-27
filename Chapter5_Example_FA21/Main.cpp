#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int h, w;
	ifstream infile;
	infile.open("input.dat");

	if (!infile)
	{
		cout << "Cannot open file!\n";
		return 1;	// terminate the program
	}

	infile >> h >> w;

	return 0;
}