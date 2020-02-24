#include <stdio.h>
struct mm{
	int min;
	int max;
};
struct mm getMinMax(int arra[],int p)
{
	struct mm minmax;
	int r;
	if (p==1)
	{
		minmax.max=arra[0];
		minmax.min=arra[0];
		return minmax;
	}
	if (arra[0]>arra[1])
	{
		minmax.min=arra[1];
		minmax.max=arra[0];
	}
	else if(arra[1]>arra[0])
	{
		minmax.min=arra[0];
		minmax.max=arra[1];
	}
	for(r=2; r<p; r++)
	{
		if (arra[r]>minmax.max)
		{
			
			minmax.max=arra[r];
		}
		else if(arra[r]<minmax.min)
		{
			minmax.min=arra[r];
		}
		return minmax;
	}
}
int main(){
int arra[]={400,55,88,4000,80,99};
int arra_size=6;
struct mm minmax=getMinMax(arra,arra_size);
printf("nminimum element is %d",minmax);
printf("nmaximum element is %d",minmax.max);
getchar();
}



