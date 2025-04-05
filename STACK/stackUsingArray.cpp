// CPP Code to demonstrate stack

#include<iostream>
using namespace std;

#define MAX 10
int top = -1;
int stack[MAX];

//push element into the stack
void push(int val){
	if(top == MAX - 1){
		cout << "Stack overflow ! Cannot push element" << endl;
	}
	else{
		top = top + 1;
		stack[top] = val;
		cout << "Pushed " << val << " into the stack" << endl;
	}
}

// pop element from the stack
void pop(){
	if(top == -1){
		cout << "Stack underflow ! Cannot pop element" << endl;
	}
	else{
		int poppedElement = stack[top];
		top = top - 1;
		cout << "Popped element is " << poppedElement << endl;
	}
}

// display the stack
void display(){
	int i;
	cout << "Stack elements are: " << endl;
	for(i = top; i >= 0; i--){
		cout << stack[i] << endl;
	}
}

// peek element from the stack
void peek(){
	if(top == -1){
		cout << "Stack underflow ! Cannot peek element" << endl;
	}
	else{
		int peekElement = stack[top];
		cout << "Peeked Element is " << peekElement << endl;
	}
}

// check if stack is empty or not
void isEmpty(){
	if(top == -1){
		cout << "Stack is empty" << endl;
	} else{
		cout << "Stack is not empty" << endl;
	}
}

// check if stack is full or not
void isFull(){
	if(top == MAX - 1){
		cout << "Stack is full" << endl;
	}
	else{
		cout << "Stack is not full" << endl;
	}
}

int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	display();
	pop();
	pop();
	isEmpty();
	peek();
	display();
	return 0;
}
