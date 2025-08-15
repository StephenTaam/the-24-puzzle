#include<stdio.h>
#include <conio.h>
void count1(int a,char b,int c,int z,int x,int y)//顺序运算
{
	unsigned int add;unsigned int decrease1,decrease2;unsigned int mu;unsigned int divide1,divide2;
	
	add=z+x;
	if(add+y==24)printf("%d%c%d+%d+%d\n",a,b,c,x,y);
	else if(add-y==24)printf("%d%c%d+%d-%d\n",a,b,c,x,y);
	else if(y-add==24)printf("%d-(%d%c%d+%d)\n",y,a,b,c,x);
	else if(add*y==24)printf("(%d%c%d+%d)*%d\n",a,b,c,x,y);
	else if(y!=0&&add/y==24&&add%y==0)printf("(%d%c%d+%d)/%d\n",a,b,c,x,y);
	else if(add!=0&&y/add==24&&y%add==0)printf("%d/(%d%c%d+%d)\n",y,a,b,c,x);

    decrease1=z-x;
   
    if(decrease1+y==24)printf("%d%c%d-%d+%d\n",a,b,c,x,y);
	else if(decrease1-y==24)printf("%d%c%d-%d-%d\n",a,b,c,x,y);
	else if(y-decrease1==24)printf("%d-(%d%c%d-%d)\n",y,a,b,c,x);
	else if(decrease1*y==24)printf("(%d%c%d-%d)*%d\n",a,b,c,x,y);
	else if(y!=0&&decrease1/y==24&&decrease1%y==0)printf("(%d%c%d-%d)/%d\n",a,b,c,x,y);
	else if(decrease1!=0&&y/decrease1==24&&y%decrease1==0)printf("%d/(%d%c%d-%d)\n",y,a,b,c,x);

	decrease2=x-z;
   
    if(decrease2+y==24)printf("%d-(%d%c%d)+%d\n",x,a,b,c,y);
	else if(decrease2-y==24)printf("%d-(%d%c%d)-%d\n",x,a,b,c,y);
	else if(y-decrease2==24)printf("%d-(%d-(%d%c%d))\n",y,x,a,b,c);
	else if(decrease2*y==24)printf("(%d-(%d%c%d))*%d\n",x,a,b,c,y);
	else if(y!=0&&decrease2/y==24&&decrease2%y==0)printf("(%d-(%d%c%d))/%d\n",x,a,b,c,y);
	else if(decrease2!=0&&y/decrease2==24&&y%decrease2==0)printf("%d/(%d-(%d%c%d))\n",y,x,a,b,c);

    mu=z*x;
    if(mu+y==24)printf("(%d%c%d)*%d+%d\n",a,b,c,x,y);
	else if(mu-y==24)printf("(%d%c%d)*%d-%d\n",a,b,c,x,y);
	else if(y-mu==24)printf("%d-(%d%c%d)*%d\n",y,a,b,c,x);
	else if(mu*y==24)printf("(%d%c%d)*%d*%d\n",a,b,c,x,y);
	else if(y!=0&&mu/y==24&&mu%y==0)printf("(%d%c%d)*%d/%d\n",a,b,c,x,y);
	else if(mu!=0&&y/mu==24&&y%mu==0)printf("%d/(%d%c%d)*%d\n",y,a,b,c,x);

    
   if(x!=0&&z>=x&&z%x==0)
   {divide1=z/x;
	 if(divide1+y==24)printf("(%d%c%d)/%d+%d\n",a,b,c,x,y);
	else if(divide1-y==24)printf("(%d%c%d)/%d-%d\n",a,b,c,x,y);
	else if(y-divide1==24)printf("%d-(%d%c%d)/%d\n",y,a,b,c,x);
	else if(divide1*y==24)printf("((%d%c%d)/%d)*%d\n",a,b,c,x,y);
	else if(y!=0&&divide1/y==24&&divide1%y==0)printf("((%d%c%d)/%d)/%d\n",a,b,c,x,y);
	else if(divide1!=0&&y/divide1==24&&y%divide1==0)printf("%d/((%d%c%d)/%d)\n",y,a,b,c,x);}

	
   if(z!=0&&x>z&&x%z==0)
   {divide2=x/z;
	   if(divide2+y==24)printf("%d/(%d%c%d)+%d\n",x,a,b,c,y);
	else if(divide2-y==24)printf("%d/(%d%c%d)-%d\n",x,a,b,c,y);
	else if(y-divide2==24)printf("%d-%d/(%d%c%d)\n",y,x,a,b,c);
	else if(divide2*y==24)printf("(%d/(%d%c%d))*%d\n",x,a,b,c,y);
	else if(y!=0&&divide2/y==24&&divide2%y==0)printf("(%d/(%d%c%d))/%d\n",x,a,b,c,y);
	else if(divide2!=0&&y/divide2==24&&y%divide2==0)printf("%d/(%d/(%d%c%d))\n",y,x,a,b,c);}

}



void count2(int a,char b,int c,int z,int x,int y)  //两两运算
{
  unsigned int add=x+y;
  unsigned int decrease1=x-y;
  unsigned int decrease2=y-x;
  unsigned int mut=y*x;
  unsigned int divide1=y/x;
  unsigned int divide2=x/y;
  if(z+add==24)printf("%d%c%d+%d+%d  \n",a,b,c,x,y);
  else if(z-add==24)printf("%d%c%d-(%d+%d)  \n",a,b,c,x,y);
  else if(add-z==24)printf("(%d+%d)-(%d%c%d)  \n",x,y,a,b,c);
  else if(z*add==24)printf("(%d%c%d)*(%d+%d)  \n",a,b,c,x,y);
  else if(add!=0&&z/add==24&&z%add==0)printf("(%d%c%d)/(%d+%d)  \n",a,b,c,x,y);
  else if(z!=0&&add/z==24&&add%z==0)printf("(%d+%d)/(%d%c%d) \n",x,y,a,b,c);

  if(z+decrease1==24)printf("%d%c%d+(%d-%d)  \n",a,b,c,x,y);
  else if(z-decrease1==24)printf("%d%c%d-(%d-%d)  \n",a,b,c,x,y);
  else if(decrease1-z==24)printf("(%d-%d)-(%d%c%d)  \n",x,y,a,b,c);
  else if(z*decrease1==24)printf("(%d%c%d)*(%d-%d)  \n",a,b,c,x,y);
  else if(decrease1!=0&&z/decrease1==24&&z%decrease1==0)printf("(%d%c%d)/(%d-%d)  \n",a,b,c,x,y);
  else if(z!=0&&decrease1/z==24&&decrease1%z==0)printf("(%d-%d)/(%d%c%d)  \n",x,y,a,b,c);

  if(z+decrease2==24)printf("%d%c%d+(%d-%d)  \n",a,b,c,y,x);
  else if(z-decrease2==24)printf("%d%c%d-(%d-%d)  \n",a,b,c,y,x);
  else if(decrease2-z==24)printf("(%d-%d)-(%d%c%d)  \n",y,x,a,b,c);
  else if(z*decrease2==24)printf("(%d%c%d)*(%d-%d)  \n",a,b,c,y,x);
  else if(decrease2!=0&&z/decrease2==24&&z%decrease2==0)printf("(%d%c%d)/(%d-%d)  \n",a,b,c,y,x);
  else if(z!=0&&decrease2/z==24&&decrease2%z==0)printf("(%d-%d)/(%d%c%d)  \n",y,x,a,b,c);

  if(z+mut==24)printf("%d%c%d+(%d*%d)  \n",a,b,c,x,y);
  else if(z-mut==24)printf("%d%c%d-(%d*%d)  \n",a,b,c,y,x);
  else if(mut-z==24)printf("(%d*%d)-(%d%c%d)  \n",y,x,a,b,c);
  else if(z*mut==24)printf("(%d%c%d)*(%d*%d)  \n",a,b,c,y,x);
  else if(mut!=0&&z/mut==24&&z%mut==0)printf("(%d%c%d)/(%d*%d)  \n",a,b,c,y,x);
  else if(z!=0&&mut/z==24&&mut%z==0)printf("(%d*%d)/(%d%c%d)  \n",y,x,a,b,c);
if(x!=0&&y>=x&&y%x==0)
{if(z+divide1==24)printf("%d%c%d+(%d/%d)  \n",a,b,c,y,x);
  else if(z-divide1==24)printf("%d%c%d-(%d/%d)  \n",a,b,c,y,x);
  else if(divide1-z==24)printf("(%d/%d)-(%d%c%d)  \n",y,x,a,b,c);
  else if(z*divide1==24)printf("(%d%c%d)*(%d/%d)  \n",a,b,c,y,x);
  else if(divide1!=0&&z/divide1==24&&z%divide1==0)printf("(%d%c%d)/(%d/%d)  \n",a,b,c,y,x);
  else if(z!=0&&divide1/z==24&&divide1%z==0)printf("(%d/%d)/(%d%c%d)  \n",y,x,a,b,c);}
if(y!=0&&x>y&&x%y==0)
 if(z+divide2==24)printf("%d%c%d+(%d/%d)  \n",a,b,c,x,y);
  else if(z-divide2==24)printf("%d%c%d-(%d/%d)  \n",a,b,c,x,y);
  else if(divide2-z==24)printf("(%d/%d)-(%d%c%d)  \n",x,y,a,b,c);
  else if(z*divide2==24)printf("(%d%c%d)*(%d/%d)  \n",a,b,c,x,y);
  else if(divide2!=0&&z/divide2==24&&z%divide2==0)printf("(%d%c%d)/(%d/%d)  \n",a,b,c,x,y);
  else if(z!=0&&divide2/z==24&&divide2%z==0)printf("(%d/%d)/(%d%c%d)  \n",x,y,a,b,c);

}


void main()
{
	unsigned int data[4];unsigned int a,b,k,c,d;
	for(;;){
	printf("please input the first card:");
	scanf("%d",&data[0]);
	printf("\nplease input the second card:");
	scanf("%d",&data[1]);
	printf("\nplease input the third card:");
	scanf("%d",&data[2]);
	printf("\nplease input the fourth card:");
	scanf("%d",&data[3]);
	for(a=0;a<=3;a++)
	{
		for(b=a+1;b<=3;b++)
		{
			k=6-a-b;
			for(c=0;c<=3&&k!=0;c++)
			{	
				for(d=c+1;d<=3;d++)
				{
					if(c+d==k&&c!=a&&c!=b){k=0;break;}
					
				}
				
			}
			c=c-1;
            count1(data[a],'+',data[b],data[a]+data[b],data[c],data[d]);
			count1(data[a],'+',data[b],data[a]+data[b],data[d],data[c]);
           
		   count1(data[a],'-',data[b],data[a]-data[b],data[c],data[d]);
           count1(data[a],'-',data[b],data[a]-data[b],data[d],data[c]);

		   count1(data[b],'-',data[a],data[b]-data[a],data[c],data[d]);
           count1(data[b],'-',data[a],data[b]-data[a],data[d],data[c]);

		   count1(data[a],'*',data[b],data[a]*data[b],data[c],data[d]);
		   count1(data[a],'*',data[b],data[a]*data[b],data[d],data[c]);
         if(data[a]>=data[b]&&data[a]%data[b]==0)
		 {count1(data[a],'/',data[b],data[a]/data[b],data[c],data[d]);
		 count1(data[a],'/',data[b],data[a]/data[b],data[d],data[c]);}
         if(data[b]<data[a]&&data[b]%data[a]==0)
		 {count1(data[b],'/',data[a],data[b]/data[a],data[c],data[d]);
		 count1(data[b],'/',data[a],data[b]/data[a],data[d],data[c]);}

		 count2(data[a],'+',data[b],data[a]+data[b],data[c],data[d]);

		 count2(data[a],'-',data[b],data[a]-data[b],data[c],data[d]);

		 count2(data[b],'-',data[a],data[b]-data[a],data[c],data[d]);

		 count2(data[a],'*',data[b],data[a]*data[b],data[c],data[d]);

		 if(data[a]>=data[b]&&data[a]%data[b]==0)
			 count2(data[a],'/',data[b],data[a]/data[b],data[c],data[d]);

		 if(data[b]<data[a]&&data[b]%data[a]==0)
			 count2(data[b],'/',data[a],data[b]/data[a],data[c],data[d]);


		}
	}
	printf("\nend,press any key to continue...\n");
    _getch();
	system("cls");
	}
}
