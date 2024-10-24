#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromosion()=0;
};

class Employee : AbstractEmployee{
    public:
    string name;
    string company;
    int age;

    public:
    void setName (string Name){
        name = Name;
    }
    string getName(){
        return name;
    }

    public:
    void setCompany(string Company){
        company = Company;
    }
    string getCompany(){
        return company;
    }

    public:
    void setAge(int Age){
        age = Age;
    }
    int getAge(){
        return age;
    }

    Employee(){

    }

    Employee(string Name, string Company, int Age){
        name = Name;
        company = Company;
        age = Age;
    }
    void introduceYourself(){
        cout<< "Name : " << name << endl;
        cout << "Company : "<<company << endl;
        cout << "Age : " << age << endl;
    }

    void AskForPromosion(){
        if (age >= 30)
        {
           cout<< "Hey "<< name << " you got promoted!" << endl;
        }else{
            cout<< "Hey "<< name << " sorry, no promotion for this year! "<< endl;
        }
        
    }
};

class Developer :public Employee{
    public:
    string favProgLanguage;

    public:
    Developer(){}
    Developer(string name, string company, int age, string FavProgLanguage)
    :Employee(name,company,age)
    {
        favProgLanguage = FavProgLanguage;
    }

    public:
    void setFavProgLanguage(string language){
        favProgLanguage = language;
    }
    string getFavProgLanguage(){
        return favProgLanguage;
    }

    void FixBug(){
        cout << getName() << " fixes bugs using "<< favProgLanguage << endl;
    }

};

class Teacher :public Employee{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject)
    : Employee(name, company, age){
        Subject = subject;
    }
    void prepareLesson(){
        cout<< getName() << " preparing a lesson for "<< Subject << endl;
    }
};

class Student{
    private:
    string Name;
    char Grade;
    int Age;

    public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }

    public:
    void setAge(int age){
        if (age >= 30)
        {
            cout << "Candidate is experienced.."<< endl;
        }
        Age = age;
    }
    int getAge(){
        return Age;
    }

    public:
    void setGrade(char grade){
        Grade = grade;
    }
    char getGrade(){
        return Grade;
    }
};

int main(){

    // Employee emp1;
    // emp1.name = "Hemanth";
    // emp1.company = "Microsoft";
    // emp1.age = 30;

    // emp1.introduceYourself();

    // Employee emp2;
    // emp2.name = "Kumar";
    // emp2.company = "Google";
    // emp2.age = 32;

    // emp2.introduceYourself();

// constructors
    // Employee emp1 = Employee("Hemanth","Microsoft",30);
    // emp1.introduceYourself();

    // Employee emp2 = Employee("Kumar","Amazon",30);
    // emp2.introduceYourself();


// encapsulation
    // Student student1;
    // student1.setName("Hemanth");
    
    // cout << "Name : "<< student1.getName()<< endl;

    // student1.setAge(30);
    // cout << "Age : "<< student1.getAge() << endl;

    // student1.setGrade('A');
    // cout << "Grade : "<< student1.getGrade() << endl;

//Abstraction
    // Employee emp1 = Employee("Hemanth","Microsoft",30);
    // Employee emp2 = Employee("Kumar","Google",25);

    // emp1.AskForPromosion();
    // emp2.AskForPromosion();

    // Developer developer = Developer("Hemanth","Microsoft",30,"C++");

    // developer.FixBug();
    // developer.AskForPromosion();

    Teacher teacher = Teacher("Hemanth","Microsoft",30,"Java");
    teacher.prepareLesson();
    teacher.AskForPromosion();

    return 0;
}