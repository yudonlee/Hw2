#include <stdio.h>
int hanoi(int n);
int main(){
    while(1){
    int a;
    printf("input integer for hanoi_Tower(if you want to exit input -1\n");
    scanf("%d",&a);
    if(a==-1)
        break;
    else
       printf("hanoi minimum number:%d \n",hanoi(a));
    
    }

}
int hanoi(int n){
    if(n==1)
        return 1;
    else if(n<1)
        return 0;
    else
        return 2*hanoi(n-1)+1;
}
