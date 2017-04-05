#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;
int main(int argc, char* argv[])
{
	string str1 = "Hotel";
	string str2 = " deboter";
	string ans = str1 + str2;

	cout << ans << "\n";

	istringstream iss(ans);
	string holdString;

	iss >> holdString;
	cout << "first part: " << holdString << "\n";
	iss >> holdString;
	cout << "second part: " << holdString << "\n";
	return 0;
}