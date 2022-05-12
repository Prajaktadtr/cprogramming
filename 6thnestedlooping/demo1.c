//Program for generating 12 hrs clock on the screen 
#include <stdio.h>
#include<conio.h>
#include<dos.h> // delay(ms);

void main()
{
	int Hr,Mn,Sec;
	for(Hr=0;Hr<12;Hr++)
	{
		for(Mn=0;Mn<60;Mn++)
		{
			for(Sec=0;Sec<60;Sec++)
			{
				gotoxy(40,12); // locate the screen on sp. cols,row
				printf("%4d::%4d::%4d",Hr,Mn,Sec);
				delay(100); // delay the process for sp. milliseconds
			}
		}
	}
}
