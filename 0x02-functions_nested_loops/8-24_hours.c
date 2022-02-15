#inlcude "main.h"
/**
 *jack_bauer - 24h clock
*/
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0min; <= 59; min++)
		{
			_putchar (hr / 10);
			_putchar (hr % 10);
			_putchar (':');
			_putchar (min / 10);
			_putchar (min % 10);
			_putchar ('\n');
		}
	}
}
