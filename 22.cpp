#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int add(int x,int y);
    int subtract(int x,int y);
    int multiply(int x,int y);
    float divide(float x,float y);
	double addf(double x,double y);
	double subtractf(double x,double y);
	double multiplyf(double x,double y);
	double dividef(double x,double y);
    int a,b,i,j=1,t,m,n,max,q,r,h;  //a��bΪ��������ʽ��������ɵ���������tΪ��������ʽ��������ɵ��������mΪ�û��Զ������������ʽ������nΪÿһ����ʾ����������ʽ������maxΪ�����,q��¼���㷨��
    char ch;
	double z,c,v;
    printf("��������Ҫ���ɵ���������ʽ������"); 
    scanf("%d",&m);
    printf("������ÿһ�е���������ʽ������");
    scanf("%d",&n);
	printf("�����뼸�ԼӼ���");
	scanf("%d",&max);
	printf("���������㷨��,1=+,2=-,3=*,4=/");
	scanf("%d",&q);
	printf("��������û��С��");
	scanf("%d",&r);
	printf("��������û������");
	scanf("%d",&q);
	if(q==2){
	if(r==2){
	 if(q==1){
		 ch='+';
		 for(i=0;i<m;i++){
			 if(max==10){
			 a=rand()%10+1;
			 b=rand()%10+1;
			 }
			 else if(max==100){
				a=rand()%100+1;
				b=rand()%100+1;
			 }
			 else if(max==1000){
				a=rand()%1000+1;
				b=rand()%1000+1;
			 }
				 printf("%d%c%d=%d\t",a,ch,b,add(a,b));
				 if(i%n==0) printf("\n");
			 }
	 }
     else if(q==2){
		 ch='-';
		 	 for(i=0;i<m;i++){
			 if(max==10){
			 a=rand()%10+1;
			 b=rand()%10+1;
			 }
			 else if(max==100){
				a=rand()%100+1;
				b=rand()%100+1;
			 }
			 else if(max==1000){
				a=rand()%1000+1;
				b=rand()%1000+1;
			 }
				 printf("%d%c%d=%d\t",a,ch,b,subtract(a,b));
				 if(i%n==0) printf("\n");
			 }
	 }
      
     else if(q==3)
	 {
			ch='*';
		 for(i=0;i<m;i++){
			 if(max==10){
			 a=rand()%10+1;
			 b=rand()%10+1;
			 }
			 else if(max==100){
				a=rand()%100+1;
				b=rand()%100+1;
			 }
			 else if(max==1000){
				a=rand()%1000+1;
				b=rand()%1000+1;
			 }
				printf("%d%c%d=%d\t",a,ch,b,multiply(a,b));
				if(i%n==0) printf("\n");
			 }
	 }
      
     else if(q==4)
		 	 {
				  ch='/';
		 for(i=0;i<m;i++){
			 if(max==10){
			 a=rand()%10+1;
			 b=rand()%10+1;
			 }
			 else if(max==100){
				a=rand()%100+1;
				b=rand()%100+1;
			 }
			 else if(max==1000){
				a=rand()%1000+1;
				b=rand()%1000+1;
			 }
				
				printf("%d%c%d=%.2f\t",a,ch,b,divide((float)a,(float)b));
				if(i%n==0) printf("\n");
				
			 }
	 }
	}
	if(r==1){
	 if(q==1){
		 ch='+';
		 for(i=0;i<m;i++){
			 if(max==10){
			 z=(double)rand()/RAND_MAX*10+1;
			 c=(double)rand()/RAND_MAX*10+1;
			 }
			 else if(max==100){
				 z=(double)rand()/RAND_MAX*100+1;
				c=(double)rand()/RAND_MAX*100+1;
			 }
			 else if(max==1000){
				 z=(double)rand()/RAND_MAX*1000+1;
				c=(double)rand()/RAND_MAX*1000+1;
			 }	
				 if(i%n==0) printf("\n");
				 printf("%lf%c%lf=%lf\t",z,ch,c,addf(z,c));
				
			 }
	 }
     else if(q==2){
		 ch='-';
		 	 for(i=0;i<m;i++){
			 if(max==10){
				 z=(double)rand()/RAND_MAX*1000+1;
				c=(double)rand()/RAND_MAX*1000+1;
			 }
			 else if(max==100){
					 z=(double)rand()/RAND_MAX*1000+1;
				c=(double)rand()/RAND_MAX*1000+1;
			 }
			 else if(max==1000){
				 z=(double)rand()/RAND_MAX*1000+1;
				c=(double)rand()/RAND_MAX*1000+1;
			 }
				 if(i%n==0) printf("\n");
				 printf("%lf%c%lf=%lf\t",z,ch,c,subtractf(z,c));
				
			 }
	 }
      
     else if(q==3)
	 {
			ch='*';
		 for(i=0;i<m;i++){
			 if(max==10){
				z=(double)rand()/RAND_MAX*1000+1;
				c=(double)rand()/RAND_MAX*1000+1;
			 }
			 else if(max==100){
			 z=(double)rand()/RAND_MAX*1000+1;
				c=(double)rand()/RAND_MAX*1000+1;
			 }
			 else if(max==1000){
			 z=(double)rand()/RAND_MAX*1000+1;
				c=(double)rand()/RAND_MAX*1000+1;
			 }
				if(i%n==0) printf("\n");
				printf("%lf%c%lf=%lf\t",z,ch,c,multiplyf(z,c));
				
			 }
	 }
      
     else if(q==4)
		 	 {
				  ch='/';
		 for(i=0;i<m;i++){
			 if(max==10){
				z=(double)rand()/RAND_MAX*10+1;
				c=(double)rand()/RAND_MAX*10+1;
			 }
			 else if(max==100){
				 z=(double)rand()/RAND_MAX*100+1;
				c=(double)rand()/RAND_MAX*100+1;
			 }
			 else if(max==1000){
				z=(double)rand()/RAND_MAX*1000+1;
				c=(double)rand()/RAND_MAX*1000+1;
			 }
				if(i%n==0) printf("\n");
				printf("%lf%c%lf=%.2lf\t",z,ch,c,dividef(z,c));
				
			 }
	 }
	}
	}
	if(q==1){
	if(r==2){
	 if(q==1){
		 ch='+';
		 for(i=0;i<m;i++){
			 if(max==10){
			 a=rand()%10+1;
			 b=rand()%10+1;
			 h=rand()%10+1;
			 }
			 else if(max==100){
				a=rand()%100+1;
				b=rand()%100+1;
				 h=rand()%100+1;
			 }
			 else if(max==1000){
				a=rand()%1000+1;
				b=rand()%1000+1;
				 h=rand()%1000+1;
			 }
				 printf("%d%c(%d%c%d)=%d\t",a,ch,b,ch,h,a+(b+h));
				 if(i%n==0) printf("\n");
			 }
	 }
     else if(q==2){
		 ch='-';
		 	 for(i=0;i<m;i++){
			 if(max==10){
			 a=rand()%10+1;
			 b=rand()%10+1;
			 h=rand()%10+1;
			 }
			 else if(max==100){
				a=rand()%100+1;
				b=rand()%100+1;
				 h=rand()%100+1;
			 }
			 else if(max==1000){
				a=rand()%1000+1;
				b=rand()%1000+1;
				 h=rand()%1000+1;
			 }
				 printf("%d%c(%d%c%d)=%d\t",a,ch,b,ch,h,a-(b-h));
				 if(i%n==0) printf("\n");
			 }
	 }
      
     else if(q==3)
	 {
			ch='*';
		 for(i=0;i<m;i++){
			 if(max==10){
			 a=rand()%10+1;
			 b=rand()%10+1;
			  h=rand()%10+1;
			 }
			 else if(max==100){
				a=rand()%100+1;
				b=rand()%100+1;
				 h=rand()%100+1;
			 }
			 else if(max==1000){
				a=rand()%1000+1;
				b=rand()%1000+1;
				 h=rand()%1000+1;
			 }
				printf("%d%c(%d%c%d)=%d\t",a,ch,b,ch,h,a*(b*h));
				if(i%n==0) printf("\n");
			 }
	 }
      
     else if(q==4)
		 	 {
				  ch='/';
		 for(i=0;i<m;i++){
			 if(max==10){
			 a=rand()%10+1;
			 b=rand()%10+1;
			  h=rand()%10+1;
			 }
			 else if(max==100){
				a=rand()%100+1;
				b=rand()%100+1;
				 h=rand()%100+1;
			 }
			 else if(max==1000){
				a=rand()%1000+1;
				b=rand()%1000+1;
				 h=rand()%1000+1;
			 }
				
				printf("%d%c(%d%c%d)=%d\t",a,ch,b,ch,h,(float)a/((float)b/(float)h));
				if(i%n==0) printf("\n");
				
			 }
	 }
	}
	if(r==1){
	 if(q==1){
		 ch='+';
		 for(i=0;i<m;i++){
			 if(max==10){
			 z=(double)rand()/RAND_MAX*10+1;
			 c=(double)rand()/RAND_MAX*10+1;
			 v=(double)rand()/RAND_MAX*10+1;
			 }
			 else if(max==100){
				 z=(double)rand()/RAND_MAX*100+1;
				c=(double)rand()/RAND_MAX*100+1;
				v=(double)rand()/RAND_MAX*100+1;
			 }
			 else if(max==1000){
				 z=(double)rand()/RAND_MAX*1000+1;
				c=(double)rand()/RAND_MAX*1000+1;
				v=(double)rand()/RAND_MAX*1000+1;
			 }	
				 if(i%n==0) printf("\n");
				 printf("%lf%c(%lf%c%lf)=%lf\t",z,ch,c,ch,v,z+(c+v));
				
			 }
	 }
     else if(q==2){
		 ch='-';
		 	 for(i=0;i<m;i++){
			 if(max==10){
				 z=(double)rand()/RAND_MAX*10+1;
				c=(double)rand()/RAND_MAX*10+1;
				v=(double)rand()/RAND_MAX*10+1;
			 }
			 else if(max==100){
					 z=(double)rand()/RAND_MAX*100+1;
				c=(double)rand()/RAND_MAX*100+1;
				v=(double)rand()/RAND_MAX*100+1;
			 }
			 else if(max==1000){
				 z=(double)rand()/RAND_MAX*1000+1;
				c=(double)rand()/RAND_MAX*1000+1;
				v=(double)rand()/RAND_MAX*1000+1;
			 }
				 if(i%n==0) printf("\n");
				 printf("%lf%c(%lf%c%lf)=%lf\t",z,ch,c,ch,v,z-(c-v));
				
			 }
	 }
      
     else if(q==3)
	 {
			ch='*';
		 for(i=0;i<m;i++){
			 if(max==10){
				z=(double)rand()/RAND_MAX*10+1;
				c=(double)rand()/RAND_MAX*10+1;
				v=(double)rand()/RAND_MAX*10+1;
			 }
			 else if(max==100){
			 z=(double)rand()/RAND_MAX*100+1;
				c=(double)rand()/RAND_MAX*100+1;
				v=(double)rand()/RAND_MAX*100+1;
			 }
			 else if(max==1000){
			 z=(double)rand()/RAND_MAX*1000+1;
				c=(double)rand()/RAND_MAX*1000+1;
				v=(double)rand()/RAND_MAX*1000+1;
			 }
				if(i%n==0) printf("\n");
				printf("%lf%c(%lf%c%lf)=%lf\t",z,ch,c,ch,v,z*(c*v));
				
			 }
	 }
      
     else if(q==4)
		 	 {
				  ch='/';
		 for(i=0;i<m;i++){
			 if(max==10){
				z=(double)rand()/RAND_MAX*10+1;
				c=(double)rand()/RAND_MAX*10+1;
				v=(double)rand()/RAND_MAX*10+1;
			 }
			 else if(max==100){
				 z=(double)rand()/RAND_MAX*100+1;
				c=(double)rand()/RAND_MAX*100+1;
				v=(double)rand()/RAND_MAX*100+1;
			 }
			 else if(max==1000){
				z=(double)rand()/RAND_MAX*1000+1;
				c=(double)rand()/RAND_MAX*1000+1;
				v=(double)rand()/RAND_MAX*1000+1;
			 }
				if(i%n==0) printf("\n");
				printf("%lf%c(%lf%c%lf)=%lf\t",z,ch,c,ch,v,z/(c/v));
				
			 }
	 }
	}
	}
     system("pause");
     return 0;
}
int add(int x,int y)
{return(x+y);}
int subtract(int x,int y)
{return(x-y);}
int multiply(int x,int y)
{return(x*y);}
float divide(float x,float y)
{return(x/y);}
double addf(double x,double y)
{return(x+y);}
double subtractf(double x,double y)
{return(x-y);}
double multiplyf(double x,double y)
{return(x*y);}
double dividef(double x,double y)
{return(x/y);}
	

	