Programming Task
Q. Can you use the for loop to compute the sum of only odd numbers from 1 to 100. In each iteration, you need to add an odd number to the sum.

sum = sum + 1
sum = sum + 3
sum = sum + 5
....
....
sum = sum + 99

Solution :
    #include <stdio.h>

int main() {
    int sum = 0;
    for(int i = 1; i <= 100; i = i+2) {
        sum = sum + i;
    }
    printf("Sum of odd numbers from 1 to 100: %d", sum);
    
    return 0;
}
Output

Sum of odd numbers from 1 to 100: 2500
