#include<bits/stdc++.h>
using namespace std;

           //************\\
          // Shumen Baral \\
         // CSE2203027150  \\
        //------------------\\

void findCoins(int coin[], int n, int amount) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (coin[i] < coin[j]) {

                int temp = coin[i];
                coin[i] = coin[j];
                coin[j] = temp;
            }
        }
    }
    int count;
    for (int i = 0; i < n; i++) {
        if (amount >= coin[i]) {
            count = amount / coin[i];
            amount = amount % coin[i];
            cout << coin[i] << " coin " << count << " times\n";
        }
    }
}

int main() {
    int n;

    cout << "Enter Number of Coin: ";
    cin >> n;

    int coin[n];

    cout << "Coin  :  ";
    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }

    int amount;
    cout << "Change Amount: ";
    cin >> amount;

    cout << "\nCoin Needed:\n";
    findCoins(coin, n, amount);

    return 0;
}
