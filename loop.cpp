#include <iostream>
using namespace std;

int main (){

    int marks[10];

    for (int i = 0; i < 10; i++)
    {   
        cout << "Enter number :";
        cin  >>  marks[i];
    }
    

    for (int i = 0; i < 10; i++)
    {
        cout << "Marks : " << marks[i] << "\n";
    }
    
}