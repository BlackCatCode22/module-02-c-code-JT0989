// JT 08/28/24


#include <iostream>
using namespace std;

// This is declaring a function
// Function prototypes go here.
string oddOrEven(int);

int main() {
    cout << "Welcome to my Functions Program!" << endl;

    string oddOrEvenString = "";



        int userinput = 0;
        // Get input from the user.
        cout << "\n Enter your number : ";
        cin >> userinput;

        // Call the oddOrEven function.
    oddOrEvenString = oddOrEven(userinput);

    cout << " The input number was: " << oddOrEvenString << endl;




    return 0;
}


    string oddOrEven(int num1) {
        string myReturnStr = "";

        if (num1 % 2 == 0) {
        // This is the true side
            // num1 is even
        myReturnStr = "even";
            return"even";
        }
        else{
            //this is the false side
            //num1 is odd
            myReturnStr = "odd";
           }
    return"odd";

        }
