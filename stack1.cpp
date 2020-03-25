#include <iostream>
#include "stack1.h"

using namespace std;

stack1::stack1(int size) {
maxSize = size;
initializeStack();
list = new int[maxSize];
}

stack1::~stack1() {
delete [] list;
}

void stack1::initializeStack() {
stackTop = -1;
}

bool stack1::isEmpty() const {
return stackTop == -1;
}

bool stack1::isFull() const {
return stackTop == maxSize-1;
}

stack1::stack1(const stack1& otherStack){
maxSize = otherStack.maxSize;
stackTop = otherStack.stackTop;

list = new int[maxSize];

for(int i=0; i<stackTop;i++){
    list[i] = otherStack.list[i];
    }
}

int stack1::top() const{
if(isEmpty()){
    return -1;} else {return list[stackTop];}
}


void stack1::push(int newitem) {
if(!isFull()) {
    stackTop++;
    list[stackTop] = newitem;
} else { cout << "stack is full\n"; }
}

void stack1::pop() {
if(!isEmpty()) {

    stackTop--;
}else {cout << "stack is empty\n" ;}
}

