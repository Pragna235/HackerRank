#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    vector<int> input;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        int tmp;
        cin >> tmp;
        input.push_back(tmp);
    }
    int count = 0;
    for (int i = 1; i < num; ++i) {
        int val = input[i];
        for (int j = i - 1; j >= 0; --j) {
            if (input[j] > val) {
                input[j + 1] = input[j];
                input[j] = val;
                ++count;
            } else {
                break;
            }
        }
    }
    cout << count << endl;

    return 0;
}

