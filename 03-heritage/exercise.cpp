#include <iostream>

using namespace std;

class Person{
    private:
        string name;
        string lastName;
        string gender;
        int age;
    public:
        Person(string, string, string, int);
        void showPerson();
};

class Employee : public Person{
    private:
        string job;
        int idJob;
        int salary;
    public:
        Employee(string, string, string, int, string, int, int);
        void showEmployee();
};


Person::Person(string _name, string _lastName, string _gender, int _age){
    name = _name;
    lastName = _lastName;
    gender = _gender;
    age = _age;
}

Employee::Employee(string _name, string _lastName, string _gender, int _age, string _job, int _idJob, int _salary) 
        : Person(_name,  _lastName, _gender, _age){
        job = _job;
        idJob = _idJob;
        salary = _salary;
}

void Person::showPerson(){
    cout << "Name: " << name << endl;
    cout << "Last name: " << lastName << endl;
    cout << "Gender: " << gender << endl;
    cout << "Age: " << age << endl;
}

void Employee::showEmployee(){
    showPerson();
    cout << "Job: " << job << endl;
    cout << "ID job: " << idJob << endl;
    cout << "Salary: " << salary << endl;
}

int main(){
    Person p1("Antonio", "Nieblas", "male", 24);
    Employee e1("Antonio", "Nieblas", "male", 24, "developer", 1001, 12000);
    
    p1.showPerson();
    cout << "\n";
    e1.showEmployee();
    cout << "\n";

    return 0;
}