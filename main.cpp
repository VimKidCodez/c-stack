#include<bits/stdc++.h>
using namespace std;
int main(){
    stack <int> Stack;

    // Stack size
    cout << Stack.size() << endl; // Output = 0

    // Pushing data into the stack
    Stack.push(23);

    cout << Stack.size() << endl; // Output =1

    // Returning boolean value for the stack for being empty or not
    cout << Stack.empty() << endl; // Output 0

    // Removing a element;
    Stack.pop(); // pop the element on the top .i.e last added element
    cout << Stack.empty() << endl; // Output 1

    Stack.push(69);
    cout << Stack.top() << endl; // Output 69 , returns the element on the top .i.e the element last added

}
