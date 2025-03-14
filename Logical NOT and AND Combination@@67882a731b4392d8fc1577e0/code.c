#include<stdio.h>
#include<stdbool.h>

bool check(int a,int b){
    if(a<0 && b<0) return true;
    return false;
}   


int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);

    bool ans=check(a,b);
    if(ans){
        printf("%s","True");
    }else{
        printf("%s","False");
    }

    return 0;
}