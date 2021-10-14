#include<stdio.h>
#include<stdbool.h>
int main(){

    char pass[100];
    printf("Enter Password: ");
    gets(pass);
    int length = strlen(pass);
    int lower, upper, digit, special, allOk;
    //printf("%d", length);


    int i,count =1;
    for(i=0; i<strlen(pass);i++){

        if(pass[i] >= '0' && pass[i] <= '9'){

            count++;
            digit = 1;
            break;


            //printf("At least one digit missing\n");

        }
        else{
            digit = 0;
        }
    }
    for(i=0; i<strlen(pass);i++){

        if(pass[i] >= 'a' && pass[i] <= 'z'){

            lower = 1;
            break;


            //printf("At least one digit missing\n");

        }
        else{
            lower = 0;
        }
    }
        for(i=0; i<strlen(pass);i++){

            if(pass[i] >= 'A' && pass[i] <= 'Z'){


                upper = 1;
                break;


                //printf("At least one digit missing\n");

            }
            else{
                upper = 0;
            }
        }
        for(i=0; i<strlen(pass);i++){

            if(pass[i]== '!' || pass[i]== ':' || pass[i]=='!' || pass[i]== '@' || pass[i]== '#'|| pass[i]== '$ '|| pass[i]== '%'|| pass[i]== '^'|| pass[i]== '& '|| pass[i]== '*' || pass[i]== '('|| pass[i]== ')'|| pass[i]== '-' || pass[i]== '+' ){


                special = 1;
                break;


                    //printf("Special character missing\n");

                }
                else{
                    special = 0;
                }
            }
        if(length <8){
            printf("This is not a strong password \n");
            printf("Length is smaller than 8 \n");


         if(digit== 0 && lower==0 && upper==0 && special == 0){
            printf("At least one digit missing\n");
            printf("Lower case letter missing\n");
            printf("Upper case letter missing\n");
            printf("Special character missing\n");
        }
        else if(special == 0){
            printf("Special character missing\n");

        }
        else if(upper == 0){
            printf("Upper character missing\n");

        }
        else if( upper==0 && special == 0){
            //printf("At least one digit missing\n");
            //printf("Lower case letter missing\n");
            printf("Upper case letter missing\n");
            printf("Special character missing\n");
        }
        else if(lower == 0){
            printf("Lower case character missing\n");

        }
         else if(lower==0&& special == 0){
            //printf("At least one digit missing\n");
            printf("Lower case letter missing\n");
           // printf("Upper case letter missing\n");
            printf("Special character missing\n");
        }
         else if(lower==0 && upper==0){
            //printf("At least one digit missing\n");
            printf("Lower case letter missing\n");
            printf("Upper case letter missing\n");
            //printf("Special character missing\n");
        }
           else if(lower==0 && upper==0 && special == 0){
            //printf("At least one digit missing\n");
            printf("Lower case letter missing\n");
            printf("Upper case letter missing\n");
            printf("Special character missing\n");
        }
         else if(digit== 0){
            printf("At least one digit missing\n");
            //printf("Lower case letter missing\n");
            //printf("Upper case letter missing\n");
            //printf("Special character missing\n");
        }
         else if(digit== 0&& special == 0){
            printf("At least one digit missing\n");
            //printf("Lower case letter missing\n");
            //printf("Upper case letter missing\n");
            printf("Special character missing\n");
        }
         else if(digit== 0 && upper==0){
            printf("At least one digit missing\n");
            //printf("Lower case letter missing\n");
            printf("Upper case letter missing\n");
           // printf("Special character missing\n");
        }
         else if(digit== 0&& upper==0 && special == 0){
            printf("At least one digit missing\n");
            //printf("Lower case letter missing\n");
            printf("Upper case letter missing\n");
            printf("Special character missing\n");
        }
         else if(digit== 0 && lower==0 ){
            printf("At least one digit missing\n");
            printf("Lower case letter missing\n");
            //printf("Upper case letter missing\n");
            //printf("Special character missing\n");
        }
         else if(digit== 0 && lower==0&& special == 0){
            printf("At least one digit missing\n");
            printf("Lower case letter missing\n");
            //printf("Upper case letter missing\n");
            printf("Special character missing\n");
        }
         else if(digit== 0 && lower==0 && upper==0){
            printf("At least one digit missing\n");
            printf("Lower case letter missing\n");
            printf("Upper case letter missing\n");
            //printf("Special character missing\n");
        }
        else{
            printf("Good to Go");
        }
        }
            /*if(pass[i] >= 'a' && pass[i] <= 'z'){

                lower = true;
                break;

                //printf("Lower case letter missing\n");

            }
            else if(pass[i] >= 'A' && pass[i] <= 'B'){


                upper = true;

                //printf("Upper case letter missing\n");
                break;
            }
            else if(pass[i]== '!' || pass[i]== ':' || pass[i]=='!' || pass[i]== '@' || pass[i]== '#'|| pass[i]== '$ '|| pass[i]== '%'|| pass[i]== '^'|| pass[i]== '& '|| pass[i]== '*' || pass[i]== '('|| pass[i]== ')'|| pass[i]== '-' || pass[i]== '+' ){
                special = true;
                break;
            }
            else {
                allOk = true;
                break;
            }


            if(digit== false){
                printf("At least one digit missing\n");
            }
            else if(lower== false){
                printf("Lower case letter missing\n");
            }
            else if(upper== false){
                printf("Upper case letter missing\n");
            }
            else if(special== false){
                printf("At least one special character missing\n");
            }
            else if(allOk == true){
                printf("Good to Go!!");
            }

        }*/


    //printf("%d test", count);





    return 0;
}
