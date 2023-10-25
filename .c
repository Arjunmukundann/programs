MULTIPILCATION TABLE 
#include <stdio.h>

int main() {
   int number ;
   printf("Enter the number :");
   scanf("%d",&number);
    
    int count = 1;
      while (count <= 10) {
          int product = number*count;
          printf("%d *%d=%d\n", number , count ,product);
          count= count+1;
      }
      
    return 0;
}
OUTPUT
Enter the number :5
5 *1=5
5 *2=10
5 *3=15
5 *4=20
5 *5=25
5 *6=30
5 *7=35
5 *8=40
5 *9=45
5 *10=50
