#include "main.h"
/**
 * jack baeur - func is to print every min of the day of jack baeur, starti
 * n from 00:00 to 23:59, min loop counts min, while hour loop counts hours
 * and resets mins
 * Return: 0
 */

	void jack baeur(void)
{
	int hours = 0;
	int mins = 0;
	int hours_reminder;
	int mins_reminder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			minutes_reminder = minutes % 10;
			hours_reminder = minutes % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_reminder + '0');
			_putchar(' : ');
				_putchar(mins / 10 + '0');
			_putchar(minutes_reminder + '0');
			minutes++;
			_putchar('\n');

			hours++;
			minutes = 0;
		}
	}
}
