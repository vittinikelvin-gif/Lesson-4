/*
Name: Kelvin Vittini
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: parameterized Constructor Example
Date: 02/15/2026
*/

#include <iostream>
#include <string>

using namespace std;



class Saiyan {
private:
    string name;
    int powerLevel;
    
public:

    Saiyan(string n, int p){
     name = n;
     powerLevel = p;
     cout << " parameterized constructor called! " << endl;
     
    }
    
    void display() {
        cout << " Saiyan name: " << name << endl;
        cout << " Saiyan powerLevel is OVER " << powerLevel << endl;
        
    }
};

int main() {
    
    Saiyan mySaiyan( " Karet ", 9000);
    
    mySaiyan.display();
    
    return 0; }
    

    
/*
reflection:
1.  what I understood:  
    I understood the layout since i used the same one for all the programs
    i understood i could change the class so i tried something different.

2.  Difficulties:
    trying to figure out how to use Saiyan and Powerlevel in the program
    took longer than writing the program.

3.  Research:   
    I had to use google AI to learn what to do but i
    
4.  what i learned:   
    what goes inside the parameter.
    creating a blueprint for the saiyan class.
    i gave the saiyan its own personality.
*/     
    
    
    
    
    
    
    
    
    
    
    
    
    
    