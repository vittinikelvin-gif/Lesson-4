/*
Name: kelvin vittini
Course: CSCI 272
Lesson Number: Lesson Number 4
Code Topic: Class & Objects
Date: 02/15/2026
*/

#include <iostream>
#include <string>

using namespace std;

class Car 
{
public:
    string brand;
    string model;
    int accelerate;
};

int main()
{

    
    Car myCar1;
    myCar1.brand = "honda";
    myCar1.model = "odyssey";
    myCar1.accelerate = 89;
    
    
    cout << myCar1.brand << " drift king " << myCar1.model << " is the first contestant " << endl;
    
    Car myCar2;
    myCar2.brand = "toyota";
    myCar2.model = "tacoma";
    myCar2.accelerate = 56;
    
    
    cout << myCar2.brand << " tokyo's finest " << myCar2.model << " is the second contestant " << endl;
    
    
    cout << "race starts" << endl;
    
   
    cout << myCar1.brand << " drift king " << myCar1.model << " is going " << myCar1.accelerate << endl;
    
    cout << myCar2.brand << " tokyo's finest " << myCar2.model << " is going " << myCar2.accelerate << endl;

    return 0;
}


/*
reflection:
1.  what I understood:  
    i had a basic understanding of everything on here since i saw you doing it in class

2.  Difficulties:
    putting my notes into a program without AI.

3.  Research:   
    everything here is from my notes. and from watching you.
    
4.  what i learned:   
    im capable of figuring programs out without AI.
    how to be more unique in my programs
*/   










