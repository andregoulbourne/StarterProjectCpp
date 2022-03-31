#include <iostream>
#include <string>
using namespace std;

//This is comment and c++
    //This doesn't get read by the compiler
        // the compiler is what runs your code


/*
    This is a multi
    Line
    Comment
*/

// variable : a place to store data
    // primitives Types
    /*
        int nameForReferenceOfTheVariableInteger = 1;
        double nameForReferenceOfTheVariableDecimal = 2.394792874;
        bool nameForReferenceOfTheVariableBoolean = false; // Two values only false or true
        string nameForReferenceOfTheVariableString = "This language is C++"; //in other languages like JAVA and Python this is reference type

    */

   // reference Types
   /* 
        Struct
   */

//Operators
    /*
        binary: works on two subjects
        = this is the assignment operator. Works right to left (makes what ever the right side become the left)
        multiplication 2*1  equals 2  
        division 6/2 equals 3
        add +
        substract -
        < lessthan
        <= lessthan or equal to
        > greaterthan
        >= greaterthan or equal to
        && and
        || or

        uinary
        ++ iterator 1++ equals 2
    */



// function : a stored    specification/  behaviour/  process/  method
    // The function below returns a string(group of characters(single symbol/ most key on board ex. '+','a'))
    // the string it  returns is Hello
string getHello(){
    //storing Hello in string variable name hello to use it some where else in the code
    string hello = "Hello";
    // returning "Hello" from this stored variable in memory hello
    return hello;
}

// loop : repeated running of a specific segement of code
    // void : is a function that returns nothing
    void runLoop(){
        // 0 is where it starts, 4 is the upper boundery but this dosn't include for so basically will stop and 3
        // i++ tells us the it is increments or stepping up by 1 at a time

        // will print out th numbers 0 to 3 
        //if < is changed to <= 0 to 4
        for(int i=0; i<4; i++){
            cout << i;
        }

        //including this here to tell it to go to the next line
        cout<<endl;

        //This is a while loop will behave like the for loop above
        int i=0;
        while(i<4){
             cout << i;
            i++;
        }

        cout<<endl;
    }


int main(){
    //Calling the function get Hello
        //cout << //just print things to the screen //<< endl tells the compiler to go to the next line
    cout << getHello() << endl;

    //Calling the function runLoop
    // Notice how in the runLoop Function there is no << endl so it will print everything on the same line
    runLoop();

    return 0;
}