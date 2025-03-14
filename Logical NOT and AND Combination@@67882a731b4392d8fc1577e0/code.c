#include<stdio.h>


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
        printf("%s","true");
    }else{
        printf("%s","false");
    }

    return 0;
}