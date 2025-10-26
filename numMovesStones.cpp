#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> stones = {a, b, c};
        sort(stones.begin(), stones.end());
        int x = stones[0], y = stones[1], z = stones[2];
        
        int min_moves;
        if (y - x == 1 && z - y == 1) {
            min_moves = 0;
        } else if (y - x <= 2 || z - y <= 2) {
            min_moves = 1;
        } else {
            min_moves = 2;
        }
        
        int max_moves = (y - x - 1) + (z - y - 1);
        
        return {min_moves, max_moves};
    }
};
