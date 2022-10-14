#include <stdio.h>  
int main()  
{  
    int marks;   
    printf("Enter marks");  
    scanf("%d",&marks);   
    if(marks > 75 && marks <= 100)  
    {  
        printf("grade A");   
    }  
    else if (marks > 50 && marks <= 75)   
    {  
        printf("grade B");  
    }  
    else if (marks > 25 && marks <= 50)   
    {  
        printf("grade C");  
    }  
    else if (marks >10 && marks <= 25)   
    {  
        printf("grade D");   
    }  
    else   
    {  
        printf("fail");   
    }  
}  
