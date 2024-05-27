# include <iostream>
using namespace std;
void swapNumbers(int &variableA, int &variableB){
int temp = variableA;
    variableA = variableB;
    variableB = temp;
}
int main ( )
{
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl; // varA is 25
    cout << " varB before swap: " << varB << endl; // varB is 100

    swapNumbers(varA, varB);
cout << "varA after swap: " << varA << endl; // varA is 100
cout << "varB after swap: " << varB << endl; // varB is 25

return 0;
}