#ifndef INC_02_SELECTION_SORT_USING_TEMPLATE_STUDENT_H
#define INC_02_SELECTION_SORT_USING_TEMPLATE_STUDENT_H

#include<iostream>
#include<string>
using namespace std;
struct Student
{
	string name;
	int score;
	//重载小于运算符，定义Student之间的比较方式
	bool operator<(const Student &otherStudent) {
		return score != otherStudent.score ?
			score > otherStudent.score: name < otherStudent.name;
	}
	//重载<<符号,定义Student实例的打印输出方式
	friend ostream &operator <<(ostream &os, const Student &student) {
		os << "Student:" << student.name << " " << student.score << endl;
		return os;
	}
};



#endif // INC_02_SELECTION_SORT_USING_TEMPLATE_STUDENT_H
