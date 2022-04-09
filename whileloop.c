#include<stdio.h>
int main()
{ 
    int ch;
    float r,v,h,L,B,A,T,R;
    begin:
    printf("enter 1 for area of circle\nenter 2 for area of triangle\nenter 3 for area of recctangle\n");
    scanf("%d",&ch);
    if (ch==1)
    {goto first;}
    else if (ch==2)
    {goto second;}
    else if (ch==3)
    {goto third;}
    else{
    printf("sorry you entered wrong vlaue and returned to begining\n\n\n\n");
    goto begin;
    }
first:
    printf("enter the radius of the circle\n");
    scanf("%f",&r);
    A=3.1415*r*r;
    printf("the area of circle is %.2f\n",A);
    goto end;

second:
    printf("enter the height and breadth of triangle\n");
    scanf("%f %f",&h,&v);
    T=.5*v*h;
    printf("the area of triangle is %.2f\n",T);
    goto end;

third:
    printf("enter the length and breadth of rectangle \n");
    scanf("%f %f",&L,&B);
    R=L*B;
    printf("the area of rectangle is %.2f\n",R);
    goto end;
end:

    return 0;
}
