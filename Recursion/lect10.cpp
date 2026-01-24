#include <iostream>
#include <vector>
using namespace std;

void f(int arr[], vector<int>& db, vector<vector<int>>& ans, vector<int>& freq, int n) {
    if (db.size() == n) {
        ans.push_back(db);
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!freq[i]) {
            freq[i] = 1;
            db.push_back(arr[i]);

            f(arr, db, ans, freq, n);

            freq[i] = 0;
            db.pop_back();
        }
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = 3;

    vector<int> db;
    vector<vector<int>> ans;
    vector<int> freq(n, 0);

    f(arr, db, ans, freq, n);

    // printing permutations
    for (auto &v : ans) {
        for (int x : v) cout << x << " ";
        cout << endl;
    }

    return 0;
}
