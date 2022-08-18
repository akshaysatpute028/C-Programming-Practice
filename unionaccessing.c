#include <stdio.h>
union Job {
   double salary;
   int workerNo;
} j;

int main() {
   j.salary = 200;

   // when j.workerNo is assigned a value,
   // j.salary will no longer hold 12.3
   j.workerNo = 100;

   printf("Salary = %.2lf\n", j.salary);
   printf("Number of workers = %d\n", j.workerNo);
   printf("%d",sizeof(j));
   {
      /* data */
   };
   
   return 0;
}