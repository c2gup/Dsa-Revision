#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
      int top;
      int size;

      int *arr;

public:
      Stack(int x)
      {
            this->size = x;
            arr = new int[size];
            this->top = -1;
      }

      void push(int x)
      {
            if (top == size - 1)
            {

                  cout << "Full hai ji";
                  return;
            };

            top = top + 1;

            arr[top] = x;
      };

      int Size()
      {

            return top + 1;
      }

      int pop()
      {
            if (top == -1)
            {
                  cout << "stack is empty" << endl;
                  return -1;
            }

            int x = arr[top];
            top--;

            return x;
      }

      int Top()
      {
            if (top == -1)
            {
                  cout << "stack is empty " << endl;
                  return -1;
            }

            return arr[top];
      }
};

int main()
{

      Stack st(5);
      st.push(20);
      st.push(20);
      st.push(20);
      st.push(200);
      int tops = st.Top();
      int size = st.Size();

      cout << "anupam gupta" << "->" << size<<endl;
      cout << "top is here ->"  << tops<<endl;
      return 0;
}
