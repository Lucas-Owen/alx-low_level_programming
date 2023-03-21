/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	for (int i = '0'; i <= '2'; i++)
	{
		for (int j = '0'; j <= '9'; j++)
		{
			for (int k = '0'; k <= '5'; k++)
			{
				for (int l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
			if (i == '2' && j == '3')
				return;
		}
	}
}
