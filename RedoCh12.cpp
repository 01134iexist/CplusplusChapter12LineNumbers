#include <iostream>
#include <fstream>
#include <string>
using namespace std;



int main()
{

	fstream textFile;
	string input;
	int count = 0;
	int count2 = 0;

	cout << "Opening text file...\n";
	textFile.open("forChap12.txt", ios::in);
	cout << "Now displaying data from text file : \n";

	if (textFile) {
		getline(textFile, input);
		while (textFile) {
			++count;
			++count2;
			if (count2 == 25) {
				//pausing the program after 24 lines of text
				system("pause");
				count2 = 1;
			}
			cout << count << " : " << input << endl;
			getline(textFile, input);
		}
		textFile.close();
	}
	else
	{
		cout << "ERROR: Cannot open file.\n";
	}

	system("pause");
	return 0;
}
