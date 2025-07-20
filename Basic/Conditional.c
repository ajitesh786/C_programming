// #include<stdio.h>
// int main() {
//     // If else statement
//     int age = 19;
//     if (age<=18)
//     {
//        printf("you are teenager : ");
//     }
//     else {
//         printf("you are adult");
//     }
    
// }
// #include<stdio.h>
// int main() {
//     int number;
//     printf("enter number : ");
//     scanf("%d",&number);
//     if (number%2==0)
//     {
//         /* code */printf("Even number ");
//     } else {
//         printf("Odd number");
//     }
//     return 0;
    
// }
// # include<stdio.h>
// int main() {
//     int age;
//     printf("enter age : ");
//     scanf("%d",&age);
//     if (age<12)
//     {
//         /* code */printf("Child");

//     } else if (age>=12 && age<18)
//     {
//         /* code */printf("Teenager");
//     } else if (age>=18)
//     {
//         /* code */ printf("Adult");
//     }
//     return 0;
    
    
// }
// Ternary Operator
// #include<stdio.h>
// int main() {
//     int age;
//     printf("Enter age :");
//     scanf("%d",&age);
//     age > 18 ? printf("adult") : printf("not adult");
//     return 0;
// }
// Switch Integer
// #include<stdio.h>
// int main() {
//     int day;
//     printf("enter number : ");
//     scanf("%d",&day);
//     switch (day)
//     {
//     case 1: printf("monday");
//         /* code */
//         break;
//     case 2: printf("tuesday");
//         break;
//     case 3: printf("wednesday");
//     break;
//     case 4: printf("thursday");
//     break;
//     case 5: printf("friday");
//     break;
//     case 6: printf("saturday");
//     break;
//     case 7: printf("sunday");
//     break;    
    
//     default: printf("not a valid day");
//         break;
//     }
//     return 0;
// }
 // Character case switch statement
 #include<stdio.h>
 int main() {
    char ch = 'x';
    printf("enter character : ");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'm' : printf("monday");
    break;
    case 't' : printf("tuesday"); // case me single character hi use karna hai;
    break;
    case 'w' : printf("wednesday");
    break;
    case 'T' : printf("thursday");
    break;
    case 'f' : printf("friday");
    break;
    case 's' : printf("saturday");
    break;
    case 'S' : printf("sunday");
    break;
       
    default: printf("not a valid character ");
        break;
    }
    return 0;
 }
