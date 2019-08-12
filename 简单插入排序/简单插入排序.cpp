// 简单插入排序.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h> 
void insort(int *r, int n) 
{//r为给定的表，其记录为r[i]，i=0，1，…，n，x为暂存单元 
int i,j; 
for (i=1; i<n; i++) 
{ 
r[0]=r[i]; //r[0]作为标志位 
j=i-1; 
while (r[0]<r[j]) 
{ 
r[j+1]=r[j]; 
j--; 
} //j从i-1至0，r[j].key与r[i].key进行比较 
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
