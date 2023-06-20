#include <iostream>

const int MAX_LEN = 100;
typedef int Object;

class INTARRAY{
  private:
    Object count;
    Object Item[MAX_LEN];
  public:
    INTARRAY(){
        count = 0;
    }
    ~INTARRAY(){
        std::cout << "Array has been deleted"<< '\n';
    }
    bool isEmpty(){
        return count == 0;
    }
    int countElements(){
        return count;
    }
    void insert(Object position, Object newItem){
        // check if the position is less than 0 hence underflow error or greater than count overflow 
        // head and tail dont have predecessors and successors respectively
        int index = position -1;
        if(position< 0 || index > count){
            std::cout << "invalid position"<< '\n';
            return;
        }
        // check if the array is full as elements can not be added to a full array
        if(count == MAX_LEN){
            std::cout << "Overflow:\nArray is Full\n\tCan not add new elements to a full array"<<'\n';
        }
        // insert new items once the above tests are passed
        // remember shift elements to the right to insert
        for(int i = count; i > position;i --){
            Item[i] = Item[i - 1];
        }
        Item[position] = newItem;
        count++;
    }
    bool remove(int position){
        int index = position -1 ;
        bool success = false;
        // check if there is an underflow error or an overflow error
        if( index < 0 || isEmpty() || index >= count){
            std::cout << "invalid position"<< '\n';
            return success;
        }
        // remove the element at position
        for(int i = position; i < count; i ++){
            Item[i] = Item[i+1];
            
        }
        // shorten the arrayitems
        count--;
        success = true;
        return success;
        
    }
    int look(int position){
        int index = position -1;
        if(index < 0 || index >= count || isEmpty()){
            std::cout << "invalid position"<< '\n';
            return -1;
        }
        return Item[position];
        
    }
};

int main() {
    INTARRAY myArray;
    (myArray.isEmpty() == 1)? std::cout << "List is Empty"<< '\n': std::cout << "List is no longer Empty"<< '\n' ;
    std::cout<<"Your array has " << myArray.countElements()<<" elements"<< '\n'; 
    myArray.insert(1, 1);
    (myArray.isEmpty() == 1)? std::cout << "List is Empty"<< '\n': std::cout << "List is no longer Empty"<< '\n' ;
    std::cout<<"Your array has " << myArray.countElements()<<" elements"<< '\n';
    std::cout << myArray.look(1)<<'\n';
    myArray.insert(2, 3);
    std::cout<<"Your array has " << myArray.countElements()<<" elements"<< '\n';
    std::cout << myArray.look(2)<<'\n';
    myArray.insert(3, 4);
    std::cout<<"Your array has " << myArray.countElements()<<" elements"<< '\n';
    std::cout << myArray.look(3)<<'\n';
    // (myArray.remove(2) == 1)? std::cout << "element has been removed"<< '\n': std::cout << "element has not been removed"<< '\n' ;
    myArray.remove(2);
    std::cout<<"Your array has " << myArray.countElements()<<" elements"<< '\n';
    std::cout << myArray.look(1)<<'\n';
    std::cout << myArray.look(2)<<'\n';

    return 0;
}
