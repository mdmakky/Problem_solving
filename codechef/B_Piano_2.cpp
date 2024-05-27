#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<int> arr1(m), arr2(n);


    for (int i = 0; i < m; ++i) {
        cin >> arr1[i];
    }


    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }


    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    vector<int> combined;
    combined.insert(combined.end(), arr1.begin(), arr1.end());
    combined.insert(combined.end(), arr2.begin(), arr2.end());


    sort(combined.begin(), combined.end());

    
    bool found = false;
    for (int i = 0; i < combined.size() - 1; ++i) {
        if (binary_search(arr1.begin(), arr1.end(), combined[i]) && 
            binary_search(arr1.begin(), arr1.end(), combined[i + 1])) {
            found = true;
            break;
        }
    }

   
    if (found) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
