#include <iostream>
using namespace std;

class Student
{
public:
	void setage(int a)
	{
		age=a;
	}
protected:
	void print()
	{
		cout << "Age:" << age << endl;
	}
private:
	int age;
};

int main()
{
	Student s;
	s.setage(5);
//    s.print();
}
