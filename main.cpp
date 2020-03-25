#include <iostream>
#include "stack1.h"

using namespace std;

int main()
{
stack1 myStack(5);
myStack.push(23);
myStack.push(18);
myStack.push(2);
 myStack.push(53);
 myStack.push(97);


cout << myStack.top() << endl;
cout << myStack.isFull() << endl;
cout << myStack.isEmpty() << endl;




    return 0;
}
