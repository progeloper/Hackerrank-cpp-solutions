#include <iostream>
#include <cstdio>
using namespace std;

string greatCheck(int n){
    return ((n%2==0)?"even":"odd");
}

int main() {
    // Complete the code.
    string arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a;
    cin>>a;
    int b;
    cin>>b;
    for (a; a<=b; a++) {
        cout << (((a>9)?greatCheck(a):arr[a-1]) + "\n");
    }
    return 0;
}
