#include <string>
#include <iostream>
using namespace std;

class Student {
    private:
        // 1.  Create the class Student in the files student.h and student.cpp, which includes each of the following private variables, using the correct data type for each:
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        int daysInCourse[3];
        enum DegreeProgram {SECURITY, NETWORK, SOFTWARE, Undefined} degreeProgram;

        // constructors w/ default values
        Student::Student() {
            studentID = "Undefined";
            firstName = "Undefined";
            lastName = "Undefined";
            emailAddress = "Undefined";
            age = 0;
            daysInCourse[0] = 0;
            daysInCourse[1] = 0;
            daysInCourse[2] = 0;
            degreeProgram = Undefined;
        }

        // contructors with parameters
        Student::Student() {
            this->studentID = studentID;
            this->firstName = firstName;
            this->lastName = lastName;
            this->emailAddress = emailAddress;
            this->age = age;
            this->daysInCourse[0] = daysInCourse[0];
            this->daysInCourse[1] = daysInCourse[1];
            this->daysInCourse[2] = daysInCourse[2];
            this->degreeProgram = degreeProgram;
        }

        // d.  a print() function to print specific student data in the provided format:
        void PrintFunction() {
            cout << studentID << "\t"; 
            cout << "First Name: " << firstName << "\t";
            cout << "Last Name: " << lastName << "\t";
            cout << "Email: " << emailAddress << "\t";
            cout << "Age: " << age << "\t";
            cout << "daysInCourse: {";
            for (int i = 0; i < 3; ++i) {
            cout << daysInCourse[i];
            if (i < 2) {
                cout << ", ";
            }
            }
            cout << "}\t";
            cout << "Degree Program: " << degreeProgram;
        }

    public:

        // 2a. getters
        string getStudentID() const {
            return studentID;
        }
        string getFirstName() const {
            return firstName;
        }
        string getLastName() const {
            return lastName;
        }
        string getEmailAddress() const {
            return emailAddress;
        }
        int getAge() const {
            return age;
        }
        int getDaysInCourse0() const {
            return daysInCourse[0];
        }
        int getDaysInCourse1() const {
            return daysInCourse[1];
        }
        int getDaysInCourse2() const {
            return daysInCourse[2];
        }
        DegreeProgram getDegreeProgram() const {
            return degreeProgram;
        }

        // 2b. setters
        void setStudentID(string newStudentID) {
            studentID = newStudentID;
        }
        void setFirstName(string newFirstName) {
            firstName = newFirstName;
        }
        void setLastName(string newLastName) {
            lastName = newLastName;
        }
        void setEmailAddress(string newEmailAddress) {
            emailAddress = newEmailAddress;
        }
        void setAge(int newAge) {
            age = newAge;
        }
        void setDaysInCourse(array <int,3> newDaysInCourse) {
            daysInCourse[0] = newDaysInCourse[0];
            daysInCourse[1] = newDaysInCourse[1];
            daysInCourse[2] = newDaysInCourse[2];
        }
        void setDegreeProgram() { // fix this function to refelct proper parameter
            this->degreeProgram = degreeProgram;
        }

};
