
/*
	Day 20
    https://www.hackerrank.com/challenges/30-sorting
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for (int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }

    int swap_count = 0;
    
    for (int i = 0; i < a.size() - 1; ++i) {
        for (int j = 0; j < a.size(); ++j) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap_count++;
            }
        }
    }

    cout << "Array is sorted in " << swap_count << " swaps." << endl;
    cout << "First Element: " << a.front() << endl;
    cout << "Last Element: " << a.back() << endl;



    return 0;
}
