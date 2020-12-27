#pragma once
//#ifndef calculator
//#define calculator
#include<iostream>
#include<stdlib.h>
#include<stack>
using namespace std;

class Caculate {
public:
	//static const char ERROR = 'E';
	stack<double> nums;		//操作数栈
	stack<char>opters;		//操作符栈
	string expression;		//中缀表达式
	double temp = 0;


public:
Caculate(string expression){
		this->expression = expression;
}
	
	//计算结果
public:
double caculate() {
		int i = 0;
		//将#入栈
		opters.push('#');
		while (expression[i] != '#' || opters.top() != '#') {
			//如果是操作数则入栈
			if (!this->isOpters(expression[i])) {
				temp = expression[i] - 48;
			    while (!this->isOpters(expression[i + 1])) {
					temp = temp * 10 + (expression[i + 1] - 48);
					i++;
				}
				nums.push(temp);
				i++;
			}
			//如果是操作符，则与栈顶符号比较优先级，来决定是否计算
			else if (this->isOpters(expression[i])) {
				switch (this->compare(opters.top(), expression[i])) {
				case '<':                                                    //栈顶元素优先级低：符号入栈
					opters.push(expression[i]);
					i++;
					break;
				case '=':                                                    //优先级相等：出栈,则消去一对括号
					opters.pop();
					i++;
					break;
				case '>':                                                    //栈顶元素优先级高：计算并将计算结果入栈
					double opval2 = nums.top();
					nums.pop();
					double opval1 = nums.top();
					nums.pop();
					//将计算结果入栈
					double result = this->caculate(opval1, opters.top(), opval2);
					nums.push(result);
					//弹出运算符
					opters.pop();
					break;
				}
			}
		}
		//计算完后返回栈顶元素
		cout << nums.top() << endl;
		return nums.top();
	}
	//计算两个数的结果
public:
	double caculate(double a, char opters, double b) {
		if (opters == '+') {
			return a + b;
		}
		else if (opters == '-') {
			return a - b;
		}
		else if (opters == '*') {
			return a * b;
		}
		else if (opters == '/') {
			return a / b;
		}
		else {
			cout << "操作符有误！";
			return 0;
		}
	}
public:
	//判断表达式当前指向为运算符
bool isOpters(char opters) {
		return(opters == '+' ||
			opters == '-' ||
			opters == '*' ||
			opters == '/' ||
			opters == '(' ||
			opters == ')' ||
			opters == '#') ? true : false;

	}

public://比较操作符优先级，op2优先级较大
	char compare(char op1, char op2) {
		if (op1 == '+' || op1 == '-') {
			if (op2 == '+' || op2 == '-' || op2 == ')' || op2 == '#') {
				return '>';
			}
			else {
				return '<';
			}
		}
		else if (op1 == '*' || op1 == '/') {
			if (op2 == '(') {
				return '<';
			}
			else {
				return '>';
			}
		}
		else if (op1 == '(') {
			if (op2 == '+' || op2 == '-' || op2 == '*' || op2 == '/' || op2 == '(') {
				return '<';
			}
			else if (op2 == ')') {
				return '=';
			}
			else {
				cout << "输入表达式有误";
				return ERROR;
			
			}
		}
		else if (op1 == ')') {
			if (op2 == '+' || op2 == '-' || op2 == '*' || op2 == '/' || op2 == ')' || op2 == '#') {
				return 1;
			}
			else if (op2 == '(') {
				cout << "输入表达式有误";
				return ERROR;
			}
		}
		else if (op1 == '#') {
			if (op2 == ')') {
				cout << "输入表达式有误";
				return ERROR;

			}
			else if (op2 == '#') {
				return 0;
			}
			else {
				return '<';
			}
		}
	}
};



//#endif