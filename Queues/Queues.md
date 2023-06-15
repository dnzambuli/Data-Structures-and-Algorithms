# Queue

The item inserted into the queues first is the first to leave

ie.

- First in First Out **(FIFo)**

implemented in  

- lines to a movie
- in a company to print documents at a print press
- computer hardware to process data in a computer CPU
- studying how fast a program works
- ``queue-ing`` servers that send messages from backs
- airport runway and terminal line up 

## Operations of a Queue
- create an empty queue
- destroy a queue
- determine emptiness
- add a new item
- remove from the queue ***remember*** ``FiFo``
- retrieve item ***remember*** ``FiFo``

```
remove - delete item
retrieve - just show don't delete
```

## Functions

check emptiness
```c++
isEmpty()
```
add item to the back
```c++
enqueue()
``` 
remove and retrieve
```c++
dequeue() // overloaded to either retrieve or delete
```
get the front of the queue
```c++
getFront() // tracks the queueFront
```

## discoveries

data addition and removal from a queue is unidirectional.

## Specifications
1. New items enter at the back of the queue
2. items exit from the front of the queue
3. supports ``FIFO``

## Implementation
```c++
/*
add a new queue object
createQueue();

destroy a queue
~destroyQueue();
determine emptiness

bool isEmpty();
add new item 

bool enqueue(Object newItem);
remove an item

void dequeue(Object &frontItem, bool &success);
retrieve

void getFront(Object &frontItem, bool &success);

*/
```