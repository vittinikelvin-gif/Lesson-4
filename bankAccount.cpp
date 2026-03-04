/*
Name: Kelvin Vittini
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Copy Constructor Example
Date: 02/15/2026
*/

#include <iostream>
#include <string>

using namespace std;

class bankaccount 
{
public:
    string name;
    int balance;
    
    
};

int main()
{
    
    bankaccount account1;
    account1.name = "kelvin";
    account1.balance = 67;
    
    cout << account1.name << " has " << account1.balance << " dollars " << endl;
    
    bankaccount account2;
    account2.name = "peter";
    account2.balance = 567;
    
    cout << account2.name << " has " << account2.balance << " dollars " << endl;
    account2.balance = account2.balance - 100;
    cout << account2.name << " has " << account2.balance << " dollars " << endl;
    
    
    
    
    
     return 0;
} 
    
    
/*
reflection:
1.  what I understood:
    i understood basic ideas from what i learned in class
    and from watching the video links that are posted.
    
2.  Difficulties:
    working through the program overall had its challenges.
    i would say getting the order of things correct was the most difficult.
    
3.  Research:
    i had trouble starting this program but i used the video link on 
    learning classes and objects that is posted on brightspace to guide me.
    
4.  what i learned:
    I learned to write a program without asking AI for help.
*/
    

    
    
    
    
    
    
    
    