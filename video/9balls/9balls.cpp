#include <iostream>
#include <vector>
using namespace std;

// Function to simulate weight comparison between two balls
// Returns 0 if equal, -1 if first is lighter, 1 if first is heavier
int compare(int weight1, int weight2) {
    if (weight1 == weight2) return 0;
    return (weight1 < weight2) ? -1 : 1;
}

// Main function to find the odd ball
int findOddBall(const vector<int>& balls) {
    // Assuming balls are indexed from 0 to 8

    // Divide into 3 groups: a, b, c
    vector<int> groupA = {balls[0], balls[1], balls[2]};
    vector<int> groupB = {balls[3], balls[4], balls[5]};
    vector<int> groupC = {balls[6], balls[7], balls[8]};

    // Compare weights of group A and B
    int sumA = groupA[0] + groupA[1] + groupA[2];
    int sumB = groupB[0] + groupB[1] + groupB[2];

    if (sumA == sumB) {
        // The odd ball is in group C (6, 7, 8)
        // Compare 6 and 7
        if (balls[6] == balls[7]) {
            // Then ball 8 is the odd one
            return 8;
        } else if (balls[6] == balls[8]) {
            // Then ball 7 is the odd one
            return 7;
        } else {
            // Then ball 6 is the odd one
            return 6;
        }
    } else if (sumA == sumB + (balls[6] - balls[7])) {
        // This case is just to avoid logic errors; the actual comparison is below
    }

    // The odd ball is in group A or B
    // Let's now compare groupA[0] vs groupA[1] and groupB[0] vs groupB[1] accordingly
    if (sumA != sumB) {
        if (sumA > sumB) {
            // Group A is heavier, odd one is in group A or B (and it's heavier or lighter)
            if (groupA[0] == groupA[1]) {
                return 2; // index 2 is different
            } else if (groupA[0] == groupA[2]) {
                return 1; // index 1 is different
            } else {
                return 0; // index 0 is different
            }
        } else {
            // Group B is heavier
            if (groupB[0] == groupB[1]) {
                return 5; // index 5 is different
            } else if (groupB[0] == groupB[2]) {
                return 4; // index 4 is different
            } else {
                return 3; // index 3 is different
            }
        }
    }

    return -1; // Should never reach here
}

int main() {
    // All balls have weight 10 except one with weight 11 or 9
    vector<int> balls = {10, 10, 10, 10, 11, 10, 10, 10, 10};

    int oddIndex = findOddBall(balls);
    cout << "Odd ball is at index: " << oddIndex << endl;

    return 0;
}
