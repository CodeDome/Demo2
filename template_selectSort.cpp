// template_selectSort.cpp : 定义控制台应用程序的入口点。
//
//模板实现算法
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include "stdlib.h"
#include <string>
#include "template_selectSort.h"
using namespace std;
template<typename T>
void template_select(T arr[],int n) {
	for (int i = 0; i < n; i++)
	{
		int minIndex = i;
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}
}

int main()
{
	//整数类型
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	template_select(arr,10);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//浮点数类型
	float arrFloat[10] = { 1.1,9.4,2.6,7.6,5.5,1.33,9.8,3.1,2.1,1.5 };
	template_select(arrFloat, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arrFloat[i] << " ";
	}
	cout << endl;

	//浮点数类型
	string arrString[4] = { "D","C","B","A" };
	template_select(arrString, 4);
	for (int i = 0; i < 4; i++)
		cout << arrString[i] << " ";
	cout << endl;

	//自定义结构体数组
	Student st[4] = {
		{"D",90},
		{"C",100},
		{"B",80},
		{"C",99}
	};
	template_select(st, 4);
	for (int i = 0; i < 4; i++)
	{
		cout << st[i];
		cout << endl;
	}

	system("pause");
    return 0;
}

