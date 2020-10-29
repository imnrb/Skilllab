#include<iostream>
using namespace std;
class Student{
	public:
    string name;
	int age;
	int roll;
	void show(){
		cout<<"NAME IS "<<name<<endl;
		cout<<"AGE IS "<<age<<endl;
		cout<<"ROLL IS "<<roll<<endl;
	}
};
int main()

{
	Student std;
	std.name="Nitish Bhattacharjee";
	std.age=18;
	std.roll=3;
	std.show();
}
