#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// Course structure to store course details
struct Course {
    string courseID;
    string title;
    vector<string> prerequisites;
};

// Function to load courses from a file into a map
void loadCourses(const string& filename, map<string, Course>& courses) {
    ifstream file(filename);
    if (!file) {
        cout << "Error: Could not open file." << endl;
        return;
    }
    
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string courseID, title, prereq;
        vector<string> prerequisites;

        getline(ss, courseID, ',');
        getline(ss, title, ',');
        while (getline(ss, prereq, ',')) {
            prerequisites.push_back(prereq);
        }
        
        courses[courseID] = {courseID, title, prerequisites};
    }
    
    file.close();
    cout << "Courses successfully loaded." << endl;
}

// Function to print sorted course list
void printCourseList(const map<string, Course>& courses) {
    cout << "\nCourse List:" << endl;
    for (const auto& pair : courses) {
        cout << pair.first << ": " << pair.second.title << endl;
    }
}

// Function to display course details including prerequisites
void printCourseDetails(const map<string, Course>& courses) {
    cout << "Enter course ID: ";
    string courseID;
    cin >> courseID;
    
    if (courses.find(courseID) != courses.end()) {
        const Course& course = courses.at(courseID);
        cout << "\nCourse ID: " << course.courseID << endl;
        cout << "Title: " << course.title << endl;
        cout << "Prerequisites: ";
        if (course.prerequisites.empty()) {
            cout << "None";
        } else {
            for (const string& prereq : course.prerequisites) {
                cout << prereq << " ";
            }
        }
        cout << endl;
    } else {
        cout << "Course not found." << endl;
    }
}

// Main function with menu
int main() {
    map<string, Course> courses;
    int choice;
    string filename;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Load course data\n";
        cout << "2. Print course list\n";
        cout << "3. Print course details\n";
        cout << "9. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter filename: ";
                cin >> filename;
                loadCourses(filename, courses);
                break;
            case 2:
                printCourseList(courses);
                break;
            case 3:
                printCourseDetails(courses);
                break;
            case 9:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 9);
    
    return 0;
}
