#include <iostream>
using namespace std;

int main() {
    char A;
    int N;
    cin >> A >> N;
    cout << (char)((A-65+N)%26+65);
    return 0;
}
