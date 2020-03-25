#ifndef STACK1_H_INCLUDED
#define STACK1_H_INCLUDED
class stack1 {
public:
    bool isEmpty() const;
    bool isFull() const;
    void initializeStack();
    stack1(int size);
    stack1(const stack1& otherStack);
    int top() const;
    void push(int newitem);
    void pop();
    ~stack1();

private:
    int maxSize;
    int stackTop;
    int *list;
};


#endif // STACK1_H_INCLUDED
