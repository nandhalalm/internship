
# include <stdio.h>


int main(){

    
    int P, T;
    float SI ,R;

    printf("Enter the principal: ");
    scanf("%d", &P);

    printf("Enter the rate: ");
    scanf("%f", &R);

    printf("Enter the time: ");
    scanf("%d", &T);

    SI =  P*(1 + R*T);
    printf("The Simple interest is %f", SI);

    return 0;

}
