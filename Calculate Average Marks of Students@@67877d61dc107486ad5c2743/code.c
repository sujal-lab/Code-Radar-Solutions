#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float total_marks = 0;  // To store the sum of marks

    for (int i = 1; i <= n; i++) {
        char a[20];  // Name of student
        float b;     // Marks of the student
        int c;       // Roll number (not used in calculation)

        scanf("%d %s %f", &c, a, &b);  // Read roll number, name, and marks
        total_marks += b;  // Add marks to total
    }

    float d = total_marks / n;  // Calculate average
    printf("Average Marks: %.2f\n", d);  // Print average with 2 decimal places

    return 0;
}
