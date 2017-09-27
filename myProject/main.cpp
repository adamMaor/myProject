#include <iostream>
#include <string>

using namespace std;

int add(int x, int y);

int main()
{
	int pause;
	string str = "Hello World";
	
	cout << str << " " << add(5,7) << endl;
	
	cin >> pause;
	return 0;
}

int add(int x, int y)
{
	return x + y;
}




