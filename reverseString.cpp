// jT 9/7/24
//Reverse String program

#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    string str = "Yo, my name is Jayden";
    cout << "Original string: " << str << endl;

    // Reverse the string using the reverse() function
    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;

    return 0;
}