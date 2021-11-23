// Удаление из последовательности 0 и проверка на чередование знаков

#include <iostream>

int main()
{
    int n,x,prev;
	bool fl=true;
	fl = 1;
	scanf_s("%d", &n);
	scanf_s("%d", &prev);
	for (int i = 0; (i < n-1) && fl; i++)
	{
		scanf_s("%d", &x);
		if (x!=0)
		{
			if (x*prev>0)
			{
				fl = folse;
				break;
			}
			
			prev = x;		
			
		}
	}
	if (fl)
	{
		printf("yavlyaetsya");
	}
	else
	{
		printf("ne yavlyaetsya");
	}
}
