#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of scores: ";
    cin >> n;
   vector < int> scores(n);
    cout << "Enter " << n << " scores:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
    }
    cout << "The entered scores are:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Score " << i + 1 << ": " << scores[i] << endl;
    }

    return 0;
}