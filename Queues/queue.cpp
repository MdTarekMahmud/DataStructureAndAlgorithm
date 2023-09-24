#include <iostream>
using namespace std;

struct Node {
   int data;
   struct Node *next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

// Function to enqueue an element into the queue
void enqueue(int val) {
   struct Node* newnode = new Node;
   newnode->data = val;
   newnode->next = NULL;

   if (front == NULL) {
      front = rear = newnode;
   } else {
      rear->next = newnode;
      rear = newnode;
   }
}

// Function to dequeue an element from the queue
void dequeue() {
   if (front == NULL) {
      cout << "Queue is empty. Cannot dequeue." << endl;
   } else {
      struct Node* temp = front;
      cout << "The dequeued element is " << front->data << endl;
      front = front->next;
      delete temp;
   }
}

// Function to display the elements in the queue
void display() {
   if (front == NULL) {
      cout << "Queue is empty." << endl;
   } else {
      struct Node* ptr = front;
      cout << "Queue elements are: ";
      while (ptr != NULL) {
         cout << ptr->data << " ";
         ptr = ptr->next;
      }
      cout << endl;
   }
}

int main() {
   int ch, val;
   cout << "1) Enqueue in queue" << endl;
   cout << "2) Dequeue from queue" << endl;
   cout << "3) Display queue" << endl;
   cout << "4) Exit" << endl;
   do {
      cout << "Enter choice: " << endl;
      cin >> ch;
      switch (ch) {
         case 1: {
            cout << "Enter value to be enqueued: " << endl;
            cin >> val;
            enqueue(val);
            break;
         }
         case 2: {
            dequeue();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout << "Exit" << endl;
            break;
         }
         default: {
            cout << "Invalid Choice" << endl;
         }
      }
   } while (ch != 4);
   return 0;
}

