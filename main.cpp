// Name: Ryan Khieu
// Program Name: Intro to Pointers Lab
// Date: 5/7/25

#include <iostream>
using namespace std;

int main() {
    // Part 1
    int num = 50;
    int* ptr = &num;
    *ptr = 75;

    cout << "Orginal variable: " << num << endl;
    cout << "Dereferenced pointer: " << *ptr << endl;

    // Part 2
    int nums[5] = {15, 30, 45, 60, 75};
    
    cout << "First value: " << *nums << endl;
    cout << "Second value: " << *(nums + 1) << endl;
    cout << "Third value: " << *(nums + 2) << endl;
    cout << "Fourth value: " << *(nums + 3) << endl;
    cout << "Fifth value: " << *(nums + 4) << endl;
    cout << "What happens if you leave off the ()? " << *nums + 1 << endl;

    *(nums + 2) = 100;

    cout << "First value: " << *nums << endl;
    cout << "Second value: " << *(nums + 1) << endl;
    cout << "Third value: " << *(nums + 2) << endl;
    cout << "Fourth value: " << *(nums + 3) << endl;
    cout << "Fifth value: " << *(nums + 4) << endl;

    // Challenge
    char ch;
    char* chPtr = &ch;
    ch = 'J';
    cout << "1st character: " << *chPtr << endl;
    cout << "Memory address: " << (void*)chPtr << endl;
    *chPtr = 'R';
    cout << "2nd character: " << *chPtr << endl;
    cout << "Memory address: " << (void*)chPtr << endl;
    
    return 0;
}