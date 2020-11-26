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

class Student : public Person{
    private:
        int idStn;
        float note;
    public:
        Student(string, string, string, int, int, float);
        void showStudent();
};

class Univercitary : public Student{
    private:
        string degree;
        string speciality;
    public:
        Univercitary(string, string, string, int, int, float, string, string);
        void showUnivercitary();
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

Student::Student(string _name, string _lastName, string _gender, int _age, int _idStn, float _note)
        :Person(_name, _lastName, _gender, _age){
            idStn = _idStn;
            note = _note;
}

Univercitary::Univercitary(string _name, string _lastName, string _gender, int _age, int _idStn, float _note, string _degree, string _speciality)
             : Student( _name, _lastName, _gender, _age, _idStn, _note){
           degree = _degree;
           speciality = _speciality;       
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

void Student::showStudent(){
    showPerson();
    cout << "ID student: " << idStn << endl;
    cout << "Note: " << note << endl;
}

void Univercitary::showUnivercitary(){
    showStudent();
    cout << "Degree: " << degree << endl;
    cout << "Speciality: " << speciality << endl;

}

int main(){
    Person p1("Antonio", "Nieblas", "male", 24);
    Employee e1("Antonio", "Nieblas", "male", 24, "developer", 1001, 12000);
    Student s1("Antonio", "Nieblas", "male", 24, 15130452,8.4);   
    Univercitary u1("Antonio", "Nieblas", "male", 24, 15130452,8.4,"electronic","mechatronic");

    p1.showPerson();
    cout << "\n";
    e1.showEmployee();
    cout << "\n";
    s1.showStudent();
    cout << "\n";
    u1.showUnivercitary();
    cout << "\n";
    return 0;
}