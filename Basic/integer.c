#include <stdio.h>
#include<math.h>
int main() {
    int p,q,r,s;
    printf("Input Integer p(Even): ");
    scanf("%d",&p);

    printf("Input Integer q>0: ");
    scanf("%d",&q);

    printf("Input Integer r>0: ");
    scanf("%d",&r);

    printf("Input Integer s>0: ");
    scanf("%d",&s);
    int sum;
    sum = r+s;
    if (q>r && s>p && sum>p && sum >q)
    {
        /* code */ printf("Correct Values");
        
    }
    else printf("Wrong Values");
    return 0;
}