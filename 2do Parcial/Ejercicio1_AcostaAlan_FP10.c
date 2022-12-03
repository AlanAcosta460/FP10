#include <stdio.h>

int main()
{
	char tablero[8][8];
	int i, j;
	
	for(i = 0; i < 8; i++)
	{
		for(j = 0; j < 8; j++)
		{
			if((((i == 0) || (i == 7)) && (j == 0)) || (((i == 0) || (i == 7)) && (j == 7)))
				
				tablero[i][j] = 'T';
			
			else
			{
				if((((i == 0) || (i == 7)) && (j == 1)) || (((i == 0) || (i == 7)) && (j == 6)))
				
					tablero[i][j] ='C';
				
				else
				{
					if((((i == 0) || (i == 7)) && (j == 2)) || (((i == 0) || (i == 7)) && (j == 5)))
					
						tablero[i][j] = 'A';
					
					else
					{
						if(((i == 0) || (i == 7)) && (j == 3))
						
							tablero[i][j] = 'K';
						
						else
						{
							if(((i == 0) || (i == 7)) && (j == 4))
								
								tablero[i][j] ='Q';
							
							else
							{
								if(((i == 1) || (i == 6)) && (j < 8))
								
									tablero[i][j] = 'P';
								
								else
								{
									if(((i > 1) && (i < 6)) && (j < 8))
										
										tablero[i][j] = '*';
								}
							}
						}
					}
				}
			}
		}
	
	}
	
	for(i = 0; i < 8; i++)
	{	
		for(j=0;j<8;j++)
		{
			
			printf("%c\t",tablero[i][j]);
		}
		printf("\n");
	}
}   