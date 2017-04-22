#ifndef INC_02_SELECTION_SORT_USING_TEMPLATE_STUDENT_H
#define INC_02_SELECTION_SORT_USING_TEMPLATE_STUDENT_H

#include<iostream>
#include<string>
using namespace std;
struct Student
{
	string name;
	int score;
	//����С�������������Student֮��ıȽϷ�ʽ
	bool operator<(const Student &otherStudent) {
		return score != otherStudent.score ?
			score > otherStudent.score: name < otherStudent.name;
	}
	//����<<����,����Studentʵ���Ĵ�ӡ�����ʽ
	friend ostream &operator <<(ostream &os, const Student &student) {
		os << "Student:" << student.name << " " << student.score << endl;
		return os;
	}
};



#endif // INC_02_SELECTION_SORT_USING_TEMPLATE_STUDENT_H