#include person
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Person person{ "John", "Doe" };

	string str{ person };
	cout << str << endl;
}
