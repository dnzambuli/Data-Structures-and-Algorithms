#include <iostream>

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
            return(top < 0) // if the first index is less than 0 the stack is empty
        }
        bool push(object newItem){
            success = false;
            if(top < MAX_LENGTH - 1){

            }
        }

}

int main(){
    return 0;
}