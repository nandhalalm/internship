
#include <stdio.h>
#include <string.h> 

    struct employee
    {
        int id;
        char name [50];
        float salary;
    }e1,e2;
    
 int main()
{ 
    e1.id=101;
    strcpy(e1.name,"nandhalal.m");
    e1.salary=56000;
    
    e2.id=102;
    strcpy(e2.name, "James Bond");
    e2.salary=126000;

    printf( "employee 1 id : %d\n", e1.id); 
    printf( "employee 1 name : %s\n", e1.name);
    printf("employee 1 name:%f\n",e1.salary);
    
    printf( "employee 2 id : %d\n", e2.id); 
    printf( "employee 2 name : %s\n", e2.name);
    printf("employee 2 name:%f\n",e2.salary);
    return 0;
}