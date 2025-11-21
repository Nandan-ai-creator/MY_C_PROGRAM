#include <stdio.h>
int check(int m1,int m2,int m3) {
    if (m1 >= 40 && m2 >= 40 && m3 >= 40);
       return 1;
    else
        return 0; 
}

int main() {
    int m1, m2, m3;
    float average;
    printf("Enter marks for three subjects:\n");
    scanf("%d %d %d", &m1, &m2, &m3);
    average = (m1 + m2 + m3) / 3.0;
    printf("Average Marks = %.2f\n", average);
    if (check(m1, m2, m3))
        printf("Result: Passed\n");
    else
        printf("Result: Failed\n");
}
