//******************************************************************************
//A program that computes postfix expressions
//******************************************************************************

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int doMath(char op, double op1, double op2){
	if(op == '*'){
		return op1 * op2;
	}
	else if(op == '/'){
		if(op1 == 0){
			cout<<"Cannot divide by zero.  Undefined Error."<<endl;
		}
		else{
			return op1 / op2;
		}
	}
	else if(op == '%'){
		if(op1 == 0){
			cout<<"Cannot divide by zero. Undefined Error."<<endl;
		}
		else{
			return op1 / op2;
		}
	}
	else if(op == '+'){
		return op1 + op2;
	}
	else if(op == '-'){
		return op1 - op2;
	}
}

int postFixEval(string input){
	std::stack<char> ob;//creates the stack
	int length = input.length();
 	double operand2;
	double operand1;
	double result;
	int count;
	double finalResult;

	for(int i = 0; i < length; i++){
    char object1 = input[i];
		if(object1 >= '0' && object1 <= '9'){
			ob.push(object1);
			cout<<"The current top element is: "<<ob.top()<<endl;
		}
		else{
			count++;
		 	operand2 = ob.top() - 48;//ASCII fix
			ob.pop();
		 	operand1 = ob.top() - 48;//ASCII fix
			ob.pop();
			cout<<" "<<operand1<<" (+ - * /) "<<operand2<<endl;
			result = doMath(object1, operand1, operand2);
			ob.push(result);
		}
	}
	finalResult = ob.top();
	count -= 1;//removes the counter from counting a blank space
	cout<<"Total number of expressions counted: "<<count<<endl;
	return finalResult;
}

int main(){
	char choice;
	do{
		int result;
		string postfix = "";
		cout<<"Input postfix expression: ";
		cin>>postfix;
		result = postFixEval(postfix);
		cout<<"The result is = "<<result<<endl;
		cout<<"Would you like to evalulate another expression, Y(yes) or N(no): ";
		cin>>choice;
	}while(choice == 'Y');
	return 0;
}
