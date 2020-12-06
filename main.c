
#include <stdio.h>

int main()
{int a;
printf("enter your marks :");
scanf("%d",&a);
if(a<=100 && a>=85){
    printf("Your grade is A");
}
else if(a<85 && a>=70){
    printf("Your grade is B");
}else if(a>=55 && a<70){
    printf("Your grade is C");
}else if(a>=40 && a<55){
    printf("Your grade is D");
}else if(a<40){
    printf("Your grade is F");
}

return 0;
}