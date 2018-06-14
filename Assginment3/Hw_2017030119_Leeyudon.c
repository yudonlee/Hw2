#include <stdio.h>
void comF(char *a,int l,char *b,int n);
int main(){
    char a[6];
    char b[6];
    scanf("%s",a);
    scanf("%s",b);
    comF(a,sizeof(a)/sizeof(char),b,sizeof(b)/sizeof(char));
}
void comF(char *a,int l,char *b,int n){    
    int count;
    for(int i=0;i<6;i++){
        if(*(a+i) ==*(b+i))
            count++;
        else count+=0;                  
    }
    if(count!=6){
        for(int i=0;i<6;i++){
        if(*(a+i) == *(b+i))
            printf("%d",i+1);
            if(count>1){
            printf(",");
            count--;
            }
        }
        
    }
    else{
        printf("0");
    }


}
