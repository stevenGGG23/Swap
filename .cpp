/* 
A.I. Disclaimer: All work for this assignment was completed by myself and entirely without the use
of artificial intelligence tools such as ChatGPT, MS Copilot, other LLMs, etc.
*/

#include <iostream> 
#include <iomanip>  
#include <cmath>
using namespace std; 

int main() 
{   
    //prompt input 
    int value_1, value_2, value_3; 
    cout << "Please enter three integer values: "; 
    cin >> value_1 >> value_2 >> value_3; 

    //if statments and swap to arrange from lowest to largest / output  
    // example: value_1 = 12.   value_2 = 8.  value_3 = 2.  

    if (value_1 > value_2) swap(value_2, value_1); 
    if (value_2 > value_3) swap(value_2, value_3); 
    if (value_1 > value_2) swap(value_2, value_1); 
   
   
    cout << "The three values in ascending order are: " << value_1 << " " << value_2 << " " << value_3 << endl;  

    return 0; 

}
