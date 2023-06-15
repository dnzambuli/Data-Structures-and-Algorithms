#include <iostream>
#include <cmath>

typedef char Object;
typedef int Track;
const int MAX_LEN = 10;

// check for balanced brackets
bool checkBalanced(const std::string& expression);

// print desired output
void isBalanced(bool checkBalancedReturnVal);

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
        std::cout << "Object has been removed"<<'\n';
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
    // store user input
    std::string expression;

    // get user input
    std::cout << "Enter equation"<<'\n';
    std::getline(std::cin, expression);

    // confirm working
    isBalanced(checkBalanced(expression));

    return 0;
}


// function definition
bool checkBalanced(const std::string& expression){
    // instantiate the stack
    Balanced myStack;

    // loop through the expression
    for(char i : expression){
        if(i == '('|| i == '[' || i == '{'){
            myStack.push(i); // add new element to the stack and anticipate the closing bracket
        }else if (i == ')'|| i == ']' || i == '}'){ // means that there should be an opening bracket already in the stack
            if(myStack.isEmpty()){ // there is no opening bracket
                return false;
            }
            // if there is an opening bracket pop the stack and begin iterating again
            myStack.pop();
        }
    }
    return myStack.isEmpty(); // 1 means there is an open bracket without a closing bracket and 0 means the brackets are matched
}

void isBalanced(bool checkBalancedReturnVal){
    if(checkBalancedReturnVal){
        std::cout << "Brackets are balanced"<<'\n';
    }else{
        std::cout << "Expression braces are not balanced." << std::endl;
    }
}