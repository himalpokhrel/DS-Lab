#include <stdio.h>

int main()
{
	char truthtable[9][8];
	truthtable[0][0]="P";
	truthtable[0][1]="Q";
	truthtable[0][2]="R";
	truthtable[0][3]="P=>Q";
	truthtable[0][4]="Q=>R";
	truthtable[0][5]="(P=>Q)^(Q=>R)";
	truthtable[0][6]="Q^R";
	truthtable[0][0]="(P=>Q)^(Q=>R)<=>(Q^R)";
  
	truthtable[1][0]=truthtable[2][0]=truthtable[3][0]=truthtable[4][0]="T";
	truthtable[5][0]=truthtable[6][0]=truthtable[7][0]=truthtable[8][0]="F";
	truthtable[1][1]=truthtable[2][1]=truthtable[5][1]=truthtable[6][0]="T";
	truthtable[3][1]=truthtable[4][1]=truthtable[7][1]=truthtable[8][1]="F";
	truthtable[1][2]=truthtable[3][2]=truthtable[5][2]=truthtable[7][2]="T";
	truthtable[2][2]=truthtable[4][2]=truthtable[6][2]=truthtable[8][2]="F";
	int i,j;
	for(i=1;i<9;i++)
	{
  
	if(truthtable[i][0]=="T" && truthtable[i][1]=="F")
	truthtable[i][3]="F";
	else
	truthtable[i][3]="T";
  
	}
  
	for(i=1;i<9;i++)
	{
	if(truthtable[i][1]=="T" && truthtable[i][2]=="F")
	truthtable[i][4]="F";
	else
	truthtable[i][4]="T";
	}
	for(i=1;i<9;i++)
	{
	if(truthtable[i][3]=="T" && truthtable[i][4]=="T")
	truthtable[i][5]="T";
	else
	truthtable[i][5]="F";
	}
	for(i=1;i<9;i++)
	{
	if(truthtable[i][1]=="T" && truthtable[i][2]=="T")
	truthtable[i][6]="T";
	else
	truthtable[i][6]="F";
	}
	for(i=1;i<9;i++)
	{
	if(truthtable[i][5]=="T" && truthtable[i][6]=="T")
	truthtable[i][7]="T";
	if(truthtable[i][5]=="F" && truthtable[i][6]=="F")
	truthtable[i][7]="T";
	else
	truthtable[i][7]="F";
	}
  
	for(i=1;i<9;i++)
	{
	for(j=0;i<8;i++)
	{
	if(i!=0 && j==5)
	printf("\t");
	printf("%d\t", truthtable[i][j]);
	}
	printf("\n");
	}
  
	for(i=1;i<9;i++)
	{
	if(truthtable[i][7]=="T")
	continue;
	else
	break;
	}
	if(i==9)
	printf("This is Valid Argument.");
	else
	printf("This is Invalid Argument.");
	}
	}
 }
