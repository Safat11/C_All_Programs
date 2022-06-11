#include<stdio.h>

int main()
{
	int a[100]={0},n,i,max=0,min=100,sum=0;
	float avg;

	int ca=0,cb=0,cc=0,cd=0,ce=0,cf=0,cg=0,ch=0,ci=0,cj=0,ck=0,cl=0,cm=0;
	int x=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,y=0,z=0,k=0,l=0,j=0;
	printf("\nEnter total student (0-50) :");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		printf("Enter total number (0-100)%d :",i);
		scanf("%d",&a[i]);
	   sum=sum+a[i];
	}

	avg=(float)sum/n;

	for(i=1;i<=n;i++)
	{
	if(max<a[i])//0<50  <90
	{
	max=a[i];//90
    }
	if(min>a[i])//100>90>50
	{
	min=a[i];//50
    }
    }

    for(i=1;i<=n;i++)
    {
	if(a[i]>=97 && a[i]<=100)
	{ca++;
	}
	if(a[i]>=90 && a[i]<=96)
	{cb++;
	}
		if(a[i]>=87 && a[i]<=89)
	{cc++;
	}
		if(a[i]>=83 && a[i]<=86)
	{cd++;
	}
		if(a[i]>=80 && a[i]<=82)
	{ce++;
	}
		if(a[i]>=77 && a[i]<=79)
	{cf++;
	}
		if(a[i]>=73 && a[i]<=76)
	{cg++;
	}
		if(a[i]>=70 && a[i]<=72)
	{ch++;
	}
		if(a[i]>=67 && a[i]<=69)
	{ci++;
	}
		if(a[i]>=63 && a[i]<=66)
	{cj++;
	}
		if(a[i]>=60 && a[i]<=62)
	{ck++;
	}
		if(a[i]<60 && a[i]>=0)
	{cl++;
	}

	}
	printf("\nTotal number                :%d",sum);
	printf("\nTotal average               :%0.2f",avg);
	printf("\nMaximum number of a student :%d",max);
	printf("\nMinimum number of a student :%d",min);
    printf("\nGrade distribution and Histrogram");
    printf("\n");
     printf("\nA+97-100:%d ",ca);
	for(x=0;x<ca;x++)//2
	{
		printf("%c",'*');

	}
	 printf("\nA  90-96:%d ",cb);
	for(b=0;b<cb;b++)//cb=3 b=0+1+1+1=cb
	{
		printf("%c",'*');

	}
	 printf("\nA- 87-89:%d ",cc);
	for(c=0;c<cc;c++)
	{
		printf("%c",'*');

	}
	 printf("\nB+ 83-86:%d ",cd);
	 for(d=0;d<cd;d++)
	{
		printf("%c",'*');

	}
     printf("\nB  80-82:%d ",ce);
	for(e=0;e<ce;e++)
	{
		printf("%c",'*');

	}
	 printf("\nB- 77-79:%d ",cf);
	for(f=0;f<cf;f++)
	{
		printf("%c",'*');

	}
	 printf("\nC+ 73-76:%d ",cg);
	for(g=0;g<cg;g++)
	{
		printf("%c",'*');

	}
	 printf("\nC  70-72:%d ",ch);
	for(h=0;h<ch;h++)
	{
		printf("%c",'*');

	}
	 printf("\nC- 67-69:%d ",ci);
	for(y=0;y<ci;y++)
	{
		printf("%c",'*');

	}
	 printf("\nD+ 63-66:%d ",cj);
	for(z=0;z<cj;z++)
	{
		printf("%c",'*');

	}
	 printf("\nD  60-62:%d ",ck);
	for(k=0;k<ck;k++)
	{
		printf("%c",'*');

	}
	 printf("\nF  00-60:%d ",cl);
	for(l=0;l<cl;l++)
	{
		printf("%c",'*');
	}

}

