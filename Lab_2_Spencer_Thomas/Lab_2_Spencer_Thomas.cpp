#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
    float A;
    float B;
    float X;
    cout << "Please enter a value for A: ";
    cin >> A;
    cout << "Please enter a value for B: ";
    cin >> B;
    X = (-B / A);
    cout << "X=" << X << endl;
}