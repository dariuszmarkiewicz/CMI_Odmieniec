#include <iostream>
using namespace std;

int liczParzyste(int tab[], int n)
{
  	int parzyste=0;

  	for(int i=0; i<n; i++)
    		{
      			if(tab[i]%2 == 0)
        			parzyste++;
    		}

  	return parzyste;
}

int odmieniec(int tab[], int n, int o)
{
  	int pozycja=0;

  	if(o>1)
        {
            for(int i=0; i<n; i++)
                {
                    if(tab[i]%2 != 0) return pozycja+1;

                    pozycja++;
                }
        }

    else
      	{
        	for(int i=0; i<n; i++)
                {
                    if(tab[i]%2 == 0) return pozycja+1;

                    pozycja++;
                }
      	}

}


int main()
{
  	int n;
  	cin>>n;

  	int tab[n];

  	for(int i=0; i<n; i++)
    		cin>>tab[i];

  	int o = liczParzyste(tab, n);

  	cout << odmieniec(tab, n, o) << endl;

   return 0;

}

