#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int odd=0;
    int even=0;
    

    for (int i = 0; i < 5; i++) {
        if (array[i] % 2==0)
        {
            even +=array[i];
        }
        else
        {
            odd +=array[i];
        }
    }

    
        printf("even number %d \n",even);

    
        printf("odd number  %d \n",odd); 
}