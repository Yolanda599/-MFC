 struct SqStack {
	    char data[maxsize];
	    int top;
	
 };
 struct SqStackN {
	    double data[maxsizen];
	    int top;
	
 };
 //ջ�����������ַ�
 void initStack(SqStack *&s);
 bool Push(SqStack *&s, char e);
 bool Pop(SqStack *&s, char &e);
 bool GetTop(SqStack *s, char &e);
 void DestroyStack(SqStack *&s);
 bool StackEmpty(SqStack *s);
 //ջ��������������
 void initStack(SqStackN *&s);
 bool Push(SqStackN *&s, double e);
 bool Pop(SqStackN *&s, double &e);
 bool GetTop(SqStackN *s, double &e);
 void DestroyStack(SqStackN *&s);
 bool StackEmpty(SqStackN *s);
 
 //��׺���ʽת������
  void trans(char* exp, char postexp[]);
 //�����׺���ʽ����
double calculate(char* postexp);
