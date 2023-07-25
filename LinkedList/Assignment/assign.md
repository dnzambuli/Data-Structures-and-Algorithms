## Nzambuli Daniel

## 665721

## APT2060

## ASSIGNMENT ON APPLICATIONS OF ADT LINKED LIST

### Problem 1
**Describe THREE real world applications that can be constructed using ADT Linked List.**

1.  **Music Players -** music data is stored in nodes. These nodes are linked when songs are queued in a playlist. When one song ends, the resources dedicated to play the song are released and the next node is loaded 
2.  **Map Applications -** maps use linked lists to allow for routes to be set by connecting nodes ensuring the shortest length of the list representing the route path weigh-points. The linked lists allow the addition of new wait-points more efficiently. 
3. **Operating Systems Memory Scheduler-** operating systems use linked lists to track free memory addresses, and also to schedule tasks and remove them from the sequence of tasks to be executed.

## Problem 2
**For one on the three applications described above, Describe it as an ADT and develop simple ADT specification for it in C++**
  ```c++
  #include <iostream>
  
// struct to store the song details
struct Song{
	std::string songName;
	std::string artist;
	std::string album;
};

// a node to store song data 
struct Node{
	Song data;
	Node *next;
};

// create the music player 
class Player{
	private:
		Node *head; // the first song in a playlist
		Node *current; // the song that is playing
		int totalSongs; // all songs in a playlist
	public:
		// create a playlist
		Player()
		// destroy a playlist when done
		~Player()
};
```