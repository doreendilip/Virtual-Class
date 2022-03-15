// Pointer to array
// program to print the array values using pointers
// program to print the address and value stored in the address

#include<stdio.h>
void main()
{
   int a[3] = {1, 2, 3};
   int *p = a;
   int i;
   for ( i = 0; i < 3; i++)
   {
      printf("%d, \t %d \n", p, *p);
      p++;
   }
  //return 0;
}



#include <stdio.h>
int main ()
{
   int  value_array[] = {42, 366, 458, 112};
   int a, *point[4];
   printf("Array of pointers!\n\n");
   for(a=0;a<4;a++)
   {
    point[a]=&value_array[a];
    printf("value=>:%d\n",*point[a]);
   }
   for (a=0;a<4;a++)
   {
    printf("Value => var[%d]: %d\n", a, *point[a] );
   }
   return 0;
}

// pointer to function
// pass the pointer argument as a function parameter

#include <stdio.h>
void display(int *val);
int main()
{
   int a;
   display(&a);
   printf("Passing pointers to function!\n\n");
   printf("Value is: %d\n",a);
   return 0;
}
void display(int *val)
{
  *val = 30;
  return 0;
}


// finding a series of Armstrong numbers upto n numbers using pointers



#include <stdio.h>
#include <math.h>

int main()
{
    int num, lastDigit, digits, sum, i, end;


    printf("Enter the value of the nth number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between 1 to %d are: \n", end);

    for(i=1; i<=end; i++)
    {
        sum = 0;

        num = i;

        digits = (int) log10(num) + 1;


        while(num > 0)
        {
            lastDigit = num % 10;
            sum = sum + ceil(pow(lastDigit, digits));
            num = num / 10;
        }

        if(i == sum)
        {
            printf("%d, ", i);
        }

    }

    return 0;
}

