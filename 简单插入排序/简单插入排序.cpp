// �򵥲�������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<stdio.h> 
void insort(int *r, int n) 
{//rΪ�����ı����¼Ϊr[i]��i=0��1������n��xΪ�ݴ浥Ԫ 
int i,j; 
for (i=1; i<n; i++) 
{ 
r[0]=r[i]; //r[0]��Ϊ��־λ 
j=i-1; 
while (r[0]<r[j]) 
{ 
r[j+1]=r[j]; 
j--; 
} //j��i-1��0��r[j].key��r[i].key���бȽ� 
r[j+1]=r[0]; 
} 
}//insort 
void main() 
{ 
int i; 
int a[11]={100,29,54,31,38,85,79,60,43,76,97}; 
insort(a,11); 
for(i=1;i<11;i++) 
printf("%d\n",a[i]); 
int b=0;
scanf("%d",b);
}
