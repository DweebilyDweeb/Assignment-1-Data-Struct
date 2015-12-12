/*
*  This is the main file where you set up your test cases and see if it is correct
*
*/

#include "mission.h"

// ======================================
// DO NOT MODIFY ANYTHING ABOVE THIS LINE
// ======================================

void main()
{
    // This sets the boolean values to be represented in a textual format.
    cout << std::boolalpha;

    // You can modify the test cases in anyway you like, refer to the assignment document for sample test cases
    // You can come up with your own test cases too.
    // Feel free to comment out any sections which you do not want to test.
    // Feel free to leave the test cases in your submission.

    // Part 1
    char part1Input = 'H';
    char part1Output = ConvertIt(part1Input);
    cout << "Part 1" << endl;
    cout << part1Input << " converts to " << part1Output << endl;
    cout << endl;

    // Part 2
    unsigned int gold = 1337;
    unsigned int leftoverGold = GettingSangeAndYasha(gold);
    cout << "Part 2" << endl;
    cout << gold << " leftover " << leftoverGold << endl;
    cout << endl;

    // Part 3
    unsigned int part3Number = 1;
    bool part3Prime = IsPrime(part3Number);
    cout << "Part 3" << endl;
    cout << part3Number << " is a prime number = " << part3Prime << endl;
    cout << endl;

    // Part 4
    unsigned int part4Number = 25;
    bool part4Result = IsSumOf2Squares(part4Number);
    cout << "Part 4" << endl;
    cout << part4Number << " is a sum of 2 square numbers = " << part4Result << endl;
    cout << endl;

    // Part 5
    unsigned int N = 1337;
    unsigned int numDigits = DivideExactly (N);
    cout << "Part 5" << endl;
    cout << "The number of digits that divide " << N << " exactly is " << numDigits << endl;
    cout << endl;
}