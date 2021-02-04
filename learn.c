// #include <stdio.h>
// void main() {
//     int a, b;
//     printf("Enter a: ");
//     scanf("%d", &a);
//     printf("Enter b: ");
//     scanf("%d", &b);
//     a = a - b;   
//     b = a + b;
//     a = b - a;
//     printf("After Swapping a = %d\n", a);
//     printf("After Swapping b = %d", b);
// }


// #include <stdio.h>
 
// int main () {

//    /* an array with 5 rows and 2 columns*/
//    int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
//    int i, j;
 
//    /* output each array element's value */
//    for ( i = 0; i < 5; i++ ) {

//       for ( j = 0; j < 2; j++ ) {
//          printf("a[%d][%d] = %d\n", i,j, a[i][j] );
//       }
//    }
   
//    return 0;
// }


   
   
// #include <stdio.h>
 
// int main()
// {
//    float c = 5.0;
//    printf ("Temperature in Fahrenheit is %.2f", (9/5)*c + 32);
//    return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     a = 4;
//     a >>= 2;
    
//     printf("Value of a is %d",a);
 
//     return 0;
// }
// #include <stdio.h> 
// int main() 
// { 
//   int a = 10, b = 20, c = 30; 
//   if (c > b > a) 
//     printf("TRUE"); 
//   else
//     printf("FALSE"); 
//   return 0; 
// }
// #include<stdio.h>
// void main()
// {
//     int a = 0;
//     if(a)
//         printf("Study");
//     else
//         printf("tonight");
// }

// #include <stdio.h>

// void main( )
// {
//     int x, y;
//     x = 15;
//     y = 13;
//     if (x > y )
//     {
//         printf("x is greater than y");
//     }
//    else
//    {
//       printf("y is greater than x");
//    }
// }
// #include <stdio.h>
// int main()
// {
//     int i = 5, j = 10, k = 15;
//     printf("%d ", sizeof(k /= i + j));
//     printf("%d", k);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//    int a = 0;
//    int b;
//    a = (a == (a == 1));
//    printf("%d", a);
//    return 0;
// }

// #include <stdio.h>

// int main(){
//    int x = 8;
//    int y = (x  > 6 ? 4 : 6); 
//    printf("%d",y);

//    return 0;
//    }

// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     int y = 15;
 
//     printf("%d", (x, y));
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// void main()
// { 
//      switch (2)
//     {
//         case 1: printf("one");
//         case 2: printf("two");
//         case 3: printf("three");
//         default: printf("four");
//     }
// }
// #include "stdio.h"
// void main() 
// { 
//   int x, y = 4, z = 5; 
//   x = y == z; 
//   printf("%d", x); 
// }

// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     int y = ++x
//     printf("%d", y);
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// void main()  
// {printf("javatpoint");  
// main();}
// goto hello1;
// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     a = 4;
//     a >>= 2;
    
//     printf("Value of a is %d",a);
 
//     return 0;
// }

// #include <stdio.h>

// main(){
//     printf("Hello World..");
   
//    }


// C program to accept an array of integers and delete the specified integer from the list. 
#include<stdio.h>

void main(){
    int size,i,k=0,j=0;
    printf("Enter Array Size: ");
    scanf("%d",&size);

    int even[size],odd[size];
    for(i=0;i<size;i++){
        int n = 0;
        printf("Enter %d Number: ",i+1);
        scanf("%d",&n);
        if(n%2==0){
            even[k] = n;
            k++;
            }
        else{
            odd[j] = n;
            j++;
        }
    }
    printf("\nEven Numbers: ");
    for(i=0;i<k;i++){
        printf("%d  ",even[i]);
    }
    printf("\nOdd Numbers: ");
    for(i=0;i<j;i++){
        printf("%d  ",odd[i]);
    }
}