#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string textRepresentation[10] = {"","one", "two", "three", "four", "five",
     "six", "seven", "eight", "nine"};
     
    int a, b;
    
    cin >> a;
    cin >> b;
    
    for(int i = a; i <= b; i++)
    {
     if(i >= 1 && i <= 9)
     {
         cout << textRepresentation[i] << endl;
     }else if(i > 9 && i % 2 == 0)
     {
         cout << "even" << endl;
     }
     else if(i > 9 && i % 2 == 1)
    {
        cout << "odd";
    }
    }
    return 0;
}
