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
        ArrayStack(){
            top = - 1; // make sure the stack starts with the first index being less than 0
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
            std::cout << "Last element >> "<<popped<<"\nhas been removed";
            top --;

        }

}; // remember the collon after the class definition

int main(){
    ArrayStack myStack;// new stack object
    std::cout << "check new stack is empty"<< '\n';
    std::cout << myStack.isEmpty()<< '\n';
    std::cout << "confirm new element has been added"<< '\n';
    std::cout << myStack.push(3)<< '\n';
    myStack.push(4);
    myStack.push(5);
    myStack.push(6);
    std::cout << "confirm stack is nolonger empty"<< '\n';
    std::cout << myStack.isEmpty()<< '\n';
    std::cout << "check value of last added element"<< '\n';
    std::cout << myStack.peek()<< '\n';
    myStack.pop();

    return 0;
}