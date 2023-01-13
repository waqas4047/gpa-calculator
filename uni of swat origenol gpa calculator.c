#include<stdio.h>
int main()
{
	int again;
	do
	{
	int fail=0;
	float marks1,marks2,marks3,marks4,marks5,marks6,crhour1,crhour2,crhour3,crhour4,crhour5,crhour6;
	printf("\t\tenter marks of papers\n");
	printf("\t\t*********************\n");
	printf("enter 1st paper marks : ");
	scanf("%f",&marks1);
	printf("enter credit hour of 1st paper : ");
	scanf("%f",&crhour1);
	printf("******************************\n");
	printf("\n");
	printf("enter 2nd paper marks : ");
	scanf("%f",&marks2);
	printf("enter credit hour of 2nd paper : ");
	scanf("%f",&crhour2);
	printf("******************************\n");
	printf("\n");
	printf("enter 3rd paper marks : ");
	scanf("%f",&marks3);
	printf("enter credit hour of 3rd paper : ");
	scanf("%f",&crhour3);
	printf("******************************\n");
	printf("\n");
	printf("enter 4th paper marks : ");
	scanf("%f",&marks4);
	printf("enter credit hour of 4th paper : ");
	scanf("%f",&crhour4);
	printf("******************************\n");
	printf("\n");
	printf("enter 5th paper marks : ");
  	scanf("%f",&marks5);
	printf("enter credit hour of 5th paper : ");
	scanf("%f",&crhour5);
	printf("******************************\n");
	printf("\n");
	printf("enter 6th paper marks : ");
	scanf("%f",&marks6);
	printf("enter credit hour of 6th paper : ");
	scanf("%f",&crhour6);
	printf("*******************************************\n");
	printf("*******************************************\n");
	if(marks1<50)
	{
		//printf("your first paper is fail\n");
		marks1=0;
		fail=fail+1;
	}
		if(marks2<50)
	{
		//printf("your second paper is fail\n");
		marks2=0;
		fail=fail+1;
	}
		if(marks3<50)
	{
		//printf("your third paper is fail\n");
		marks3=0;
		fail=fail+1;
	}
		if(marks4<50)
	{
	//	printf("your fourth paper is fail\n");
		
		marks4=0;
		fail=fail+1;
	}
		if(marks5<50)
	{
		//printf("your fifth paper is fail\n");
		marks5=0;
		fail=fail+1;
	}
		if(marks6<50)
	{
	//	printf("your sixth paper is fail\n");
		marks6=0;
		fail=fail+1;
	}
	if(fail!=0)
	{
		printf("\t\t\t\tfail papers : %d",fail);
		
	}
	
	if(marks1==100||marks1==99||marks1==98||marks1==97||marks1==96||marks1==95||marks1==94||marks1==93||marks1==92||marks1==91||marks1==90||marks1==89||marks1==88||marks1==87||marks1==86||marks1==85||marks1==84||marks1==83||marks1==82||marks1==81||marks1==80||marks1==79||marks1==78||marks1==77||marks1==76||marks1==75||marks1==74||marks1==73||marks1==72||marks1==71||marks1==70||marks1==69||marks1==68||marks1==67||marks1==66||marks1==65||marks1==64||marks1==63||marks1==62||marks1==61||marks1==60||marks1==59||marks1==58||marks1==57||marks1==56||marks1==55||marks1==54||marks1==53||marks1==52||marks1==51||marks1==50)
	{
		if(marks1==100)
		{
		marks1=4.00*crhour1;
		}
		if(marks1==99)
		{
			marks1=3.98*crhour1;
		}
			if(marks1==98)
		{
			marks1=3.96*crhour1;
		}	if(marks1==97)
		{
			marks1=3.93*crhour1;
		}	if(marks1==96)
		{
			marks1=3.91*crhour1;
		}	if(marks1==95)
		{
			marks1=3.89*crhour1;
		}	
		if(marks1==94)
		{
			marks1=3.87*crhour1;
		}	if(marks1==93)
		{
			marks1=3.85*crhour1;
		}	if(marks1==92)
		{
			marks1=3.82*crhour1;
		}	if(marks1==91)
		{
			marks1=3.80*crhour1;
		}	if(marks1==90)
		{
			marks1=3.78*crhour1;
		}	if(marks1==89)
		{
			marks1=3.76*crhour1;
		}	if(marks1==88)
		{
			marks1=3.74*crhour1;
		}	if(marks1==87)
		{
			marks1=3.71*crhour1;
		}	if(marks1==86)
		{
			marks1=3.69*crhour1;
		}	if(marks1==85)
		{
			marks1=3.67*crhour1;
		}	if(marks1==84)
		{
			marks1=3.66*crhour1;
		}	if(marks1==83)
		{
			marks1=3.58*crhour1;
		}	if(marks1==82)
		{
			marks1=3.50*crhour1;
		}	if(marks1==81)
		{
			marks1=3.42*crhour1;
		}	if(marks1==80)
		{
			marks1=3.34*crhour1;
		}	if(marks1==79)
		{
			marks1=3.33*crhour1;
		}	if(marks1==78)
		{
			marks1=3.25*crhour1;
		}	if(marks1==77)
		{
			marks1=3.17*crhour1;
		}	if(marks1==76)
		{
			marks1=3.09*crhour1;
		}	if(marks1==75)
		{
			marks1=3.01*crhour1;
		}	if(marks1==74)
		{
			marks1=3.00*crhour1;
		}	if(marks1==73)
		{
			marks1=2.89*crhour1;
		}	if(marks1==72)
		{
			marks1=2.78*crhour1;
		}	if(marks1==71)
		{
			marks1=2.67*crhour1;
		}	if(marks1==70)
		{
			marks1=2.66*crhour1;
		}	if(marks1==69)
		{
			marks1=2.50*crhour1;
		}	if(marks1==68)
		{
			marks1=2.34*crhour1;
		}	if(marks1==67)
		{
			marks1=2.33*crhour1;
		}	if(marks1==66)
		{
			marks1=2.22*crhour1;
		}	if(marks1==65)
		{
			marks1=2.12*crhour1;
		}	if(marks1==64)
		{
			marks1=2.01*crhour1;
		}	if(marks1==63)
		{
			marks1=2.00*crhour1;
		}	if(marks1==62)
		{
			marks1=1.84*crhour1;
		}	if(marks1==61)
		{
			marks1=1.67*crhour1;
		}	if(marks1==60)
		{
			marks1=1.66*crhour1;
		}	if(marks1==59)
		{
			marks1=1.49*crhour1;
		}	if(marks1==58)
		{
			marks1=1.31*crhour1;
		}	if(marks1==57)
		{
			marks1=1.30*crhour1;
		}	if(marks1==56)
		{
			marks1=1.20*crhour1;
		}	if(marks1==55)
		{
			marks1=1.12*crhour1;
		}	if(marks1==54)
		{
			marks1=1.01*crhour1;
		}	if(marks1==53)
		{
			marks1=1.00*crhour1;
		}	if(marks1==52)
		{
			marks1=0.70*crhour1;
		}	if(marks1==51)
		{
			marks1=0.40*crhour1;
		}	if(marks1==50)
		{
			marks1=0.10*crhour1;
		}
		
	}
		if(marks2==100||marks2==99||marks2==98||marks2==97||marks2==96||marks2==95||marks2==94||marks2==93||marks2==92||marks2==91||marks2==90||marks2==89||marks2==88||marks2==87||marks2==86||marks2==85||marks2==84||marks2==83||marks2==82||marks2==81||marks2==80||marks2==79||marks2==78||marks2==77||marks2==76||marks2==75||marks2==74||marks2==73||marks2==72||marks2==71||marks2==70||marks2==69||marks2==68||marks2==67||marks2==66||marks2==65||marks2==64||marks2==63||marks2==62||marks2==61||marks2==60||marks2==59||marks2==58||marks2==57||marks2==56||marks2==55||marks2==54||marks2==53||marks2==52||marks2==51||marks2==50)
	{
		if(marks2==100)
		{
		marks2=4.00*crhour2;
		}
		if(marks2==99)
		{
			marks2=3.98*crhour2;
		}
			if(marks2==98)
		{
			marks2=3.96*crhour2;
		}	if(marks2==97)
		{
			marks2=3.93*crhour2;
		}	if(marks2==96)
		{
			marks2=3.91*crhour2;
		}	if(marks2==95)
		{
			marks2=3.89*crhour2;
		}	
		if(marks2==94)
		{
			marks2=3.87*crhour2;
		}	if(marks2==93)
		{
			marks2=3.85*crhour2;
		}	if(marks2==92)
		{
			marks2=3.82*crhour2;
		}	if(marks2==91)
		{
			marks2=3.80*crhour2;
		}	if(marks2==90)
		{
			marks2=3.78*crhour2;
		}	if(marks2==89)
		{
			marks2=3.76*crhour2;
		}	if(marks2==88)
		{
			marks2=3.74*crhour2;
		}	if(marks2==87)
		{
			marks2=3.71*crhour2;
		}	if(marks2==86)
		{
			marks2=3.69*crhour2;
		}	if(marks2==85)
		{
			marks2=3.67*crhour2;
		}	if(marks2==84)
		{
			marks2=3.66*crhour2;
		}	if(marks2==83)
		{
			marks2=3.58*crhour2;
		}	if(marks2==82)
		{
			marks2=3.50*crhour2;
		}	if(marks2==81)
		{
			marks2=3.42*crhour2;
		}	if(marks2==80)
		{
			marks2=3.34*crhour2;
		}	if(marks2==79)
		{
			marks2=3.33*crhour2;
		}	if(marks2==78)
		{
			marks2=3.25*crhour2;
		}	if(marks2==77)
		{
			marks2=3.17*crhour2;
		}	if(marks1==76)
		{
			marks2=3.09*crhour2;
		}	if(marks2==75)
		{
			marks2=3.01*crhour2;
		}	if(marks2==74)
		{
			marks2=3.00*crhour2;
		}	if(marks2==73)
		{
			marks2=2.89*crhour2;
		}	if(marks2==72)
		{
			marks2=2.78*crhour2;
		}	if(marks2==71)
		{
			marks2=2.67*crhour2;
		}	if(marks2==70)
		{
			marks2=2.66*crhour2;
		}	if(marks2==69)
		{
			marks2=2.50*crhour2;
		}	if(marks2==68)
		{
			marks2=2.34*crhour2;
		}	if(marks2==67)
		{
			marks2=2.33*crhour2;
		}	if(marks2==66)
		{
			marks2=2.22*crhour2;
		}	if(marks2==65)
		{
			marks2=2.12*crhour2;
		}	if(marks2==64)
		{
			marks2=2.01*crhour2;
		}	if(marks2==63)
		{
			marks2=2.00*crhour2;
		}	if(marks2==62)
		{
			marks2=1.84*crhour2;
		}	if(marks2==61)
		{
			marks2=1.67*crhour2;
		}	if(marks2==60)
		{
			marks2=1.66*crhour2;
		}	if(marks2==59)
		{
			marks2=1.49*crhour2;
		}	if(marks2==58)
		{
			marks2=1.31*crhour2;
		}	if(marks2==57)
		{
			marks2=1.30*crhour2;
		}	if(marks2==56)
		{
			marks2=1.20*crhour2;
		}	if(marks2==55)
		{
			marks2=1.12*crhour2;
		}	if(marks2==54)
		{
			marks2=1.01*crhour2;
		}	if(marks2==53)
		{
			marks2=1.00*crhour2;
		}	if(marks2==52)
		{
			marks2=0.70*crhour2;
		}	if(marks2==51)
		{
			marks2=0.40*crhour2;
		}	if(marks2==50)
		{
			marks2=0.10*crhour2;
		}
		
	}
		if(marks3==100||marks3==99||marks3==98||marks3==97||marks3==96||marks3==95||marks3==94||marks3==93||marks3==92||marks3==91||marks3==90||marks3==89||marks3==88||marks3==87||marks3==86||marks3==85||marks3==84||marks3==83||marks3==82||marks3==81||marks3==80||marks3==79||marks3==78||marks3==77||marks3==76||marks3==75||marks3==74||marks3==73||marks3==72||marks3==71||marks3==70||marks3==69||marks3==68||marks3==67||marks3==66||marks3==65||marks3==64||marks3==63||marks3==62||marks3==61||marks3==60||marks3==59||marks3==58||marks3==57||marks3==56||marks3==55||marks3==54||marks3==53||marks3==52||marks3==51||marks3==50)
	{
		if(marks3==100)
		{
		marks3=4.00*crhour3;
		}
		if(marks3==99)
		{
			marks3=3.98*crhour3;
		}
			if(marks3==98)
		{
			marks3=3.96*crhour3;
		}	if(marks3==97)
		{
			marks3=3.93*crhour3;
		}	if(marks3==96)
		{
			marks3=3.91*crhour3;
		}	if(marks3==95)
		{
			marks3=3.89*crhour3;
		}	
		if(marks3==94)
		{
			marks3=3.87*crhour3;
		}	if(marks3==93)
		{
			marks3=3.85*crhour3;
		}	if(marks3==92)
		{
			marks3=3.82*crhour3;
		}	if(marks3==91)
		{
			marks3=3.80*crhour3;
		}	if(marks3==90)
		{
			marks3=3.78*crhour3;
		}	if(marks3==89)
		{
			marks3=3.76*crhour3;
		}	if(marks3==88)
		{
			marks3=3.74*crhour3;
		}	if(marks3==87)
		{
			marks3=3.71*crhour3;
		}	if(marks3==86)
		{
			marks3=3.69*crhour3;
		}	if(marks3==85)
		{
			marks3=3.67*crhour3;
		}	if(marks3==84)
		{
			marks3=3.66*crhour3;
		}	if(marks3==83)
		{
			marks3=3.58*crhour3;
		}	if(marks3==82)
		{
			marks3=3.50*crhour3;
		}	if(marks3==81)
		{
			marks3=3.42*crhour3;
		}	if(marks3==80)
		{
			marks3=3.34*crhour3;
		}	if(marks3==79)
		{
			marks3=3.33*crhour3;
		}	if(marks3==78)
		{
			marks3=3.25*crhour3;
		}	if(marks3==77)
		{
			marks3=3.17*crhour3;
		}	if(marks3==76)
		{
			marks3=3.09*crhour3;
		}	if(marks3==75)
		{
			marks3=3.01*crhour3;
		}	if(marks3==74)
		{
			marks3=3.00*crhour3;
		}	if(marks3==73)
		{
			marks3=2.89*crhour3;
		}	if(marks3==72)
		{
			marks3=2.78*crhour3;
		}	if(marks3==71)
		{
			marks3=2.67*crhour3;
		}	if(marks3==70)
		{
			marks3=2.66*crhour3;
		}	if(marks3==69)
		{
			marks3=2.50*crhour3;
		}	if(marks3==68)
		{
			marks3=2.34*crhour3;
		}	if(marks3==67)
		{
			marks3=2.33*crhour3;
		}	if(marks3==66)
		{
			marks3=2.22*crhour3;
		}	if(marks3==65)
		{
			marks3=2.12*crhour3;
		}	if(marks3==64)
		{
			marks3=2.01*crhour3;
		}	if(marks3==63)
		{
			marks3=2.00*crhour3;
		}	if(marks3==62)
		{
			marks3=1.84*crhour3;
		}	if(marks3==61)
		{
			marks3=1.67*crhour3;
		}	if(marks3==60)
		{
			marks3=1.66*crhour3;
		}	if(marks3==59)
		{
			marks3=1.49*crhour3;
		}	if(marks3==58)
		{
			marks3=1.31*crhour3;
		}	if(marks3==57)
		{
		
			marks3=1.30*crhour3;
		}	if(marks3==56)
		{
			marks3=1.20*crhour3;
		}	if(marks3==55)
		{
			marks3=1.12*crhour3;
		}	if(marks3==54)
		{
			marks3=1.01*crhour3;
		}	if(marks3==53)
		{
			marks3=1.00*crhour3;
		}	if(marks3==52)
		{
			marks3=0.70*crhour3;
		}	if(marks3==51)
		{
			marks3=0.40*crhour3;
		}	if(marks3==50)
		{
			marks3=0.10*crhour3;
		}
		
	}
		if(marks4==100||marks4==99||marks4==98||marks4==97||marks4==96||marks4==95||marks4==94||marks4==93||marks4==92||marks4==91||marks4==90||marks4==89||marks4==88||marks4==87||marks4==86||marks4==85||marks4==84||marks4==83||marks4==82||marks4==81||marks4==80||marks4==79||marks4==78||marks4==77||marks4==76||marks4==75||marks4==74||marks4==73||marks4==72||marks4==71||marks4==70||marks4==69||marks4==68||marks4==67||marks4==66||marks4==65||marks4==64||marks4==63||marks4==62||marks4==61||marks4==60||marks4==59||marks4==58||marks4==57||marks4==56||marks4==55||marks4==54||marks4==53||marks4==52||marks4==51||marks4==50)
	{
		if(marks4==100)
		{
		marks4=4.00*crhour4;
		}
		if(marks4==99)
		{
			marks4=3.98*crhour4;
		}
			if(marks4==98)
		{
			marks4=3.96*crhour4;
		}	if(marks4==97)
		{
			marks4=3.93*crhour4;
		}	if(marks4==96)
		{
			marks4=3.91*crhour4;
		}	if(marks4==95)
		{
			marks4=3.89*crhour4;
		}	
		if(marks4==94)
		{
			marks4=3.87*crhour4;
		}	if(marks4==93)
		{
			marks4=3.85*crhour4;
		}	if(marks4==92)
		{
			marks4=3.82*crhour4;
		}	if(marks4==91)
		{
			marks4=3.80*crhour4;
		}	if(marks4==90)
		{
			marks4=3.78*crhour4;
		}	if(marks4==89)
		{
			marks4=3.76*crhour4;
		}	if(marks4==88)
		{
			marks4=3.74*crhour4;
		}	if(marks4==87)
		{
			marks4=3.71*crhour4;
		}	if(marks4==86)
		{
			marks4=3.69*crhour4;
		}	if(marks4==85)
		{
			marks4=3.67*crhour4;
		}	if(marks4==84)
		{
			marks4=3.66*crhour4;
		}	if(marks4==83)
		{
			marks4=3.58*crhour4;
		}	if(marks4==82)
		{
			marks4=3.50*crhour4;
		}	if(marks4==81)
		{
			marks4=3.42*crhour4;
		}	if(marks4==80)
		{
			marks4=3.34*crhour4;
		}	if(marks4==79)
		{
			marks4=3.33*crhour4;
		}	if(marks4==78)
		{
			marks4=3.25*crhour4;
		}	if(marks4==77)
		{
			marks4=3.17*crhour4;
		}	if(marks4==76)
		{
			marks4=3.09*crhour4;
		}	if(marks4==75)
		{
			marks4=3.01*crhour4;
		}	if(marks4==74)
		{
			marks4=3.00*crhour4;
		}	if(marks4==73)
		{
			marks4=2.89*crhour4;
		}	if(marks4==72)
		{
			marks4=2.78*crhour4;
		}	if(marks4==71)
		{
			marks4=2.67*crhour4;
		}	if(marks4==70)
		{
			marks4=2.66*crhour4;
		}	if(marks4==69)
		{
			marks4=2.50*crhour4;
		}	if(marks4==68)
		{
			marks4=2.34*crhour4;
		}	if(marks4==67)
		{
			marks4=2.33*crhour4;
		}	if(marks4==66)
		{
			marks4=2.22*crhour4;
		}	if(marks4==65)
		{
			marks4=2.12*crhour4;
		}	if(marks4==64)
		{
			marks4=2.01*crhour4;
		}	if(marks4==63)
		{
			marks4=2.00*crhour4;
		}	if(marks4==62)
		{
			marks4=1.84*crhour4;
		}	if(marks4==61)
		{
			marks4=1.67*crhour4;
		}	if(marks4==60)
		{
			marks4=1.66*crhour4;
		}	if(marks4==59)
		{
			marks4=1.49*crhour4;
		}	if(marks4==58)
		{
			marks4=1.31*crhour4;
		}	if(marks4==57)
		{
			marks4=1.30*crhour4;
		}	if(marks4==56)
		{
			marks4=1.20*crhour4;
		}	if(marks4==55)
		{
			marks4=1.12*crhour4;
		}	if(marks4==54)
		{
			marks4=1.01*crhour4;
		}	if(marks4==53)
		{
			marks4=1.00*crhour4;
		}	if(marks4==52)
		{
			marks4=0.70*crhour4;
		}	if(marks4==51)
		{
			marks4=0.40*crhour4;
		}	if(marks4==50)
		{
			marks4=0.10*crhour4;
		}
		
	}
		if(marks5==100||marks5==99||marks5==98||marks5==97||marks5==96||marks5==95||marks5==94||marks5==93||marks5==92||marks5==91||marks5==90||marks5==89||marks5==88||marks5==87||marks5==86||marks5==85||marks5==84||marks5==83||marks5==82||marks5==81||marks5==80||marks5==79||marks5==78||marks5==77||marks5==76||marks5==75||marks5==74||marks5==73||marks5==72||marks5==71||marks5==70||marks5==69||marks5==68||marks5==67||marks5==66||marks5==65||marks5==64||marks5==63||marks5==62||marks5==61||marks5==60||marks5==59||marks5==58||marks5==57||marks5==56||marks5==55||marks5==54||marks5==53||marks5==52||marks5==51||marks5==50)
	{
		if(marks5==100)
		{
		marks5=4.00*crhour5;
		}
		if(marks5==99)
		{
			marks5=3.98*crhour5;
		}
			if(marks5==98)
		{
			marks5=3.96*crhour5;
		}	if(marks5==97)
		{
			marks5=3.93*crhour5;
		}	if(marks5==96)
		{
			marks5=3.91*crhour5;
		}	if(marks5==95)
		{
			marks5=3.89*crhour5;
		}
		if(marks5==94)
		{
			marks5=3.87*crhour5;
		}	if(marks5==93)
		{
			marks5=3.85*crhour5;
		}	if(marks5==92)
		{
			marks5=3.82*crhour5;
		}	if(marks5==91)
		{
			marks5=3.80*crhour5;
		}	if(marks5==90)
		{
			marks5=3.78*crhour5;
		}	if(marks5==89)
		{
			marks5=3.76*crhour5;
		}	if(marks5==88)
		{
			marks5=3.74*crhour5;
		}	if(marks5==87)
		{
			marks5=3.71*crhour5;
		}	if(marks5==86)
		{
			marks5=3.69*crhour5;
		}	if(marks5==85)
		{
			marks5=3.67*crhour5;
		}	if(marks5==84)
		{
			marks5=3.66*crhour5;
		}	if(marks5==83)
		{
			marks5=3.58*crhour5;
		}	if(marks5==82)
		{
			marks5=3.50*crhour5;
		}	if(marks5==81)
		{
			marks5=3.42*crhour5;
		}	if(marks5==80)
		{
			marks5=3.34*crhour5;
		}	if(marks5==79)
		{
			marks5=3.33*crhour5;
		}	if(marks5==78)
		{
			marks5=3.25*crhour5;
		}	if(marks5==77)
		{
			marks5=3.17*crhour5;
		}	if(marks5==76)
		{
			marks5=3.09*crhour5;
		}	if(marks5==75)
		{
			marks5=3.01*crhour5;
		}	if(marks5==74)
		{
			marks5=3.00*crhour5;
		}	if(marks5==73)
		{
			marks5=2.89*crhour5;
		}	if(marks5==72)
		{
			marks5=2.78*crhour5;
		}	if(marks5==71)
		{
			marks5=2.67*crhour5;
		}	if(marks5==70)
		{
			marks5=2.66*crhour5;
		}	if(marks5==69)
		{
			marks5=2.50*crhour5;
		}	if(marks5==68)
		{
			marks5=2.34*crhour5;
		}	if(marks5==67)
		{
			marks5=2.33*crhour5;
		}	if(marks5==66)
		{
			marks5=2.22*crhour5;
		}	if(marks5==65)
		{
			marks5=2.12*crhour5;
		}	if(marks5==64)
		{
			marks5=2.01*crhour5;
		}	if(marks5==63)
		{
			marks5=2.00*crhour5;
		}	if(marks5==62)
		{
			marks5=1.84*crhour5;
		}	if(marks5==61)
		{
			marks5=1.67*crhour5;
		}	if(marks5==60)
		{
			marks5=1.66*crhour5;
		}	if(marks5==59)
		{
			marks5=1.49*crhour5;
		}	if(marks5==58)
		{
			marks5=1.31*crhour5;
		}	if(marks5==57)
		{
			marks5=1.30*crhour5;
		}	if(marks5==56)
		{
			marks5=1.20*crhour5;
		}	if(marks5==55)
		{
			marks5=1.12*crhour5;
		}	if(marks5==54)
		{
			marks5=1.01*crhour5;
		}	if(marks5==53)
		{
			marks5=1.00*crhour5;
		}	if(marks5==52)
		{
			marks5=0.70*crhour5;
		}	if(marks5==51)
		{
			marks5=0.40*crhour5;
		}	if(marks5==50)
		{
			marks5=0.10*crhour5;
		}
		
	}
		if(marks6==100||marks6==99||marks6==98||marks6==97||marks6==96||marks6==95||marks6==94||marks6==93||marks6==92||marks6==91||marks6==90||marks6==89||marks6==88||marks6==87||marks6==86||marks6==85||marks6==84||marks6==83||marks6==82||marks6==81||marks6==80||marks6==79||marks6==78||marks6==77||marks6==76||marks6==75||marks6==74||marks6==73||marks6==72||marks6==71||marks6==70||marks6==69||marks6==68||marks6==67||marks6==66||marks6==65||marks6==64||marks6==63||marks6==62||marks6==61||marks6==60||marks6==59||marks6==58||marks6==57||marks6==56||marks6==55||marks6==54||marks6==53||marks6==52||marks6==51||marks6==50)
	{
		if(marks6==100)
		{
		marks6=4.00*crhour6;
		}
		if(marks6==99)
		{
			marks6=3.98*crhour6;
		}
			if(marks6==98)
		{
			marks6=3.96*crhour6;
		}	if(marks6==97)
		{
			marks6=3.93*crhour6;
		}	if(marks6==96)
		{
			marks6=3.91*crhour6;
		}	if(marks6==95)
		{
			marks6=3.89*crhour6;
		}	
		if(marks6==94)
		{
			marks6=3.87*crhour6;
		}	if(marks6==93)
		{
			marks6=3.85*crhour6;
		}	if(marks6==92)
		{
			marks6=3.82*crhour6;
		}	if(marks6==91)
		{
			marks6=3.80*crhour6;
		}	if(marks6==90)
		{
			marks6=3.78*crhour6;
		}	if(marks6==89)
		{
			marks6=3.76*crhour6;
		}	if(marks6==88)
		{
			marks6=3.74*crhour6;
		}	if(marks6==87)
		{
			marks6=3.71*crhour6;
		}	if(marks6==86)
		{
			marks6=3.69*crhour6;
		}	if(marks6==85)
		{
			marks6=3.67*crhour6;
		}	if(marks6==84)
		{
			marks6=3.66*crhour6;
		}	if(marks6==83)
		{
			marks6=3.58*crhour6;
		}	if(marks6==82)
		{
			marks6=3.50*crhour6;
		}	if(marks6==81)
		{
			marks6=3.42*crhour6;
		}	if(marks6==80)
		{
			marks6=3.34*crhour6;
		}	if(marks6==79)
		{
			marks6=3.33*crhour6;
		}	if(marks6==78)
		{
			marks6=3.25*crhour6;
		}	if(marks6==77)
		{
			marks6=3.17*crhour6;
		}	if(marks6==76)
		{
			marks6=3.09*crhour6;
		}	if(marks6==75)
		{
			marks6=3.01*crhour6;
		}	if(marks6==74)
		{
			marks6=3.00*crhour6;
		}	if(marks6==73)
		{
			marks6=2.89*crhour6;
		}	if(marks6==72)
		{
			marks6=2.78*crhour6;
		}	if(marks6==71)
		{
			marks6=2.67*crhour6;
		}	if(marks6==70)
		{
			marks6=2.66*crhour6;
		}	if(marks6==69)
		{
			marks6=2.50*crhour6;
		}	if(marks6==68)
		{
			marks6=2.34*crhour6;
		}	if(marks6==67)
		{
			marks6=2.33*crhour6;
		}	if(marks6==66)
		{
			marks6=2.22*crhour6;
		}	if(marks6==65)
		{
			marks6=2.12*crhour6;
		}	if(marks6==64)
		{
			marks6=2.01*crhour6;
		}	if(marks6==63)
		{
			marks6=2.00*crhour6;
		}	if(marks6==62)
		{
			marks6=1.84*crhour6;
		}	if(marks6==61)
		{
			marks6=1.67*crhour6;
		}	if(marks6==60)
		{
			marks6=1.66*crhour6;
		}	if(marks6==59)
		{
			marks6=1.49*crhour6;
		}	if(marks6==58)
		{
			marks6=1.31*crhour6;
		}	if(marks6==57)
		{
			marks6=1.30*crhour6;
		}	if(marks6==56)
		{
			marks6=1.20*crhour6;
		}	if(marks6==55)
		{
			marks6=1.12*crhour6;
		}	if(marks6==54)
		{
			marks6=1.01*crhour6;
		}	if(marks6==53)
		{
			marks6=1.00*crhour6;
		}	if(marks6==52)
		{
			marks6=0.70*crhour6;
		}	if(marks6==51)
		{
			marks6=0.40*crhour6;
		}	if(marks6==50)
		{
			marks6=0.10*crhour6;
		}
		
	}
	int totalcrhour;
	float result;
	//printf("\t\t\tenter total credithour :");
	//scanf("%d",&totalcrhour);
	totalcrhour=crhour1+crhour2+crhour3+crhour4+crhour5+crhour6;
	result=(marks1+marks2+marks3+marks4+marks5+marks6)/totalcrhour;
	if(fail!=0){
printf("\n\t\t\t\t***************\n");
}
	printf("\t*** gpa : %.2f ***\n",result);


printf("press 1 for again enter marks \npress 0 for exit : \n");
scanf("%d",&again);
}
while(again!=0);
}
