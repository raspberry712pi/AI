#include<stdio.h>
char a[10]={'0','1','2','3','4','5','6','7','8','9'};
void draw()
{
	printf("--------------------\n");
	printf("|%c|%c|%c|\n",a[1],a[2],a[3]);
	printf("--------------------\n");
	printf("|%c|%c|%c|\n",a[4],a[5],a[6]);
	printf("--------------------\n");
	printf("|%c|%c|%c|\n",a[7],a[8],a[9]);
	printf("--------------------\n");
}
int check()
{
	if ((a[1] == a[2] && a[2] == a[3]) || (a[4] == a[5] && a[5] == a[6]) || (a[7] == a[8] && a[8] == a[9])) // horizontal
	{
		return 1;
	}
	else if ((a[1] == a[4] && a[4] == a[7]) || (a[2] == a[5] && a[5] == a[8]) || (a[3] == a[6] && a[6] == a[9])) // vertical
	{
		return 1;
	}
	else if ((a[1] == a[5] && a[5] == a[9]) || (a[3] == a[5] && a[5] == a[7])) // diagonal
	{
		return 1;	
	}
	else if (a[1] != '1' && a[2] != '2' && a[3] != '3' && a[4] != '4' && a[5] != '5' && a[6] != '6' && a[7] != '7' && a[8] != '8' && a[9] != '9')
	{
		return 2; // Tie
	}
	else
	{
		return 0; // Continue playing
	}
}

int main() 
{
	draw();
	int player=0,ch,i;
	char mark;
	printf("X is for player 1 and O is for player 2\n");
	do{
		player++;
		A:
		if(player%2!=0)
		{
			printf("Player 1:Enter Block Number:");
			mark='X';
		}
		else
		{
			printf("Player 2:Enter Block Number:");
			mark='O';
		}
		scanf("%d",&ch);
		if(a[ch]=='X' || a[ch]=='O')
		{
			printf("Invalid Choice");
			goto A;
		}
		a[ch]=mark;
		draw();
		i=check();
	}
	while(i==0);
	if(i==1)
	{
		if(player%2==0)
		{
			printf("Congratulations Player 2 won the game\n");
		}
		else
		{
			printf("Congratulations Player 1 won the game\n");
		}
	}
	else    
	{
		printf("Tie");
	}
	draw();
	printf("\nPerformed By Ayush .J. Gupta");
	return 0;
	
}

