/*I have a ruler of length n. now its time to mark the ruler ,
 my teacher told me to use ink as minimum as possible, so i have to mark 
 the ruler as minimum as possible but aslo important that
 it must measure all the integer value between 0 to n. write a C program to solve it.*/
 // Difficulty : Hard
 // Logics : Medium
 // Programming : Hard

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_N 100

// Function to check if current marking can measure all distances 1 to n
bool canMeasureAll(int marks[], int numMarks, int n) {
    bool canMeasure[MAX_N + 1];
    memset(canMeasure, false, sizeof(canMeasure));
    canMeasure[0] = true; // We can always measure 0
    
    // Check all possible differences between marks
    for (int i = 0; i < numMarks; i++) {
        for (int j = i + 1; j < numMarks; j++) {
            int diff = marks[j] - marks[i];
            if (diff <= n) {
                canMeasure[diff] = true;
            }
        }
    }
    
    // Check if we can measure all distances from 1 to n
    for (int i = 1; i <= n; i++) {
        if (!canMeasure[i]) {
            return false;
        }
    }
    return true;
}

// Recursive function to find minimum marks using backtracking
void findMinMarks(int marks[], int numMarks, int lastMark, int n, 
                  int* minMarks, int bestMarks[], int* bestCount) {
    
    // Pruning: if current marks already exceed best found, return
    if (numMarks >= *minMarks) {
        return;
    }
    
    // Check if current marking works
    if (canMeasureAll(marks, numMarks, n)) {
        if (numMarks < *minMarks) {
            *minMarks = numMarks;
            *bestCount = numMarks;
            for (int i = 0; i < numMarks; i++) {
                bestMarks[i] = marks[i];
            }
        }
        return;
    }
    
    // Try adding more marks
    for (int nextMark = lastMark + 1; nextMark <= n; nextMark++) {
        marks[numMarks] = nextMark;
        findMinMarks(marks, numMarks + 1, nextMark, n, minMarks, bestMarks, bestCount);
    }
}

// Function to solve the ruler marking problem
void solveRulerMarking(int n) {
    int marks[MAX_N];
    int bestMarks[MAX_N];
    int minMarks = n + 1; // Initialize to maximum possible
    int bestCount = 0;
    
    // Always include 0 as the first mark
    marks[0] = 0;
    
    printf("Solving minimum ruler marking for n = %d\n", n);
    printf("Finding minimum marks needed...\n\n");
    
    // Start search from position 1
    findMinMarks(marks, 1, 0, n, &minMarks, bestMarks, &bestCount);
    
    if (bestCount > 0) {
        printf("Minimum number of marks needed: %d\n", bestCount);
        printf("Mark positions: ");
        for (int i = 0; i < bestCount; i++) {
            printf("%d", bestMarks[i]);
            if (i < bestCount - 1) printf(", ");
        }
        printf("\n\n");
        
        // Verify and show what distances can be measured
        printf("Verification - Distances that can be measured:\n");
        bool canMeasure[MAX_N + 1];
        memset(canMeasure, false, sizeof(canMeasure));
        canMeasure[0] = true;
        
        for (int i = 0; i < bestCount; i++) {
            for (int j = i + 1; j < bestCount; j++) {
                int diff = bestMarks[j] - bestMarks[i];
                if (diff <= n) {
                    canMeasure[diff] = true;
                    printf("Distance %d: |%d - %d| = %d\n", 
                           diff, bestMarks[j], bestMarks[i], diff);
                }
            }
        }
        
        printf("\nSummary of measurable distances: ");
        for (int i = 0; i <= n; i++) {
            if (canMeasure[i]) {
                printf("%d ", i);
            }
        }
        printf("\n");
        
        // Check if solution is complete
        bool complete = true;
        for (int i = 1; i <= n; i++) {
            if (!canMeasure[i]) {
                complete = false;
                break;
            }
        }
        
        if (complete) {
            printf("\n✓ Solution is COMPLETE - all distances 0 to %d can be measured!\n", n);
        } else {
            printf("\n✗ Solution is INCOMPLETE - some distances cannot be measured.\n");
        }
        
    } else {
        printf("No solution found!\n");
    }
}

int main() {
    int n;
    
    printf("=== Minimum Ruler Marking Problem ===\n");
    printf("Find minimum marks on ruler to measure all distances 0 to n\n\n");
    
    printf("Enter the length of ruler (n): ");
    scanf("%d", &n);
    
    if (n <= 0 || n > MAX_N) {
        printf("Please enter a valid length between 1 and %d\n", MAX_N);
        return 1;
    }
    
    printf("\n");
    solveRulerMarking(n);
    
    printf("\nExplanation:\n");
    printf("- Mark at 0 is always needed as reference point\n");
    printf("- Each additional mark allows measuring new distances\n");
    printf("- Distance between any two marks gives a measurable length\n");
    printf("- Goal: minimize total marks while covering all distances 1 to %d\n", n);
    
    return 0;
}