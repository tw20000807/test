#include "coin_flips.h"

std::vector<int> coin_flips(std::vector<int> b, int c) {
    std::vector<int> flips(1);
    if (b[c] == 1) {
        flips[0] = 0;
    } else {
        flips[0] = 4;
    }
    return flips;
}
