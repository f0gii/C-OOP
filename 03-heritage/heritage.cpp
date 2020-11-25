#include <iostream>

using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        Person(string, int);
        void showPerson();
};

class Student : public Person{
    private:
        int id;
        float note;
    public:
        Student(string, int, int, float);
        void showStudent();
};

Person::Person(string _name, int _age){
    name = _name;
    age = _age;
}

Student::Student(string _name, int _age, int _id, float _note) : Person(_name, _age){
    id = _id;
    note = _note;
}

void Person::showPerson(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

void Student::showStudent(){
    showPerson();
    cout << "ID: " << id << endl;
    cout << "Note: " << note << endl;
}

int main(){
    Person p1("Mario", 24);
    Student s1("Antonio", 24, 15130452, 8.4);

    s1.showStudent();
    cout << "\n";
    p1.showPerson();

    return 0;
}

