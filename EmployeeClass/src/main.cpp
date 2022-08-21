#include <iostream>

using namespace std;

class Employee {
	float no, salary, allowances, IT, net_salary;
	char name[100];
public: void readEmp();
		void printData();
		void calculate();
};

void Employee::readEmp(){
	cout << "\n\nEnter the following details \nName   :";
	cin >> name;
	cout << "Number : ";
	cin >> no;
	cout << "Salary : ";
	cin >> salary;
}
void Employee::calculate(){
	allowances = 1.25*salary;
	IT = (allowances + salary)*0.3;
	net_salary = salary + allowances - IT;
}

void Employee::printData(){
	cout << "\nHello " << name << ", here are your details :\n";
	cout << " Number     : " << no << endl;
	cout << "Salary     : Rs." << salary << endl;
	cout << "Allowances : Rs." << allowances << endl;
	cout << "Income Tax : Rs." << IT << endl;
	cout << "Net Salary : Rs." << net_salary << endl;
}

int main(){

	Employee e1, e2;
	e1.readEmp();
	e1.calculate();
	e1.printData();
	e2.readEmp();
	e2.calculate();
	e2.printData();
	return 0;
}
