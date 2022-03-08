#include<stdio.h>
union Student
{
    char s_name[50];
    int rno,c_mark;
};
void main()
{
    int n,i,high,low,x,y;
    printf("Enter the no. of students:");
    scanf("%d",&n);
    union Student s[n];
    for(i=0;i<n;i++)
    {
        printf("\n Enter the name of Student:");
        scanf("%s",&s[i].s_name);
        printf("\n Enter the roll no. of Student:");
        scanf("%d",&s[i].rno);
        printf("\n Enter the mark of C for Student:");
        scanf("%d",&s[i].c_mark);
    }
    high=s[0].c_mark;
    low=s[0].c_mark;
    for(i=0;i<n;i++)
    {
        if(high<=s[i].c_mark)
        {
            high=s[i].c_mark;
            x=i;
        }
        if(low>=s[i].c_mark)
        {
            low=s[i].c_mark;
            y=i;
        }
    }
    printf("\nStudent with Highest Mark");
    printf("\n Roll No:%d\tName:%s\t C Mark:%d",s[x].rno,s[x].s_name,s[x].c_mark);
    printf("\nStudent with Lowest Mark");
    printf("\n Roll No:%d\tName:%s\t C Mark:%d",s[y].rno,s[y].s_name,s[y].c_mark);
    getch();
}
