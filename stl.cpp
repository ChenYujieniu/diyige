#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person
{
public:
	char Name[64];
	int Age;
};
void test()
{
	ifstream f("peron.txt", ios::in | ios::binary);
	if (f.is_open())
	{
		Person p ;
		f.read((char *)&p, sizeof(Person));
		cout << p.Name <<"\t" << p.Age << endl;
		f.close();
	}
}
int main() 
{
	test();

	system("pause");
	return 0;
}