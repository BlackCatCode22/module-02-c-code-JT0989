// jT 9/4/24
/*
 * forAndWhileLoop.cpp
 * This program will demonstrate the repetition control structure
 * using the for and while loops
 *
 */




#include <iostream>
using namespace std;


// Create a while loop that says hello 100 times
// A loop must have a loop control variable that
// is initialized, checked. and changed.


int sumArange (int, int);

int main()
{
    cout << "\n Welcome to my while and For Loop Program!!!\n " << endl;


        // Create the loop control variable.
    int myLoopControlVar= 0;

        // create a while loop
    myLoopControlVar = 1;
    // The while loop has a test condition inside its ()
    // this test condition is checked
    while (myLoopControlVar <=10)
        {
        cout << "\n Hello " << myLoopControlVar << endl;

        myLoopControlVar++;
        }

    // Change the loop control variable.
    myLoopControlVar++;



    // Code up the sample while loop from today's video
    // write out all the numbers between 100-500 that are
    // divisible by 3 and 5
    int counter = 100;

    while (counter <= 500) {
        if (counter % 3 == 0)
        {
            cout << counter << " is divisible by 3 (no remainder after dividing by 3)" << endl;
        }

        // Change our loop control variable
        counter++;
    }
    // Create a for loop
    // what is the loop control variable?
    // where is the loop control variable initialized, checked, and changed?

    for( int i = 1; i <= 10; i++) {
        cout << "in the for loop and i is: " << i << endl;
    }


    //Call my function
    int theRetValue = 0;
    int num1 = 3;
    int num2 = 6;
    theRetValue = sumArange(num1,num2);

    cout << "\n The sum of the range between " << num1 << "and " << num2 << " is: " << theRetValue << endl;




    // Define the range between start-end
    int sumArange (int startRange, int endRange);
    {
        // this function will sum the range of numbers
        // between startRange and endRange

        // We need an accumulator
        int theSumOftheRange = 0;

        int startRange;
        int endRange;
        for (int i = startRange; i <= endRange; i++)
            theSumOftheRange = theSumOftheRange + i;
        return theSumOftheRange;
    }




    return 0;
}

// Define the range between start-end
int sumArange (int startRange, int endRange)
{
    // this function will sum the range of numbers
    // between startRange and endRange

    // We need an accumulator
    int theSumOftheRange = 0;

    for (int i = startRange; i <= endRange; i++)
        theSumOftheRange = theSumOftheRange + i;
    return theSumOftheRange;
}