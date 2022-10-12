#include <stdio.h>

int main()
 {
    printf("RA2211042010042\n");
     printf("enter complex number 1\n");
     float real1,real2,complex1,complex2,sum_real,sum_complex;
     printf("real part =\ncomplex part=\n");
  scanf("%f%f",&real1,&complex1);
  printf("enter complex number 2\n");
     printf("real part =\ncomplex part=\n");
  scanf("%f%f",&real2,&complex2);

 sum_real=real1+real2;
 sum_complex=complex1+complex2;
 printf("sum complex number\n");
 printf("real part =%f\ncomplex part=%f\n",sum_real,sum_complex);
 printf("%f+i%f\n",sum_real,sum_complex);
     
 

    return 0;
}

