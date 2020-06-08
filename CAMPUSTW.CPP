#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
int i,j,n; clrscr();
cout<<"\t\t\tHERE'S A SPECIAL PATTERN FOR YOU \n";
cout<<"Enter n \n";
cin>>n;
for(i=n;i>=1;i--)
{
for(j=1;j<=n;j++)
 {if(j>=i)
  cout<<j;
  else
    cout<<i;    }

  printf("\n");
}

for(i=2;i<=n;i++)
{
for(j=1;j<=n;j++)
  {
  if(j>=i)
  {cout<<j;}
  else
    cout<<i;    }

  printf("\n");
}
getch();
}
