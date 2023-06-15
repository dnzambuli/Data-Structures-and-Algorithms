#include <iostream>
#include <cmath>

typedef char Object;
typedef int Track;
const int MAX_LEN = 10;

// check for balanced brackets
bool isBalanced(const std::string& expression);

// create a stack
class Balanced{
// abstract the data
private:
    Object Item[MAX_LEN];
    Track top;
public:

    // constructor for new objects
    Balanced(){
        top = - 1;
    }
    // destructor for stack objects
    ~Balanced(){
        std::cout << "Object has been removed";
    }
    bool isEmpty(){
        return top < 0; // confirm if the top is -1 which means that the stack is empty 
    }
    bool push(char newItem){
        bool success = false;
        if(top< MAX_LEN-1){
            top ++;
            Item[top] = newItem;
            success = true;
        }else{ // if the stack is full
            std::cout << "stack is full"<< std::endl;
        }
        return success;
    }

};

int main(){
    Balanced myStack;
    std::cout << myStack.isEmpty()<<std::endl;
    myStack.push(2);
    (myStack.isEmpty()!=1)?std::cout <<  "no longer empty"<<std::endl:std::cout <<  "is empty"<<std::endl;
    return 0;
}