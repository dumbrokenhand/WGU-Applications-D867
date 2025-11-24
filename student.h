#include <string>
#include <iostream>
using namespace std;

class Student {
    private:
        // E. variables for Student Class
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

        // print function
        void Student::print() {
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
        };
        string getFirstName() const {
            return firstName;
        };
        string getLastName() const {
            return lastName;
        };
        string getEmailAddress() const {
            return emailAddress;
        };
        int getAge() const {
            return age;
        };
        int getDaysInCourse0() const {
            return daysInCourse[0];
        };
        int getDaysInCourse1() const {
            return daysInCourse[1];
        };
        int getDaysInCourse2() const {
            return daysInCourse[2];
        };
        string getDegreeProgram() const {
            return degreeProgram;
        };

        // 2b. setters
        void setStudentID() {
            this->studentID = studentID;
        };
        void setFirstName() {
            this->firstName = firstName;
        };
        void setLastName() {
            this->lastName = lastName;
        };
        void setEmailAddress() {
            this->emailAddress = emailAddress;
        };
        void setAge() {
            this->age = age;
        };
        void setDaysInCourse() {
            this->daysInCourse[0] = daysInCourse[0];
            this->daysInCourse[1] = daysInCourse[1];
            this->daysInCourse[2] = daysInCourse[2];
        };
        void setDegreeProgram() {
            this->degreeProgram = degreeProgram;
        };

};