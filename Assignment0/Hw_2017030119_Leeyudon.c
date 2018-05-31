#include <stdio.h>
#include <stdlib.h>
void switchifcase();
void main(){
switchifcase();
} 

void switchifcase(){
while(1){
    int x;
    printf("Input only 1,2,3,4.\nIf you want to exit program,please Input number 5.\n");
    scanf("%d",&x);
    if(x ==1){
    printf("Beef\n");
    }
    else if(x==2){
    printf("Chicken\n");
    }
    else if(x==3){
    printf("Wine\n");
    }
    else if(x==4){
    printf("Lamb\n");
    }
    else if(x==5){
    exit(1);
    }
    else printf("Invalid Input\n");


}
}


