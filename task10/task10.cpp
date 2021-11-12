// Удаление из последовательности 0 и проверка на чередование знаков

#include <iostream>

int main()
{
    int n,x,prev,fl;
	fl = 1;
	scanf_s("%d", &n);
	scanf_s("%d", &prev);
	for (int i = 0; ((i < n-1)&&(fl==1)); i++)
	{
		scanf_s("%d", &x);
		if (x!=0)
		{
			if (((x<0)&&(prev>0))||((x>0)&&(prev<0)))
			{
				fl = 1;
				prev = x;
			}
			else
			{
				fl = 0;
			}
		}
		else
		{
			i -= 1;
		}
	}
	if (fl==1)
	{
		printf("yavlyaetsya");
	}
	else
	{
		printf("ne yavlyaetsya");
	}
}