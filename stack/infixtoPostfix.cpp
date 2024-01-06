#include <iostream>
#include <stack>
using namespace std;

int precedencelevel(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
        return -1;
}

string InfixToPostfix(stack<char> st, string infix)
{
    string postfix;
    for (int i = 0; i < infix.length(); i++)
    {
        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z'))
        {
            postfix = postfix + infix[i];
        }
        else if (infix[i] == '(')
        {
            st.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while ((st.top() != '(') && (!st.empty()))
            {
                char temptop = st.top();
                postfix += temptop;
                st.pop();
            }
            if (st.top() == '(')
            {
                st.pop();
            }
        }
        else if(precedencelevel(infix[i]))
        {
            if (st.empty())
            {
                st.push(infix[i]);
            }
            else if ((precedencelevel(infix[i])) > precedencelevel(st.top()))
            {
                st.push(infix[i]);
            }
            else if ((precedencelevel(infix[i])) == precedencelevel(st.top()) && (infix[i] == '^'))
            {
                st.push(infix[i]);
            }
            else
            {
                while ((!st.empty()) && (precedencelevel(infix[i] <= precedencelevel(st.top()))))
                {
                    char temptop = st.top();
                    postfix += temptop;
                    st.pop();
                }
                st.push(infix[i]);
            }
        }
    }
    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

int main()
{
    string infix, postfix;
    cout << "Enter a Infix Expression: " << endl;
    cin >> infix;
    stack<char> s;
    cout << "Infix expression is :" << infix << endl;
    postfix = InfixToPostfix(s, infix);
    cout << "Postfix expression is :" << postfix << endl;
    return 0;
}