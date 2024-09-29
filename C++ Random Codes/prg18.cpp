#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

class Stack
{
private:
    int st[SIZE];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int val)
    {
        if (top == SIZE - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        st[top] = val;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Empty" << endl;
            return -1;
        }
        int ret = st[top];
        top--;
        return ret;
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack Empty" << endl;
            return;
        }
        cout << "Stack Elements: ";
        for (int i = 0; i <= top; i++)
        {
            cout << st[i] << "   ";
        }
        cout << endl;
    }

    int size()
    {
        return top + 1;
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack Empty" << endl;
            return;
        }
        cout << "Top of the Stack: " << st[top] << endl;
    }
};

int main()
{
    Stack st;
    int ch;
    int popped;
    do
    {
        cout << "Enter Choice\n";
        cout << "1 for push\n";
        cout << "2 for pop\n";
        cout << "3 for display\n";
        cout << "4 for Size\n";
        cout << "5 for Peek\n";
        cout << "6 to Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            int val;
            cout << "Enter Value: ";
            cin >> val;
            st.push(val);
            break;
        case 2:
            popped = st.pop();
            if (popped != -1)
                cout << "Value Popped: " << popped << endl;
            break;
        case 3:
            st.display();
            break;
        case 4:
            cout << "Size of Stack: " << st.size() << endl;
            break;
        case 5:
            st.peek();
            break;
        case 6:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    } while (ch != 6);
    return 0;
}
