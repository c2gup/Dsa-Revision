// #include <iostream>
// #include <stdio.h>
// #include <vector>
// using namespace std;

// class Node
// {

// public:
//       int data;
//       Node* next;
//       Node* back;

// public:
//      Node(int data,Node*next1,Node*back1){
//        this->data = data;
//        this->back = back1;
//        this->next = next1;
//      }
// public:
//      Node(int data){
//        this->data = data;
//        this->back = nullptr;
//        this->next = nullptr;
//      }

      
// };



// void printLinkList(Node*head){
//       Node* temp = head;
//       while (temp->next != nullptr)
//       {
//             cout<<temp->data<<"-";
//             temp = temp->next;
//       }
      
// };


// Node* converArr2dll(vector<int>&arr){
//      Node* head = new Node(arr[0]);
//      Node* curr = head;


//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node* temp = new Node(arr[i]);
//         curr->next = temp;
//         temp->back = curr;
//         curr = temp;
      
//     }
    
//      return head;
// }


// int main(){

//       cout<<"Anupam Gupta"<<endl;
//       vector<int>arr = {1,2,3,4,4,};

//       Node* ans =converArr2dll(arr);
//       printLinkList(ans);

//       return 0;
// }


#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;

int maxAdjacentDistance(vector<int>& nums) {
    int n = nums.size();
    cout<<"the size of the arry "<<n<<endl;
    if (n < 2) return 0; // If fewer than 2 elements, no adjacent elements exist

    int maxDiff = 0;

    // Iterate through the array and calculate the difference between adjacent elements
    for (int i = 0; i < n; ++i) {
        int diff = abs(nums[i] - nums[(i + 1) % n]); // Use modulo for circular behavior
        maxDiff = max(maxDiff, diff);
    }

    return maxDiff;
}

int main() {
    vector<int> nums1 = {1, 2, 4};
    cout << "Maximum Difference (Example 1): " << maxAdjacentDistance(nums1) << endl; // Output: 3

    vector<int> nums2 = {-5, -10, -5};
    cout << "Maximum Difference (Example 2): " << maxAdjacentDistance(nums2) << endl; // Output: 5

    return 0;
}
