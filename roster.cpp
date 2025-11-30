#include <string>
#include <iostream>
#include <array>
#include "student.h"
using namespace std;


// F.  Create a Roster class (roster.cpp) by doing the following:
class Roster {
    //1.  Create an array or vector of pointers named classRosterArray to hold the data provided in the "studentData Table."
    private:
        std::array <Student*, 5> classRosterArray {
            Student ("A1", "John", "Smith", "John1989@gmail.com", 20, 30, 35, 40, SECURITY);
            Student ("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
            Student ("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
            Student ("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
            Student ("A5", "Jackson", "Collins", "jcoll140@wgu.edu", 31, 20, 30, 40, SOFTWARE);
        };

        // 2.  Create a student object for each student in the data table and populate classRosterArray.
        // a.  Parse each set of data identified in the "studentData Table."
        // b.  Add each student object to classRosterArray.

        


    public:
    // sets the instance variables from part D1 and updates the roster
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
        Student* student = new Student();
        student->setStudentID(studentID);
        student->setFirstName(firstName);
        student->setLastName(lastName);
        student->setEmailAddress(emailAddress);
        student->setAge(age);
        student->setDaysInCourse(daysInCourse1, daysInCourse2, daysInCourse3);
        student->setDegreeProgram(degreeProgram);
    }
    //b. removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found
    void remove(string studentID) {
        for (int=0; i<classRosterArray.size(); ++i) {
            if (classRosterArray[i]->getStudentID() == studentID) {
                delete classRosterArray[i];
            }
            else {
                cout << "Error: No student with ID " << studentID << " exists." << "\n";
            }
        }
    }

    // c. loops through all the students in classRosterArray and calls the print() function for each student
    void printAll() {
        for (i=0, i<classRosterArray.size(); ++i) {
            classRosterArray[i]->printFunction();
        }
    } 



}
