#include <stdio.h>

int minJumps(int arr[], int n) {
    int jumps = 0;
    int maxReach = 0;
    int lastJump = 0;
    
    for (int i = 0; i < n - 1; i++) {
        // Update the maximum reachable index
        maxReach = (i + arr[i] > maxReach) ? i + arr[i] : maxReach;
        
        // If we have reached the last jump, return the number of jumps
        if (i == lastJump) {
            jumps++;
            lastJump = maxReach;
            
            // If we have reached the end, return the number of jumps
            if (lastJump >= n - 1) {
                return jumps;
            }
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {2, 3, 1, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int minJumpsRequired = minJumps(arr, n);
    if (minJumpsRequired == -1) {
        printf("It is not possible to reach the end of the array.\n");
    } else {
        printf("The minimum number of jumps to reach the end of the array is %d.\n", minJumpsRequired);
    }
    
    return 0;
}
