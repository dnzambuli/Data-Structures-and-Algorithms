# Function Arguments by Reference

Arguments are fed values in functions. 

Actions on functions are just encapsulated within the scope of the function 

```c++
void addone(int n){
    n++;
}
int main(void){
    int n = 0;
    std::cout << "Before addone n = " << n << '\n';
    addone(n)
    std::Cout << "After addone n = " << n << '\n';
}
```

**output**
```
>> Before addone n = 0
>> After addone n = 0
>>
```

***notice*** because n is not defined within the scope of addone it is notmodified by the addone function

## Passing by Reference

To solve this n can be redefined within the function and returned as a value 

However to simplify the process, passing by reference is a functionality of c++

```c++
void addone(int *n){
    // points to an address outside the function scope
    (*n)++; // increments the value from outside the function
}
int main(void){
    int n = 0;
    std::cout << "Before addone n = " << n << '\n';
    addone(n)
    std::Cout << "After addone n = " << n << '\n';
}
```

**output**
```
>> Before addone n = 0
>> After addone n = 1
>> 
```

## Structure Pointers 

This helps to modify the elements of a struct by passing a pointer to the parent structure

```c++
struct point{
 float x;
 float y;
};

void move(point *p){
    (*p).x++;
    (*p).y++;
}
```

Short hand for this is achieved using 

```c++
void move(point *p){
    p -> x++;
    p -> y++;
}
```