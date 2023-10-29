Programming Task
Q. Can you write a program that takes an input from the user and prints it if the value is a negative odd number?

if the input value is positive, end the loop with message, Positive Value.
And, if the input value is negative even, skip the value with message, Negative Even.
So, our output will look like :

Enter a number: -23
-23
Enter a number: -22
Negative Even
Enter a number: 23

Solution :
    #include <stdio.h>

    int main() {
    
        while(1) {
            
            int number;
            printf("\nEnter any number: ");
            scanf("%d", &number);
            
            if (number < 0 && number % 2 != 0) {
                printf("%d", number);
            }
            
            else if (number >= 0) {
                printf("Positive Value");
                break;
            }

            else {
                printf("Negative Even");
                continue;
            }
        }

    return 0;
}
Output

Enter any number: -8
Negative Even
Enter any number: -3
-3
Enter any number: 8
Positive Value
