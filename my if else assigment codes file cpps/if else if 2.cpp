#include <iostream>
using namespace std;

int main() {
    double bill;
    cout << "Enter bill amount: ";
    cin >> bill;

    if (bill >= 1000)
        bill = bill - (bill * 0.10);

    cout << "Amount to pay: " << bill << endl;

    return 0;
}
