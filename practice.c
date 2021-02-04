// #include <stdio.h>

// int main()
// {
//   int array[100], n, c, d, swap;

//   printf("Enter number of elements\n");
//   scanf("%d", &n);

//   printf("Enter %d integers\n", n);

//   for (c = 0; c < n; c++)
//     scanf("%d", &array[c]);

//   for (c = 0 ; c < n - 1; c++)
//   {
//     for (d = 0 ; d < n - c - 1; d++)
//     {
//       if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
//       {
//         swap       = array[d];
//         array[d]   = array[d+1];
//         array[d+1] = swap;
//       }
//     }
//   }

//   printf("Sorted list in ascending order:\n");

//   for (c = 0; c < n; c++)
//      printf("%d\n", array[c]);

//   return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int a[25],n,i,j,s;
//     printf("enter no of elements:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("\nenter value of a[%d]:",i);
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n-i-1;j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 s=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=s;
//             }
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d\n",a[i]);
//     }
//     getch();
// }

// #include <stdio.h>

// int main(){
//   int i,num[10],j;
//   for(i=0;i<10;i++)
//   {
//     printf("Enter Number Of Element You Want: ");
//     scanf("%d",&num);
//   }
//   printf("%d",num);

//   return 0;
//   }

// #include <stdio.h>

// int main(){
//   int array[15],n,c,d,swap;

//   printf("Enter Number Of Elements: ");
//   scanf("%d",&n);

//   printf("Enter %d Numbers:\n",n);

//   for (c = 0; c < n; c++)
//   {
//     scanf("%d",&array[c]);

//     for (c = 0; c < n-1; c++)
//     {
//       for (d = 0; d < n-c; d++)
//       {
//         if (array[d] > array[d+1])
//         {
//           swap = array[d];
//           array[d] = array[d+1];
//           array[d+1] = swap;
//         }

//       }

//     }

//   }
//    printf("Sorted List In Ascending Order:\n ");
//    for (c = 0; c < n; c++)
//    {
//      printf("%d\n",array[c]);
//    }

//   return 0;
//   }

// #include <stdio.h>
// int main()
// {
//     int a[100], number, i, j, temp;
//     printf("\n Please Enter the total Number of Elements  : \n ");
//     scanf("%d", &number);
//     printf("\n Please Enter the Array Elements  :\n  ");
//     for(i = 0; i < number; i++)
//         scanf("%d", &a[i]);
//     for(i = 0; i < number - 1; i++)
//     {
//         for(j = 0; j < number - i - 1; j++)
//         {
//             if(a[j] > a[j + 1])
//             {
//                 temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }
//     printf("\n List Sorted in Ascending Order : ");
//     for(i = 0; i < number; i++)
//     {
//         printf("%d\n", a[i]);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int main(){
//   int ar[15],i,j,temp_swap,num;
//   printf("Enter Number Of Elements: ");
//   scanf("%d",&num);
//   printf("Enter Numbers: ");
//   for (i = 0; i < num; i++)
//   {
//     scanf("%d\n",ar[15]);
//   }
//   for (i = 0;i < num-1; i++)
//   {
//     for (j = i+1; j < num; i++)
//     {
//       if (ar[i] > ar[j])
//       {
//         temp_swap = ar[i];
//         ar[i] = ar[j];
//         ar[j] = temp_swap;
//       }

//     }

//   }
//    printf("Array In Ascending Order Is: ");
//   for ( i = 0; i < num; i++)
//   {
//     printf("%d\n",ar[i]);
//   }

//   return 0;
//   }

// #include<stdio.h>

// int main(){
//     int array[5],enter_num;
//     printf("The Numbers");
//     for (enter_num = 0; enter_num < 5; enter_num++)
//     {
//       scanf("%d",&array);
//     }

//     int i,j,temp;
//     for(i=0;i<5;i++){
//         for(j=0;j<(5-i-1);j++){
//             if(array[j] > array[j+1]){
//                 temp = array[j];
//                 array[j] = array[j+1];
//                 array[j+1] = temp;
//             }
//         }
//     }
//     // Print array
//     for(i=0;i<=4;i++){
//         printf("%d\n ",array[i]);
//     }
// }

// #include<stdio.h>

// int main()
// {
//     int arr[25],n,i,j,swap;
//     printf("enter no of elements:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("\nenter value of a[%d]:",i);
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swap=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=swap;
//             }
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d\n",arr[i]);
//     }

//     return 0;

// }



// Here Starts The Main Course







// Program For Bubble Sort

// #include <stdio.h>

// int main(){
//     int array_size;
//     printf("Enter The Array Size You Want: ");
//     scanf("%d",&array_size);
//     int a[array_size],n,i,j,temp_swap,b,k;
//     for (i = 0; i < array_size; i++)
//     {
//         printf("Enter Elements/Numbers: ");
//         scanf("%d",&a[i]);
//     }

//     for(b = 0;b<array_size-1;b++)
// {
//     for (k=0;k<array_size-b-1;k++)
// {
//          if (a[k] > a[k+1])
//     {
//         temp_swap = a[k];
//         a[k] = a[k+1];
//         a[k+1] = temp_swap;

//     }
// }
// }
//     for (j = 0; j < array_size; j++)
//     {
//         printf("%d\t",a[j]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     char i;
//     // int i;
//     for(i='A';i<'Z';i++)
//     {
//         printf("ASCII VALUE OF %c is %d\n",i,i);
//     }
//     return 0;
//     }

// Program to take 5 values from the user and store them in an array. Print the elements stored in the array.
// #include <stdio.h>

// int main(){
//     int arr[5],i,j;
//     for (i = 0; i < 5; i++)
//     {
//         printf("Enter Array Elements: \n");
//         scanf("%d",&arr[i]);
//     }

//     for (j = 0; j < 5; j++)
//     {
//         printf("You have entered: %d\n",arr[j]);
//     }

//     return 0;
//     }

// Program to find the average of n numbers using arrays

// #include <stdio.h>

// int main(){
// int array_size,i,n;
// printf("Enter Total Numbers You Want to enter: ");
// scanf("%d",&array_size);
//     float avg;
//     int main_array[array_size],sum = 0;

//     for (i = 0; i < array_size; i++)
//     {
//         printf("Enter %d Number: ",i+1);
//         scanf("%d",&main_array[i]);
//         sum = sum + main_array[i];
//     }

//     avg = sum / (float)array_size;
//     printf("Average Of Numbers Is %f",avg);
//     return 0;
//     }

// Input marks of 5 subjects & store in an array. Write a Program to calculate percentage and grade of student.
// #include <stdio.h>

// int main(){
//     int subject[5],i,sum=0,final_grade;
//     float percentage;
//     for (i = 0; i < 5; i++)
//     {
//         printf("Enter marks of subject %d-",i+1);
//         scanf("%d",&subject[i]);
//         sum = sum + subject[i];
//     }
//     percentage = ((float)sum /500)*100;
//     printf("Percentage Is %f",percentage);

//     printf("\nTotal Marks:  %d/500",sum);

//     if (percentage>=80)
//         final_grade = 'A';
//     else if (percentage>=50)
//         final_grade = 'B';
//     else
//         final_grade = 'C';

//     printf("\nPercentage is:  %f Grade is:  %c",percentage,final_grade);
//     return 0;
//     }



// Write a C Program to Put Even & Odd Elements of an Array in 2 Separate Arrays 
// #include <stdio.h>

// int main()
// {
//     int array_size, i, n = 0;
//     printf("Enter Total Numbers You Want to enter: ");
//     scanf("%d", &array_size);
//     int main_array[array_size], even[array_size], odd[array_size];
//     int odd_if = 0, even_if = 0;

//     for (i = 0; i < array_size; i++)
//     {
//         printf("Enter %d Numbers: ", i + 1);
//         scanf("%d", &n);
//         if (n % 2 == 0)
//         {
//             even[odd_if] = n;
//             odd_if++;
//         }
//         else
//         {
//             odd[even_if] = n;
//             even_if++;
//         }
//     }

//     printf("Even Numbers Are: ");
//     for (i = 0; i < odd_if; i++)
//     {
//         printf("%d\n", even[i]);
//     }
//     printf("Odd Numbers Are: ");
//     for (i = 0; i < even_if; i++)
//     {
//         printf("\n%d", odd[i]);
//     }
//     return 0;
// }


// C program to accept an array of integers and delete the specified integer from the list. Practical 11

// #include <stdio.h>

// int main(){
//     int array_size;
//     printf("Enter Array Size: ");
//     scanf("%d",&array_size);
//     int main_array[array_size],i,remove_num,final_array,k=0;
//      for (i = 0; i < array_size; i++)
//     {
//         printf("Enter Number %d: ",i+1);
//         scanf("%d",&main_array[i]);
//     }
//      for (i = 0; i < array_size; i++)
//     {
//         printf("The Array is: %d\t\n",main_array[i]);
//     }

//     printf("Enter The Position Of Array Element To Be Removed: ");
//     scanf("%d",&remove_num);
//         for(i=0;i<array_size;i++){
//         if (main_array[i] == remove_num)
//             continue;
//         else{
//             final_array[k] = main_array[i];
//             k++;
//         }

//         printf("Final Array Is: ");
//         for (i = 0; i < k; i++)
//         {
//             printf("%d\t",final_array[i]);
//         }
//     }
//      return 0;
//     }


// C program to accept an array of integers and delete the specified integer from the list. 
// so you have array_size variable it is a size of your array. For loop iterates from 0 (i=0) and does that as long as i is less than array size (i<array_size part). Every iteration your for loop will increment i by one (i++) that is general for loop declaration, if it is still not clear let me know I will explain that as well, as understanding this concept is very important
// then you have conditions - if statement. in if statement you check if certain logic is true or false. In your case you check if min_array[i] is equal to delete_num
// #include<stdio.h>
// void main(){
//     int array_size,i,k=0,delete_num;

//     printf("\nEnter Array Size: ");
//     scanf("%d",&array_size);
//     int main_array[array_size],final[array_size];

//     for(i=0;i<array_size;i++){
//         printf("Enter %d Element: ",i+1);
//         scanf("%d",&main_array[i]);
//     }
// printf("\nEnter Element To Be Deleted: ");
// scanf("%d",&delete_num);

//     for(i=0;i<array_size;i++){
//         if (main_array[i] == delete_num)
//             continue;
//         else{
//             final[k] = main_array[i];
//             k++;
//         }
//     }
//     printf("\nFinal Array: ");
//     for(i=0;i<k;i++){
//         printf("%d  ",final[i]);
//     }
// }





#include <stdio.h>

int main(){
    printf("Hello World are you there? then hiii");
    return 0;
    }