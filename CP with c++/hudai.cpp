#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N), B(N);
    
    for (int i = 0; i < N; i++) cin >> A[i];  // বর্তমান অবস্থান ইনপুট
    for (int i = 0; i < N; i++) cin >> B[i];  // লক্ষ্য অবস্থান ইনপুট

    int total_moves = 0; // মোট প্রয়োজনীয় মুভ গণনা

    for (int i = 0; i < N; i++) {
        total_moves += abs(A[i] - B[i]); // প্রতিটি সংখ্যাকে টার্গেটে পৌঁছাতে যত মুভ লাগে
    }

    // শর্ত যাচাই:
    if (total_moves > K || (K - total_moves) % 2 != 0) {
        cout << "No\n"; // অসম্ভব
    } else {
        cout << "Yes\n"; // সম্ভব
    }
}

int main() {
    int T;
    cin >> T; // টেস্ট কেস সংখ্যা ইনপুট
    
    while (T--) {
        solve();
    }

    return 0;
}
