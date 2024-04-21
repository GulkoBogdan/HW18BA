#include <iostream>
#include <iomanip> 
using namespace std;
int main(void)
{
    //1
    int i1;
    int j1;
    cout << "Input number: ";
    do {
        cin >> i1;
    } while (i1 < 0);
    j1 = 1;
    cout << "Factorial of " << i1 << " is: ";
    for (; i1 > 0; i1--) {
        cout << i1 << ", ";

        j1 *= i1;
    }

    cout << j1 << endl;
    //2
    //idk 



    //3
    for (int i3 = 1; i3 <= 9; ++i3)
    {
        for (int j3 = 1; j3 <= 9; ++j3)
        {
            std::cout << std::setw(2) << i3 * j3 << ' ';
        }
        std::cout << '\n';
    }

    //4
    int x;
    cout << "Input number: ";
    do {
        cin >> x;
    } while (x <= 0);

    for (int i = 1; i <= x / 2; ++i) {
        if (x % i == 0) {
            cout << i << " ";
        }
    }

    cout << x << endl;


    return 0;
}