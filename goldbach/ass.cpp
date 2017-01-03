#include <iostream>
#include<stdlib.h>
#include <iomanip>

using namespace std;
bool checkPrime(int n);
void goldBach(int n);
int main()
{
	int c;
	int no_of_numbers;
	no_of_numbers = 100;
	int numarry[100];
	cout << "Primes:" << endl;
	cout << endl;
	for (int i = 1;i <= no_of_numbers;i++)
	{
		c = 0;
		for (int j = 1;j <= i;j++)
		{
			if (i%j == 0)
			{
				c++;
			}
		}
		if (c == 2)
		{
			numarry[i] = i;
		}
		else
		{
			numarry[i] = 0;
		}
	}
	for (int k = 1; k <=no_of_numbers ; k++)
	{
		if (numarry[k] > 0)
		{
			cout << setw(3) <<numarry[k];
		}
		else if(k%10==0)
		{
			cout << setw(3) << "."<<"\n";
		}
		else
		{
			cout << setw(3) << ".";
		}
	}

	cout << endl;
	cout << "Test of Goldbach's Conjecture:" << endl;
	goldBach(100);
	/***** Complete this program. *****/
}

/*To find goldbach*/
void goldBach(int n)
{
	int i, j, k,count;
	bool x,y;
	for (k = 4; k <= n;k++)
	{
		count = 0;
		if (k % 2 == 0)
		{
			for (i = 2;i <= k;i++)
			{
				for (j = 2;j <= k;j++)
				{
					x = checkPrime(i);
					y = checkPrime(j);
					if (x && y)
					{
						if (i + j == k && i<=j)
						{
							count++;
							if (count == 1)
							{
								cout << endl;
								cout << setw(3) << k << ":" << setw(3) << i << setw(3) << j << endl;
							}
							else
							{
								cout << setw(7)<< i << setw(3) << j << endl;
							}
						}
					}
				}
			}
		}
	}
}
/*To check for prime*/
bool checkPrime(int n)
{
	bool p=false;
	int c=0;
	for (int i = 1;i <=n;i++)
	{
		if (n%i == 0)
		{
			c++;
		}
	}
	if (c == 2)
	{
		p = true;
	}
	return p;
}

