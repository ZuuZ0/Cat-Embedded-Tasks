#include<stdio.h>
int main(){
    int n;
    printf("Enter the hieght of the pyramid : ");
    scanf("%d",&n);  
    for(int i=1;i<=n;i++){

for(int j=1;j<=2*n-1;j++){

if(j>=n-(i-1)&& j<=n+(i-1)){
printf("*"); //printig the pyramid
}
else {
    printf(" "); //printig the pyramid


}

}
printf("\n");
    }


}