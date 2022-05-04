// name address phone no. email id
// inherit it in student class then ask course fee //make object of student
// inherit student class in marks class(5 subjects)
#include <iostream>
#include <string>
using namespace std;
class PersonalDetails
{
public:
    string name, address, emailId;
    int phoneNo;
    friend void print();
};
class student : public PersonalDetails
{
public:
    int coursefee;
    void getval(string name, string address, string emailId, int phonoNo, int fee)
    {
        this->name = name;
        this->address = address;
        this->emailId = emailId;
        this->phoneNo = phoneNo;
        coursefee = fee;
    }
    friend void print();
};
class marks : public student
{
public:
    int subjectMarks[5] = {0};
    void getmarks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << endl
                 << "Enter marks " << i + 1 << ": ";
            cin >> subjectMarks[i];
        }
    }
    friend void print();
};
void print(student ob, marks ob1)
{
    cout << endl
         << "*****************************************************" << endl
         << "Name: " << ob.name << endl
         << "Address: " << ob.address << endl
         << "Email Id: " << ob.emailId << endl
         << "Phone No. :" << ob.phoneNo << endl
         << "Course Fees: " << ob1.coursefee << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Marks: " << i + 1 << ": " << ob1.subjectMarks[i] << endl;
    }
    cout << "*****************************************************" << endl;
}
int main()
{
    student ob;
    marks ob1;
    string name, address, emailId;
    int phoneNo, coursefee;
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Address: ";
    getline(cin, address);
    cout << "Enter Email Id: ";
    getline(cin, emailId);
    cout << "Enter Phone No. : ";
    cin >> phoneNo;
    cout << "Enter Course Fees : ";
    cin >> coursefee;
    ob.getval(name, address, emailId, phoneNo, coursefee);
    ob1.getmarks();
    print(ob, ob1);
    return 0;
}
/*string course[5] = {"Science", "Maths", "SST", "English", "Hindi"};
    int coursefee1, coursefee2, coursefee3, coursefee4, coursefee5;
    int coursefee[5] = {0};*/