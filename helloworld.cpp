/*************************************************************************
	> File Name: helloworld.cpp
	> Author: Cao Zhenghui
	> Mail: 97njczh@gmail.com 
	> Created Time: Tue 22 May 2018 03:20:19 PM CST
 ************************************************************************/

#include<iostream>

using namespace std;

const int FUNC_ID = 1;

extern "C" void Print()
{
	cout << "Hello World!" << endl;
}

// 使用extern “C”使的导出的函数名称和实际名称一致
extern "C" void Help()
{
	cout << "Function ID: " << FUNC_ID << ".This function will print \'Hello world\'." << endl;
}