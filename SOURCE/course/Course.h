#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
#include "../person/Faculty.h"
using namespace std;



    void enrollStudent() {
        if (enrolledCount >= maxCapacity)
            throw 1;
        enrolledCount++;
    }

    friend ostream& operator<<(ostream& out, const Course& c) {
        out << "\nCourse Code  : " << c.courseCode << endl;
        out << "Course Name  : " << c.courseName << endl;
        out << "Credit Hours : " << c.creditHours << endl;
        out << "Capacity     : " << c.enrolledCount << "/" << c.maxCapacity << endl;
        return out;
    }
};
#endif
