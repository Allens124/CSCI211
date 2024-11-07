#include <iostream>
#include <string>
using namespace std;

string add(string a, string b)
{
    // Create a string that will contain the result
    string result = "";
    
    // Create a lengthA and a lengthB variable to determine maximum number of interations
    int lengthA = a.length();
    int lengthB = b.length();
    
    // Create a carry variable, and initialize it to 0
    int carry = 0;
    while (lengthA > 0 || lengthB > 0)
    {
        // Convert each char element of num1 and num2 to their integer representations
        int digitA = lengthA > 0 ? a[lengthA-1]-'0' : 0;
        int digitB = lengthB > 0 ? b[lengthB-1]-'0' : 0;
        
        // Create a temp variable that represents the digit that will be inserted into the result variable
        int temp = (digitA+digitB+carry)%10;
        
        // Determine if a digit needs to be carried over to the next interation of the loop
        if (digitA+digitB+carry > 9)
        {
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        
        // Convert the temp variable to a string, and insert it into the leftmost index of the result variable
        result.insert(0, to_string(temp));
        
        // Decrease the values of lengthA and lengthB by 1 so that the loop will not continue indefinitely
        lengthA--;
        lengthB--;
    }
    
    // If there is still one more carry after breaking out of the loop, add a 1 to the leftmost index of the result variable
    if (carry == 1)
    {
        return "1"+result;
    }
    return result;
}

int main(int argc, const char* argv[])
{
    // Declare two char arrays for the two strings of numbers
    char num1[100];
    char num2[100];
    
    // Take in both strings as user inputs
    cout << "Enter one number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    
    // Output the sum of the inputs
    cout << "The sum of num1 and num2 is: " << add(num1, num2) << endl;
    return 0;
}