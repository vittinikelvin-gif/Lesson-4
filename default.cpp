/*
Name: Kelvin Vittini
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: default Constructor Example
Date: 02/15/2026
*/

#include <iostream>
#include <string>

using namespace std;

class Human {
private:
    string name;
    int age;
    
public:
    Human() {
        name = " kelvin ";
        age = 32;
        cout << "default constructor called!" << endl;
        
    }
    void display() {
        cout << "Human name: " << name << endl;
        cout << "Human age: " << age << endl;
    }
};
int main() {
    
    Human myHuman;
    
    myHuman.display();
    
    return 0;
}

/*
reflection:
1.  what I understood:  
    the layout i would be using for the rest of the codes. 
    im only using what i learned from brightspace.

2.  Difficulties:
    Messing around with the program to make it more of 
    what i like to see. this was the first constructorso 
    i added a small amount

3.  Research:   
    brightspace and ChatGPT
    
4.  what i learned:   
    i could make human a class.
*/   





























