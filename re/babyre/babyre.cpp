#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="ndwbsseq{qehseum}";
    char b[50];int m,n=3;
	for(m=0;m<strlen(a);m++)
	{
		b[m]=a[m]+n+m%2-3;
		
	}
	b[m]=0;
	return 0;
}
