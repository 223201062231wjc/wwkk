#include<stdio.h>
#include<stdlib.h>
int main(){
 int a[7];
 int sum=0;
 int max=0;
 int count=0;
 for(int i=1;i<=6;i++){
  scanf("%d",&a[i]);
   if(a[i]>0)
	   count++;
  }
 if(count==0)
  max=0;
 for(int j=1;j<=6;j++){
  for(int k=j;k<=6;k++){
	  sum=0;
   for(int s=j;s<=k;s++){
		sum=sum+a[s];
    }
	if(sum>max)
		max=sum;
   }
  }
 printf("%d",max);
 system("pause");
 return 0;
}
 
