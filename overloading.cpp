/*
Name: Kelvin Vittini
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Overloading Constructor Example
Date: 02/15/2026
*/

#include <iostream>
#include <string>

using namespace std;

class Saiyan {
private:
    string name;
    int age;
    
public:
//1
    Saiyan() {
        name = " kelvin ";
        age = 756;
        cout << " default constructor called! " << endl;
    }
//2
    Saiyan(string n) {
        name = n;
        age = 555;
        cout << " one parameter contructor called! " << endl;
    }
//3   
    Saiyan(string n, int a) {
        name = n;
        age = 899;
        cout << " two parameter contructor called! " << endl;
    }

    void display() {
        cout << " Saiyan name: " << name << endl;
        cout << " Saiyan age: " << age << endl;
    }
    
};

int main() {

    Saiyan Saiyan1;
    Saiyan Saiyan2("broccoli");
    Saiyan Saiyan3("vegetable", 555);
    
    cout << "\nSaiyan1 info:" << endl;
    Saiyan1.display();
    
    cout << "\nSaiyan2 info:" << endl;
    Saiyan2.display();
    
    cout << "\nSaiyan3 info:" << endl;
    Saiyan3.display();


return 0;
    
    
}
/*
reflection:
1.  what I understood:  
    the basic were understood using the same blue print as before.

2.  Difficulties:
    even though section 1, 2, 3 are similar i had difficulties seperating them
    fixing errors
    alot of errors showed up so i spent the most amount of time on this one.

3.  Research:   
    i used ChatGPT for reference.
    
4.  what i learned:   
    i gave all three saiyans a more detailed personality.
    how to fix errors
*/   








