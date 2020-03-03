#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX_LINE_SIZE 250
int main(int argc,char *argv[])
{
FILE *fd;
char line[MAX_LINE_SIZE],*filename=argv[1];
int i,j,k,m,p,r,cnt=0;
float max = -1,sum;
double arr[1000];
fd=fopen(argv[1],"r");
if((fd=fopen(argv[1],"r"))==NULL)
{
printf("error in opening file %s\n",argv[1]);
exit(0);
}
cnt=0;
while(!feof(fd))
{
fscanf(fd,"%lf",&arr[cnt]);
cnt++;
}
fclose(fd);
for(i=0;i<cnt;i++)
{
for(j=i;j<cnt;j++)
{
sum=0;
for(k=i;k<=j;k++)
sum+=arr[k];
if(sum>max){
max=sum;
}}}
printf("max sum is=%4.2f\n",max);
return 0;
}
