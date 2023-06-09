# Stacks
a data type that implements the last in first out method of data retrieval
## Operations
- create
- destroy
- determine if empty
- add new item to the stack
- remove item
- retrieve most recent add-on
## Implementation
1. **Array of items**
- **maxStack** the number of items that can be stored in an array stack
- **Top** to keep track of the index of the last element in the stack
2. **Linked Lists**

## Functions using Arrays
1. create
```c++
// Requires that top == 0
createAStack()
```
2. Destroy
 ```c++
destroyAStack()
```
3. check empty
```c++
//return top < 0
isEmpty()
```
4. add a new item into the stack
```c++
// operation does top + 1 = new value
//{items[top] = newElement}
push()
```
5. remove most recent item
```c++
// reduces the top
// top = top - 1
pop()
```
6. retrieve most recent
```c++
peek() // get the last added element in a stack
```