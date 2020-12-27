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
	stack<double> nums;		//������ջ
	stack<char>opters;		//������ջ
	string expression;		//��׺���ʽ
	double temp = 0;


public:
Caculate(string expression){
		this->expression = expression;
}
	
	//������
public:
double caculate() {
		int i = 0;
		//��#��ջ
		opters.push('#');
		while (expression[i] != '#' || opters.top() != '#') {
			//����ǲ���������ջ
			if (!this->isOpters(expression[i])) {
				temp = expression[i] - 48;
			    while (!this->isOpters(expression[i + 1])) {
					temp = temp * 10 + (expression[i + 1] - 48);
					i++;
				}
				nums.push(temp);
				i++;
			}
			//����ǲ�����������ջ�����űȽ����ȼ����������Ƿ����
			else if (this->isOpters(expression[i])) {
				switch (this->compare(opters.top(), expression[i])) {
				case '<':                                                    //ջ��Ԫ�����ȼ��ͣ�������ջ
					opters.push(expression[i]);
					i++;
					break;
				case '=':                                                    //���ȼ���ȣ���ջ,����ȥһ������
					opters.pop();
					i++;
					break;
				case '>':                                                    //ջ��Ԫ�����ȼ��ߣ����㲢����������ջ
					double opval2 = nums.top();
					nums.pop();
					double opval1 = nums.top();
					nums.pop();
					//����������ջ
					double result = this->caculate(opval1, opters.top(), opval2);
					nums.push(result);
					//���������
					opters.pop();
					break;
				}
			}
		}
		//������󷵻�ջ��Ԫ��
		cout << nums.top() << endl;
		return nums.top();
	}
	//�����������Ľ��
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
			cout << "����������";
			return 0;
		}
	}
public:
	//�жϱ��ʽ��ǰָ��Ϊ�����
bool isOpters(char opters) {
		return(opters == '+' ||
			opters == '-' ||
			opters == '*' ||
			opters == '/' ||
			opters == '(' ||
			opters == ')' ||
			opters == '#') ? true : false;

	}

public://�Ƚϲ��������ȼ���op2���ȼ��ϴ�
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
				cout << "������ʽ����";
				return ERROR;
			
			}
		}
		else if (op1 == ')') {
			if (op2 == '+' || op2 == '-' || op2 == '*' || op2 == '/' || op2 == ')' || op2 == '#') {
				return 1;
			}
			else if (op2 == '(') {
				cout << "������ʽ����";
				return ERROR;
			}
		}
		else if (op1 == '#') {
			if (op2 == ')') {
				cout << "������ʽ����";
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