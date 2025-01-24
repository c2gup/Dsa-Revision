#include <bits/stdc++.h>
using namespace std;

class Stacck {
private:
    int topIndex;
    int* arr;
    int stackSize;

public:
    // Constructor
    Stacck(int x) {
        topIndex = -1;
        stackSize = x;
        arr = new int[stackSize];
    }

    // Push method
    void push(int n) {
        if (topIndex == stackSize - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        topIndex++;
        arr[topIndex] = n;
    }

    // Pop method
    int pop() {
        if (topIndex == -1) {
            cout << "Stack underflow" << endl;
            return -1;
        }
        int x = arr[topIndex];
        topIndex--;
        return x;
    }

    // Size method
    int size() {
        return topIndex + 1;
    }

    // Top method
    int top() {
        if (topIndex == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[topIndex];
    }

    // Destructor
    ~Stacck() {
        delete[] arr;
    }
};

int main() {
    cout << "Anupam Gupta" << endl;

    Stacck s(5);
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Top element: " << s.top() << endl;

    int ans = s.pop();
    cout << "Popped element: " << ans << endl;

    cout << "Current size: " << s.size() << endl;

    // Edge case testing
    s.pop();
    s.pop();
    s.pop(); // Stack underflow

    return 0;
}
