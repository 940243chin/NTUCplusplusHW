#include <iostream>
#include <cstdlib>
using namespace std;
//Problem 1
int main() {
    int det=0,age=0;
    cout << "Input:\n";
    cin >> det >> age;
    cout << "\n\n\nOutput:\n";
    if(det == 1 && age>=18)
        cout << "Yes\n";
    if(det == 0 && age>=16)
        cout << "Yes\n";
    else
        cout << "No\n";
return 0;
}