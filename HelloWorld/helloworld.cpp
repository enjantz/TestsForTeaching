/* 
the #include keyword tells the computer what libraries you need
right now, we only need <iostream> a standard library of some C++ commands
*/
#include <iostream>

/*
you won't have to worry about namespace too much - 
you'll always be in standard (std) and/or frc
*/
using namespace std;

/*
this is a function - the int means the function will return an integer,
which means that when the function ends it will spit out a number
you're not using that number for anything here, so you won't see it
*/
int main()
{
    /*
    This is your print statment - there are different ways to print,
    but this is the most basic. c out << "a string" (or other data);
    the endl means endline, which can also be designated like this:
    "Hello World \n";  Just make sure you put a semicolon at the end!
    */
    cout << "Hello World" << endl;
}