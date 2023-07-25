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
        int nextSong; // tracks the next song in the event shuffle is used
	public:
		// create a playlist
		Player(){
			head = nullptr; // there is no song in the playlist
			current = nullptr; // there is no song playing
		}
		// destroy a playlist when done
		~Player(){
			std::cout  << "Playlist has been removed" << '\n';
		}

		//  check if  a playlist is empty
		bool isEmpty(){// returns true if the head == nullptr
            return head == nullptr;
        } 

        int countSongs(){
            // update the totalSongs when a new song is added
            return totalSongs;
        }

        // shuffle the playlist
        int randomize(){
            TODO:// updates the next song using a random normal/ uniform distribution relative to the song count and the current song index
        }

	    // add a new song to the playlist
		void addSong(const std::string &songName, const std::string &artist, const std::string &album){// remember that song names are unique
	    TODO:// artist names are also unique 
	    // use a constant pointer to prevent the song name form being changed

        }

        // remove song from playlist
        void removeSong(const std::string &songName, const std::string &artist){
            //considering songs have unique names and artists 
            // just the artist and songName are enough to remove a song
        }

        // play current song
        void playCurrent(){
            // loads the resources to play a song
            // plays the song
            if (current != nullptr) {
                std::cout << "Now playing: " << current->data.songName << " - " << current->data.artist << '\n';
            } else {
                std::cout << "Playlist is empty. Add songs to play" << '\n';
            }
        }

        // load and play next song
        void nextSong(){
            // plays the song on the next node
            // used when there is no shuffle
            if (current != nullptr && current->next != nullptr) {
                current = current->next;
                playCurrent();
            } else {
                std::cout << "End of playlist reached." << '\n';
            }
        }

        // check for more music
        bool hasMoreSongs(){
            return current != nullptr && current -> next != nullptr;
        }
};
```