#include<iostream>
#include<ctype.h>
#include<string.h>
#include<stack>
using namespace std;

stack <char> st;
void priority(char c)
{
    if(c=='+' || c=='-')
    {
        if(st.size()!=0 && st.top()!='(')
        {
            cout<<st.top();
            st.pop();
            priority(c);
        }
        else
        {
            st.push(c);
        }
    }

    else if(c=='*' || c=='/')
    {
        if(st.top()=='-' || st.top()=='+')
        {
            st.push(c);
        }
        else if(st.top()=='/' || st.top()=='*' || st.top()=='^')
        {
            cout<<st.top();
            st.pop();
            priority(c);
        }
        else
        {
            st.push(c);
        }
    }

    else
    {
        st.push(c);
    }
}
void InfixToPostfix(string s)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(isalpha(s[i]))
        cout<<s[i];
        else if(s[i]!=')')
        {
            priority(s[i]);
        }
        else if(s[i]==')')
        {
            while(st.top()!='(')
            {
                cout<<st.top();
                st.pop();
            }
            st.pop();            
        }
        i++;
    }
    while(st.size()!=0)
    {
        cout<<st.top();
        st.pop();
    }
    
}


int main() 
{
    char s[100];
    cout<<"Enter the Infix Expression:";
    cin>>s;
    InfixToPostfix(s);
    return 0;
}