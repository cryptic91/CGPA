#include<stdio.h>

int main(){
    
    int sem=0, i;
    double s=0, c, sg, final=0, cg=0 ;

    printf("How many semester you have completed? ");
    scanf("%d",&sem);

    for ( i = 1; i <= sem; i++){

        printf("\nEnter the SGPA of your %d semester: ",i);
        scanf("%lf",&sg);

        printf("Enter the total credits of your %d semester: ",i);
        scanf("%lf",&c);

        cg += (sg*c) ;
        s = (s+c);
    }

    final = cg/s ;
    
    printf("\nYou CGPA = %0.2lf\n", final);

    return 0;
}