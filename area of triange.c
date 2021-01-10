#include <stdio.h>
#include <math.h>
int main()
{

    float s1,s2,s3,semi,heron,se;
    printf("Enter the length of the first side : ");
    scanf("%f", &s1);
    printf("Enter the length of the second side : ");
    scanf("%f",&s2);
    printf("Enter thee length of the third side : ");
    scanf("%f ", &s3);

    semi=(s1+s2+s3)/2;
    se=semi*(semi-s1)*(semi-s2)*(semi-s3);

    heron= sqrt(se);

    printf("The area of the triangle is : %f\n", heron);
    return 0;


}
