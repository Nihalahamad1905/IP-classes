#include<stdio.h>
int main ()
{
int ip[4];
printf("\n\n\tEnter the IP Address in the following format \n\n\t (XXX.XXX.XXX.XXX)- ");
scanf("%d.%d.%d.%d",&ip[0],&ip[1],&ip[2],&ip[3]);
if (ip[1]<256 &&ip[2]<256 &&ip[3] <256)
{
if(ip[0] >=1 && ip[0] <= 126)
{
printf("\n\n\tThe Given IP Address Belongs to Class A\n");
printf("\n\n\tThe Network ID is %d.0.0.0\n",ip[0]);
printf("\n\n\tThe Host ID is %d.255.255.255\n",ip[0]);
}
if(ip[0] >=127 && ip[0] <= 191)
{
printf("\n\n\tThe Given IP Address Belongs to Class B\n");
printf("\n\n\tThe Network ID is %d.%d.0.0\n",ip[0],ip[1]);
printf("\n\n\tThe Host ID is %d.%d.255.255\n",ip[0],ip[1]);
}
if(ip[0] >=192 && ip[0] <= 223)
{
printf("\n\n\tThe Given IP Address Belongs to Class C\n");
printf("\n\n\tThe Network ID is %d.%d.%d.0\n",ip[0],ip[1],ip[2]);
printf("\n\n\tThe Host ID is %d.%d.%d.255\n",ip[0],ip[1],ip[2]);
}
if(ip[0] >=224 && ip[0] <= 239)
{
printf("\n\n\tThe Given IP Address Belongs to Class D\n");
printf("\n\n\tThe Network ID and Host ID are Used for Multicast Address\n");
}
if(ip[0] >=240 && ip[0] <= 255)
{
printf("\n\n\tThe Given IP Address Belongs to Class E\n");
printf("\n\n\tThe Network ID and Host ID are Reserved For Future Uses\n");
}
if(ip[0] >=256)
{
printf("\n\n\tThe Given IP Address Does not belong to any Class \n\n\t\tINVALID IP
INPUT\n");
}
if(ip[0]<0)
{
printf("\n\n\tThe given IP Address is Incorrect\n");
}
}
else
{
printf("\n\n\t\tINVALID IP ADDRESS INPUT\n");
}
return 0;
}
