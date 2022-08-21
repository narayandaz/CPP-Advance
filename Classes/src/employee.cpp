#include<bits/stdc++.h>
using namespace std;
class Employee{
    public:
    string Name;
    string Company;
    int Age;
    Employee(string name, string company, int age){
        Name=name;
        Company=company;
        Age=age;
        IntroduceYourself();
    }
    void IntroduceYourself(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Company: "<<Company<<endl;
        cout<<"Age: "<<Age<<endl;
        
    }
};
int main(){
    Employee employee1("Ram","Lapcare",32);
    Employee employee2("Arjun","Amazon",39);
    Employee employee3("Romi","Youtube",25);
    Employee employee4("Tapon","Sodha",45);

}