#include <iostream>
#include <stdio.h>
using namespace std; 

class Node
{

public:
      int data;
      Node* next;

      Node(){
            this->next = NULL;
      };
      Node(int data){
            this->data = data;
            this->next = NULL;
      };
};


void PrintLinkList(Node* head){
      Node* temp = head;

      while (temp != NULL)
      {
           std::cout<<temp->data<<"->";
           temp = temp->next; 
      }

      std::cout<<" "<<endl;
      
}


// Linklist Length

int length(Node *head){

      int count = 0;
      Node *temp = head;
      while (temp != NULL)
      {
           count++;
           temp = temp->next;
      }


      return count;
      
}

void insertAthead(int data,Node*& head){
      Node* temp = new Node(data);
      temp->next = head;
      head = temp; 
     
}
void insertAtTial(int data,Node*& head){
      Node* temp = new Node(data);
        Node* last = head;
    while (last->next != NULL) { 
        last = last->next;
    }
    
    last->next = temp; 
        
     
}


void insertatPosition(Node*& head, int position , int data){
      Node* temp = head;
      Node* newNode = new Node(data);
      Node* pre = NULL;
      Node* curr = head;


      while(position != 1){
            
         pre = curr;
         curr = curr->next;
         position--;
            
      }

      pre->next = newNode;
      newNode->next = curr;
}

int main() {
    std::cout << "Anupam gupta" << std::endl;
    Node* fist = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);


    fist->next = second;
    second->next = third;

    PrintLinkList(fist); 
    int ans = length(fist);
    cout<<"This is the length of the linklist --->"<<ans<<endl;

    cout<<"Try to insert at head";
    insertAthead(5,fist);

     PrintLinkList(fist); 
    int ans2 = length(fist);
    cout<<"This is the length of the linklist --->"<<ans2<<endl;


    insertAtTial(50,fist);
     PrintLinkList(fist); 
    int ans3 = length(fist);
    cout<<"This is the length of the linklist --->"<<ans3<<endl;

    insertatPosition(fist,2,1000);
     PrintLinkList(fist); 
    int ans4 = length(fist);
    cout<<"This is the length of the linklist --->"<<ans4<<endl;

    


   
    return 0;
}