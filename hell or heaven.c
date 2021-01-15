#include <stdio.h>
int main()
{
    int in;
    printf("Where would yo u like to go? Select 1,2,3 : ");
    scanf("%d",&in);
    if(in==1)
        printf("You would go to heaven!!!\n");
    else
    {
        if(in==2)
            printf("You would die in hell!!!\n");
        else
            printf("Mother Earth has still a place for you!!!\n");
    }

}
