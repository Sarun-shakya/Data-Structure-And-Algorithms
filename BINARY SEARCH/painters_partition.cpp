#include<iostream>
using namespace std;

// Function to check if it's possible to paint all boards within 'maxPossibleTime'
bool isPossible(int arr[], int n, int m, int maxPossibleTime) {
    int painters = 1; // Start with 1 painter
    int time = 0;     // Time spent by the current painter
    
    // Iterate over all boards
    for(int i = 0; i < n; i++) {
        // If adding the current board's time doesn't exceed maxPossibleTime, continue
        if(time + arr[i] <= maxPossibleTime) {
            time += arr[i];
        } else {
            // Assign a new painter
            painters++;
            time = arr[i]; // Start time for the new painter is the current board
        }
    }
    
    // Check if we used more painters than available
    return painters <= m;
}

// Main function to find the minimum possible maximum time using binary search
int painterPartition(int arr[], int n, int m) {
    // Find the max value (largest board) and the sum of all board lengths
    int maxVal = INT_MIN, sum = 0;
    for(int i = 0; i < n; i++) {
        maxVal = max(maxVal, arr[i]);
        sum += arr[i];
    }
    
    // Define binary search range: [maxVal, sum]
    int start = maxVal, end = sum, ans = -1;
    
    // Binary search to find the minimum possible maximum time
    while(start <= end) {
        int mid = start + (end - start) / 2; // Midpoint
        
        // If it's possible to paint all boards in 'mid' time or less
        if(isPossible(arr, n, m, mid)) {
            ans = mid;        // Update the answer
            end = mid - 1;    // Try for a smaller maximum
        } else {
            start = mid + 1;  // Increase the minimum time
        }
    }
    
    return ans; // Return the minimum possible maximum time
}

// Main function
int main() {
    int time[] = {10,20,30,40,50}; // Board lengths
    int boards = 5;                // Number of boards
    int painters = 3;              // Number of painters
    
    cout << "The minimum time is " << painterPartition(time, boards, painters) << endl;
    return 0;
}

