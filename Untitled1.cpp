#include <iostream>
using namespace std;
class A
{
	int a;

public:
	int b;
	void setA(int a)
	{
		this->a = a;
	}
	void getA()
	{
		cout << "A is:" << a;
	}
};

int main()
{
	A obj;
	obj.b = 10;
	cout << "B is:" << obj.b << endl;
	obj.setA(15);
	obj.getA();
}
