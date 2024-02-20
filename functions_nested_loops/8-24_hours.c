#include "main.h"



void jack_bauer(void)
{
	int min = 0;
	int Dmin = 0;
	int heure = 0;
	int Dheure = 0;


	while (Dheure <= 2)
	{
		heure = 0;

		while (heure <= 9)
		{
			if (Dheure == 2 && heure == 4)
				break;
			Dmin = 0;

			while (Dmin <= 5)
			{
				min = 0;

				while (min <= 9)
				{
					_putchar(Dheure + '0');
					_putchar(heure + '0');
					_putchar(':');
					_putchar(Dmin + '0');
					_putchar(min + '0');
					_putchar('\n');
					min++;
				}
				Dmin++;
			}
			heure++;
		}
		Dheure++;
	}	
}
