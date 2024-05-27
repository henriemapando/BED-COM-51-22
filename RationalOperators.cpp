# include <iostream>
using namespace std;

int main () {
    int a = 21;
    int b = 10;
    int c;

    if (a == b) {
        cout << "Line 1 - a is eaqual to b" << endl;
    } else {
        cout << "Line 1 - a is not eaqual to b "<< endl;
        }

        if (a < b) {
            cout <<"Line 2 - a is less than to b" << endl;
        } else {
            cout << "Line 2 - a is not not less than to b" << endl;
            }

            if (a > b) {
                cout << "Line 3 - a is greater than b" << endl;
            } else {
                cout << "Line 3 - a is not greater than b" << endl;
            }

            /*Let change the value of a and b*/
            a = 5;
            b = 20;
            if (a <= b) {
                cout << "Line 4 - a is either less than or equal to b" << endl;
            }
            if (b >= a) {
               cout << "Line 5 -  is either greater than or eaqual to a" << endl;
            }

            return 0;

}