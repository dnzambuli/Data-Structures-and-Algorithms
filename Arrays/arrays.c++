#include <iostream>

typedef int Object ;
const int MAX_LEN = 100;

// define an adt array 
class INTARRAY{
    // abstract the definitioins of the array
    private:
        Object ArrayItem[MAX_LEN];
        Object top;
    public:
        INTARRAY(){
            top = -1;
        }
        ~INTARRAY(){
            std::cout<< "Object has been removed"<<'\n';
        }
        bool isEmpty(){
            return top < 0;
        }
        
        bool insertElement(Object newItem){
            bool success = false;
            if( top < MAX_LEN -1){
                top ++;
                ArrayItem[top] = newItem;
                success = true;
            }
            return success;
        }
        
};

int main() {
    //
    INTARRAY myArray;
    
    (myArray.isEmpty() == 1)? std::cout << "Array is empty"<< '\n': std::cout << "Array is not empty"<< '\n';
    myArray.insertElement(2);
    (myArray.isEmpty() == 1)? std::cout << "Array is empty"<< '\n': std::cout << "Array is not empty"<< '\n';

    return 0;
}
