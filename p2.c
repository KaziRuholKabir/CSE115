#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("Input - ");
    scanf("%d %d", &a, &b);
    int c,d,e;
    float f;
    c = pow(a,2);
    d = pow(b,2);
    e = c+d;
    f = sqrt(pow(e,2));
    printf("%d", (int)f);
    if(e != f){
        printf("not possible");
    }
    else {
        printf("Possible Pythagorean triples");
    }



    return 0;
}
