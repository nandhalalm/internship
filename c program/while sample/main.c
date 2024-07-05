
#include <stdio.h>
#include <stdlib.h>


void main()
{
      char c;
      int choice,dummy;
      do{
          
          printf("\n1. print hello\n2.print javapoint\n3.exit\n ");
          scanf("%d",&choice);
          
          switch (choice)
          {
              case 1:
               printf("hello");
               break;
               
                case 2:
               printf("javascript");
               break;
               
                case 3:
                 exit(0);
               break;
               
               default:
                  printf(" enter valid choice");
          }
          printf("do you want to enter more:");
          scanf("%d",&dummy);
          scanf("%c",&c);
      }
      while(c=='y');
}