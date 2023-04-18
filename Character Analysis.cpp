#include<iostream>
#include<fstream>
using namespace std;

int main()
{
char ch; // To hold a character from the file

// Counters for the number of uppercase characters,
// lowercase characters, and digits found in the file.
int uppercase = 0;
int lowercase = 0;
int digits = 0;

// Open the file.
ifstream inputFile;
inputFile.open("text.txt");

// Read each character in the file
// and analyze it.
while (inputFile >> ch)
{
if (isupper(ch))
uppercase++;

if (islower(ch))
lowercase++;

if (isdigit(ch))
digits++;
}

// Close the file.
inputFile.close();

// Display the results.
cout << "Uppercase characters: " << uppercase << endl;
cout << "Lowercase characters: " << lowercase << endl;
cout << "Digits: " << digits << endl;

return 0;


}