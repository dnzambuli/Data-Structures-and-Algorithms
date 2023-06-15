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
    char peek(){
        if(top == -1){
            std::cout << "Error\nTrying to retrieve data from empty stack"<<std::endl;
            
            return sqrt(-2);
        }
        return Item[top];
    }
    void pop(){
        if(top < 0){
            std::cout << "Underflow:\tcannot pop from an empty stack"<<'\n';
        }
        char popped = Item[top];
        std::cout << "Last element >> "<<popped<<"\nhas been removed\n";
        top --;
    }

};

int main(){
    Balanced myStack;
    std::cout << myStack.isEmpty()<<std::endl;
    std::cout <<myStack.peek()<<std::endl;
    myStack.push('2');
    (myStack.isEmpty()!=1)?std::cout <<  "no longer empty"<<std::endl:std::cout <<  "is empty"<<std::endl;
    std::cout <<myStack.peek()<<std::endl;
    myStack.pop();
    std::cout <<myStack.isEmpty()<<std::endl;
    return 0;
}