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

void DeletLinlistAthead(Node* &head){
     
      
     Node* temp = head;
     head = head->next;

     delete temp;


}


void DeleteFromeTail(Node* &head){
      Node* temp = head;
      Node* del = new Node();

      while(temp->next->next != NULL  ){
            temp = temp->next;

      }

      del = temp->next;
      temp->next = NULL;
      delete del;
}



int main(){

   std::cout << "Anupam gupta" << std::endl;
    Node* fist = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);


    fist->next = second;
    second->next = third;

    PrintLinkList(fist); 
//     DeletLinlistAthead(fist); 
DeleteFromeTail(fist);
    PrintLinkList(fist); 
   

     


      return 0;
}
