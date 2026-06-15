#include <iostream>
using namespace std;

class Person
{
public:
    string name;

private:
    int age;

protected:
    string secret;

public:
    void setData()
    {
        name = "Arun";
        age = 25;
        secret = "Family Secret";
    }

    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Secret: " << secret << endl;
    }
};

class Employee : public Person
{
public:
    void accessProtected()
    {
        // Accessible because secret is protected
        cout << "Protected Secret: " << secret << endl;
    }
};

int main()
{
    Employee e1;

    // PUBLIC member accessible
    e1.name = "Rahul";

    e1.setData();

    e1.showData();

    // PROTECTED accessible through child class function
    e1.accessProtected();

    // PRIVATE NOT accessible
    // e1.age = 30;   // ERROR

    // PROTECTED NOT accessible directly
    // e1.secret = "Hello"; // ERROR

    return 0;
}