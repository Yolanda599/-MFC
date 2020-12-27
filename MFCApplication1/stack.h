 struct SqStack {
	    char data[maxsize];
	    int top;
	
 };
 struct SqStackN {
	    double data[maxsizen];
	    int top;
	
 };
 //栈操作函数—字符
 void initStack(SqStack *&s);
 bool Push(SqStack *&s, char e);
 bool Pop(SqStack *&s, char &e);
 bool GetTop(SqStack *s, char &e);
 void DestroyStack(SqStack *&s);
 bool StackEmpty(SqStack *s);
 //栈操作函数—数字
 void initStack(SqStackN *&s);
 bool Push(SqStackN *&s, double e);
 bool Pop(SqStackN *&s, double &e);
 bool GetTop(SqStackN *s, double &e);
 void DestroyStack(SqStackN *&s);
 bool StackEmpty(SqStackN *s);
 
 //后缀表达式转换函数
  void trans(char* exp, char postexp[]);
 //计算后缀表达式函数
double calculate(char* postexp);
