#include <iostream>

using namespace std;

int main14()
{
    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n / 3; i++) {
        for (int j = 1; j <= n / 3; j++) {
            int sum = 0;
            sum = i * 3 + j * 3;
            if ((n - sum) % 3 == 0 && sum < n)
                count++;
        }
    }

    cout << count;
    return 0;
}