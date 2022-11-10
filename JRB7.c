// 1. Write a program to find the Nth term of the Fibonnaci series.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a = -1, b = 1,i=1,c, num;
//     printf("Enter a number ");
//     scanf("%d", &num);

// while (i<=num)
// {
//     c = a + b;
//     // printf("%d ", c);
//     a = b;
//     b = c;
//     i++;
// }
// printf("%d", b);
// return 0;
// }

// // 2. Write a program to print first N terms of Fibonacci series
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a = -1, b = 1,i=1,c, num;
//     printf("Enter a number ");
//     scanf("%d", &num);

// while (i<=num)
// {
//     c = a + b;
//     printf("%d ", c);

//     a = b;
//     b = c;
//     i++;
// }
//     return 0;
// }

// 3. Write a program to check whether a given number is there in the Fibonacci
//    series or not.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a = -1, b = 1, i=1, c, num;
//     printf("Enter a number ");
//     scanf("%d",&num);

// while (i<num)
// {
//     c = a + b;
//     if(c==num)
//     break;
//     a = b;
//     b = c;
//     i++;
// }
// if (c==num){
// printf("%d is a term in fibonacci series  ", num);
// }
//     return 0;
// }

//  4. Write a program to calculate HCF of two numbers
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//   int num1, num2,i, r;
//   printf("Enter Two Numbers");
//   scanf("%d%d", &num1, &num2);

//  while(1)
//   {
//     r = num2 % num1;
//     if(r==0)
//     break;
//     num2 = num1;
//     num1 = r;
//   }
//   if(r==0)
//       printf("HCF is %d", num1);

//   return 0;
// }

//    OR

// #include <stdio.h>
// int main()
// {
//     int i, num1, num2;
//     printf("Enter two numbers");
//     scanf("%d %d", &num1, &num2);
//     for (i=num1<num1?num1:num2; i >= 0; i--)
//         if (num1 % i == 0 && num2 % i == 0)
//         {
//             printf("HCF is %d   ", i);
//             break;
//         }

//     return 0;
// }

// 5. Write a program to check whether two given numbers are co-prime
// numbers or not
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//   int i, num1, num2;
//   printf("enter Two Numbers ");
//   scanf("%d%d", &num1, &num2);
//   for (i = 2; i < num1; i++)
//      {if(num1%i == 0   &&   num2%i==0)
//       break;
//      }
//      if(num1%i==0&&num2%i==0)
//        printf("%d and %d are not Co-Prime",num1,num2);
//      else
//        printf("%d and %d are Co-Prime ", num1, num2);

//      return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, num1, num2, count = 0;
//     printf("Enter Two Numbers\n");
//     scanf("%d%d", num1, num2);
//     for (i = num1 < num2 ? num1 : num2; i >= 1; i++)
//     {
//         if (num1 % i == 0 && num2 % i == 0)
//             count++;
//     }

//     if (count == 1)
//         printf("%d & %d is co-prime ", num1, num2);
//     else
//         printf("%d & %d is not  co-prime ", num1, num2);
//     return 0;
// }

// 6. Write a program to print all Prime numbers under 100
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int i, j, count = 0;
//     for (i = 2; i <= 100; i++)
//     {
//         for (j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//                 break;
//         }
//         if (i == j)
//         {
//             printf("%d  ", i);
//             count++;
//         }
//     }
//     printf("\nThere are %d prime Numbers between 1 and 100", count);
//     return 0;
// }

// // 7. Write a program to print all Prime numbers between two given numbers
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int num1, num2, i, x, j;
//     printf("Enter a two numbers");
//     scanf("%d%d", &num1, &num2);
//     for (x = num1; x < num2; x++)
//     {
//         for (j = 2; j < x; j++)
//             if (x % j == 0)
//                 break;
//         if (x == j)
//             printf("%d ", x);
//     }
//     return 0;
// }

// 8. Write a program to find next Prime number of a given number...
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int num,i;
//     printf("Enter a Number ");
//     scanf("%d", &num);
//     L1:
//         num = num + 1;
//             for (i = 2; i < num;i++)
//             {
//                 if (num%i==0)
//                 {
//                 break;
//                 }
//             }
//     if(i==num)
//         printf("The Next Prime is %d", num);
//         else
//          goto L1;

//         return 0;
//                               ****OR***

// #include <stdio.h>
// int main()
// {
//     int num, i, j, count = 0;
//     printf("Enter a number ");
//     scanf("%d", &num);
//     num++;
//     for (i = num; 1; i++)
//     {
//         count = count * 0;
//         for (j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//                 count++;
//         }
//             if (count == 0)
//             {
//                 printf("Next Prime Number is  %d", i);
//                 break;
//             }
//     }
//     return 0;
// }

// 9. Write a program to check whether a given number is an Armstrong number or not:
// #include<stdio.h>
// int main()
// {
//     int number,r,n,count=0;
//     int reminder,sum=1;
//     printf("Enter a Number ");
//     scanf("%d", &number);
//     int numb = number, num = number;
//     int arm=0;
//     while (number!=0)
//     {
//        r= number % 10;
//        number = number / 10;
//        count++;
//     }
//     printf("%d\n",count);
//     n=count ;
//     while(count!=0)
//     {
        
//         reminder = num % 10;
//         for (int i = 1; i <= n;i++)
//         {
//             sum = sum * reminder;
//         }
//         arm = arm + sum;
//         sum = 1;
//         num = num / 10;
//         count--;
//     }
//     if(arm==numb)
//         printf("%d is Armstrong ",numb);
//     else {
//         printf("%d is Not Armstrong ", numb);
//     }

//     return 0;
// }

// 10. Write a program to print all Armstrong numbers under 1000
// #include <stdio.h>
// int main()
// {
//     int i, xt, num, rem,x, r,count, sum = 0;
//     printf("Enter a Number\n");
//     scanf("%d", num);
//     x = num;
//     while (num)
//     {
//         r = num % 10;
//         sum = sum + r;
//         num = num / 10;
//         count++;
//     }
//     xt = sum;
//     for (i = 1; i <= count; i++)
//         for (i = 0; i <= xt; i++)
//             rem = x % 10;
//     rem = rem * rem;
//     return 0;
// }