// #include<stdio.h>
// int main() {
//     for(int i=1;i<=50;i++) {
//      if (i%2==0)
//      {
//         /* code */ printf("%d\n",i);
//      }
     
//     }
//     return 0;
// }
// #include<stdio.h>
// int main() {
//     int i=1;// Declaration statement
//     while (i<=50)
//     {
//       if (i%2==0)
//       {
//         /* code */printf("%d\n",i);
//       }
//        /* code */i++;
//     }
//     return 0;
    
// }
#include<stdio.h>
int main() {
   int i=1;
    do
    { if (i%2==0)
    {
        /* code */printf("%d\n",i);
    }
    
     i++; // updatation statement 
    } while (i<=50); // termination statement
    return 0;
    
}