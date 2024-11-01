#include <iostream>
using namespace std;


struct Project{
    string name;
    string description;
};

struct Skill{
    string skillName;
    string skillDesc;
    int experience;
};

struct User
{
   string fullName;
   int age;
   string email;
   string mobile;
   Project project;
   Skill skill;
};



void printUser(User user){
    cout << endl << "User Profile details are: " << endl;
    cout << "   Name: " << user.fullName << endl;
    cout << "   Email: " << user.email << endl;
    cout << "   Mobile: " << user.mobile << endl;
    cout << "   Age : " << user.age << endl;

    cout << endl << "Project Details " << endl;
    cout << "   Project Name: " << user.project.name << endl;
    cout << "   Project description: " << user.project.description << endl;

    cout << endl << "Skills Details " << endl;
    cout << "   Skill Name: " << user.skill.skillName << endl;
    cout << "   Skill Desc: " << user.skill.skillDesc << endl;
    cout << "   Experience: " << user.skill.experience << endl;
}


int main(){

    User user;
    cout << "------User details------ " << endl;
    cout << "Enter User Full name " << endl;
    getline(cin, user.fullName);

    cout << "Enter email " << endl;
    cin >> user.email;

    cout << "Enter mobile: " << endl;
    cin >> user.mobile;

    cout << "Enter Age: " << endl;
    cin >> user.age;

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    Project project;
    cout << endl << "Enter department details: " << endl;
    cout << "Enter project Name: "<< endl;
    getline(cin, project.name);

    cout << "Enter project Description: " << endl;
    getline(cin, project.description);


    Skill skill;
    cout << endl << "Enter your skill details "<< endl;
    cout << "Enter your skill name: " << endl;
    getline(cin, skill.skillName);

    cout << "Enter skill description "<< endl;
    getline(cin, skill.skillDesc);

    cout << "Enter years of experience " << endl;
    cin >> skill.experience;

    user.project = project;
    user.skill = skill;

    printUser(user);
}