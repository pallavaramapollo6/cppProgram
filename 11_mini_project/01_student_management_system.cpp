// Topic: Student Management System
// Definition: A mini project combines classes, vectors, functions, and file handling.
// Explanation: This program can add, display, search, update, delete, save, and load student records.

#include <fstream> // Gives file handling.
#include <iostream> // Gives cin and cout.
#include <vector> // Gives vector.
using namespace std; // Uses standard names.

class Student { // Student class.
public:
    int rollNo; // Student roll number.
    string name; // Student name.
    int marks; // Student marks.
};

void addStudent(vector<Student> &students) { // Adds student.
    Student s; // Creates temporary student.
    cout << "Enter roll number: "; // Asks roll number.
    cin >> s.rollNo; // Reads roll number.
    cout << "Enter name: "; // Asks name.
    cin >> s.name; // Reads name.
    cout << "Enter marks: "; // Asks marks.
    cin >> s.marks; // Reads marks.
    students.push_back(s); // Adds record.
}

void displayStudents(const vector<Student> &students) { // Displays all students.
    for (const Student &s : students) { // Visits each student.
        cout << s.rollNo << " " << s.name << " " << s.marks << endl; // Prints record.
    }
}

int findStudentIndex(const vector<Student> &students, int rollNo) { // Searches student.
    for (int i = 0; i < static_cast<int>(students.size()); i++) { // Visits each student.
        if (students[i].rollNo == rollNo) { // Checks roll number.
            return i; // Returns found index.
        }
    }
    return -1; // Not found.
}

void updateStudent(vector<Student> &students) { // Updates student.
    int rollNo; // Roll number to search.
    cout << "Enter roll number to update: "; // Asks roll number.
    cin >> rollNo; // Reads roll number.

    int index = findStudentIndex(students, rollNo); // Finds student.
    if (index == -1) { // Checks not found.
        cout << "Student not found" << endl; // Prints message.
        return; // Stops function.
    }

    cout << "Enter new name: "; // Asks new name.
    cin >> students[index].name; // Updates name.
    cout << "Enter new marks: "; // Asks new marks.
    cin >> students[index].marks; // Updates marks.
}

void deleteStudent(vector<Student> &students) { // Deletes student.
    int rollNo; // Roll number to delete.
    cout << "Enter roll number to delete: "; // Asks roll number.
    cin >> rollNo; // Reads roll number.

    int index = findStudentIndex(students, rollNo); // Finds student.
    if (index == -1) { // Checks not found.
        cout << "Student not found" << endl; // Prints message.
        return; // Stops function.
    }

    students.erase(students.begin() + index); // Deletes record.
    cout << "Student deleted" << endl; // Prints message.
}

void saveStudents(const vector<Student> &students) { // Saves records.
    ofstream file("students.txt"); // Opens file.
    for (const Student &s : students) { // Visits each student.
        file << s.rollNo << " " << s.name << " " << s.marks << endl; // Writes record.
    }
    cout << "Students saved" << endl; // Prints message.
}

void loadStudents(vector<Student> &students) { // Loads records.
    ifstream file("students.txt"); // Opens file.
    Student s; // Temporary student.
    students.clear(); // Clears old records.

    while (file >> s.rollNo >> s.name >> s.marks) { // Reads record.
        students.push_back(s); // Adds record.
    }
}

int main() { // Program starts here.
    vector<Student> students; // Stores all students.
    loadStudents(students); // Loads saved records.
    int choice; // Stores menu choice.

    do { // Menu loop.
        cout << "\n1 Add\n2 Display\n3 Search\n4 Update\n5 Delete\n6 Save\n0 Exit\n";
        cout << "Enter choice: "; // Asks choice.
        cin >> choice; // Reads choice.

        if (choice == 1) { // Add.
            addStudent(students); // Calls add.
        } else if (choice == 2) { // Display.
            displayStudents(students); // Calls display.
        } else if (choice == 3) { // Search.
            int rollNo; // Roll number to search.
            cout << "Enter roll number: "; // Asks roll number.
            cin >> rollNo; // Reads roll number.
            int index = findStudentIndex(students, rollNo); // Finds index.
            if (index == -1) { // Checks not found.
                cout << "Student not found" << endl; // Prints message.
            } else {
                cout << students[index].rollNo << " " << students[index].name << " " << students[index].marks << endl;
            }
        } else if (choice == 4) { // Update.
            updateStudent(students); // Calls update.
        } else if (choice == 5) { // Delete.
            deleteStudent(students); // Calls delete.
        } else if (choice == 6) { // Save.
            saveStudents(students); // Calls save.
        }
    } while (choice != 0); // Repeats until exit.

    saveStudents(students); // Saves before exit.
    return 0; // Ends successfully.
}

