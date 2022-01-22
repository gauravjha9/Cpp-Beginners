// Write a C++ program to print all alphabets from a to z.

#include<iostream>
using namespace std;

int main(){

    char ch;

    cout<<"All alphabets from a-z: ";
    for(ch = 'a'; ch<='z'; ch++){
        cout<<ch<<" ";
    }

    return 0;
}