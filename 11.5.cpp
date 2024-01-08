#include <stdio.h>
float average(float scores[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += scores[i];
    }
    return total / n;
}

int main() {
    int N = 10;  
    float student_scores[N];
   printf("Number of students N = %d\n",N);  
    for (int i = 0; i < N; i++) {
        printf("Enter score %d : ", i+1);
        scanf("%f", &student_scores[i]);
    }
    float avg = average(student_scores, N);
    printf("Average score is  : %.2f\n", avg);

    return 0;
}

