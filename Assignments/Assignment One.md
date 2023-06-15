# Assignment One
## Daniel Mutai
## 665721
## 16-06-2023

1. Develop full specification and implementation of ADT STACK in C++
```c++
#include <iostream>

#include <cmath>

// create the constants and types for a new class

const int MAX_LENGTH = 100; // the max adt array length

typedef int Object;

// create a new stack class

class ArrayStack{

// abstracting internal structure

private:

Object Item[MAX_LENGTH];

Object top;

// implementing the functions related to stacks

public:

// instantiate the stack

ArrayStack(){ // creates a stack

top = - 1; // make sure the stack starts with the first index being less than 0

}
~ArrayStack(){
delete[] Object;
}

bool isEmpty(){

return(top < 0); // if the first index is less than 0 the stack is empty

}

bool push(Object newItem){

bool success = false;

if(top < MAX_LENGTH - 1){

top ++; // increase index to 0 first then add a new element

Item[top] = newItem; // adding new element

success = true;

}else{

std::cout << "stack is full.\n can not add new element" << '\n'; // catch for a full stack

}

return success;

}

// check the last pushed element

int peek(){

if(top == -1){

std::cout << "Stack is empty: can not retrieve from empty stack";

return sqrt(-2);

}

return Item[top];

}

// remove the last element in the stack

void pop(){

if(top < 0){

std::cout << "Underflow: cannot pop element from an empty stack"<< '\n';

}

int popped = Item[top];

std::cout << "Last element >> "<<popped<<"\nhas been removed\n";

top --;

}

}; // remember the collon after the class definition
```
2. Develop a C++ application that uses ADT stack to test for balanced braces in an algebraic expression. For example
```
E= (B+C)(D-7);
```
 it should print out **“expression braces are balanced”**
 
And for
```
E= (B+C)(D-7);
```
it should print out **“expression braces are not balanced”**
```c++
#include <iostream>
#include <cmath>

// check if the brackets are matching
bool isMatching(char openBracket, char closedBracket);

// check for balanced brackets
bool balanced(const std::string& expression);

// create a stack
class balanced{

};
```