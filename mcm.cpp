#include<stdio.h>
int main(){

int n,i,j,k,q;
int p[]={5,4,6,2,7};

int M[5][5];

memset(M,0,sizeof(M));
for(d=0;d<n-1;n++){
for(i=0;i<n-d;i++){

j=i+d;
min=32767;
for(int k=i;k<=j-1;k++){
q=M[i][k]+M[k+1][j]+(p[i-1]*p[j]*p[k]);
if(q<min)
min=q;


}
M[i][j]=min;


}
}
printf("%d\n",M[1][n-1])

}





int main(){

int d,i,j,k,min,q;
p={5,4,2,3,7};
int m[5][5];
int n=5;

for(d=0;d<n-1;d++){
for(j=0;j<=n-d;j++)
{
j=i+d;
min=543442;
for(k=i;k<=j-1;j++){

q=M[i][k]+M[k+1][j]+(p[i-1]*p[j]*p[k]);
if(q<min)
min=q
}
m[i][j]=min;


}

}
printf("%d\n",m[1][n-1]);
}
