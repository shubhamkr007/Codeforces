#include <iostream>
#include <vector>

using namespace std;

void solve() {
    vector<int> multiset(32, 0);
    int query_count;
    cin >> query_count;

    for (int i = 0; i < query_count; ++i) {
        int query_type;
        cin >> query_type;
        if (query_type == 1) {
            int add_value;
            cin >> add_value;
            multiset[add_value]++;
        } else {
            int target_sum;
            cin >> target_sum;
            vector<int> temp_multiset(multiset.begin(), multiset.end());
            int bit = 0;
            bool is_possible = true;

            while (bit < 30) {
                if ((target_sum >> bit) & 1) {
                    if (temp_multiset[bit] > 0) {
                        temp_multiset[bit]--;
                    } else {
                        is_possible = false;
                        break;
                    }
                }

                temp_multiset[bit + 1] += temp_multiset[bit] / 2;
                bit++;
            }

            if (is_possible) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}

int main() {
    solve();
    return 0;
}
