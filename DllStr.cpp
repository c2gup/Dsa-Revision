#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

class Node
{

public:
      int data;
      Node* next;
      Node* back;

public:
     Node(int data,Node*next1,Node*back1){
       this->data = data;
       this->back = back1;
       this->next = next1;
     }
public:
     Node(int data){
       this->data = data;
       this->back = nullptr;
       this->next = nullptr;
     }

      
};



void printLinkList(Node*head){
      Node* temp = head;
      while (temp->next != nullptr)
      {
            cout<<temp->data<<"-";
            temp = temp->next;
      }
      
};


Node* converArr2dll(vector<int>&arr){
     Node* head = new Node(arr[0]);
     Node* curr = head;


    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        curr->next = temp;
        temp->back = curr;
        curr = temp;
      
    }
    
     return head;
}


int main(){

      cout<<"Anupam Gupta"<<endl;
      vector<int>arr = {1,2,3,4,4,};

      Node* ans =converArr2dll(arr);
      printLinkList(ans);

      return 0;
}
