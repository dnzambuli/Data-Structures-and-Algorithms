// Online C++ compiler to run C++ program online
#include <iostream>

const int Max_List = 100;

// user defined type
// Objects will now be type int 
typedef int Object;


// class to define the array list
// abstracting 
// makes the methods public and the data structure is private
class ArrayList{
   
    private: 
     // all data variables about the data structure
     Object Items[Max_List];
     int size;
     
    
    public:
    // all the methods that impact the data structure
    
    // define a constructor
    // must have the same name as the datatype
    ArrayList(){
        size = 0; // creates an array list of size 0
    }
    
    // create insert method
    bool insert(Object NewItem, int position){
        bool success = false;
        if ((position > 0) && (size< Max_List)){
            success = true;
            for(int i = size; i >= position; i --){
                // create gap where to insert element
                Items[i] = Items[i-1];
            }
            // insert at new gap
            Items[position - 1] = NewItem;
            size ++;
        }
        return success;
    }
    
    
};

// 
// void printArr(ArrayList arr[], int size){
//         for(int i = 0;i <= size; i ++){
//             std::cout << arr[i]<< " ";
//         }
//         std::cout << '\n';
//     }

int main() {
    // Write C++ code here
    ArrayList myList;
    bool outcome;
    outcome = myList.insert(45, 1);
    std::cout << outcome<< std::endl;
    // printArr(myList, Max_List);

    return 0;
}
