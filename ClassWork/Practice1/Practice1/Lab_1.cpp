#include <iostream>
#include <stdio.h>
#include <Windows.h>

using namespace std;

int main()
{
	/*int n;
   cin >> n;*/
   /*double a, b, c, p, s;
   cout << "Enter a";
   cin >> a;
   cout << "Enter b";
   cin >> b;
   cout << "Enter c";
   cin >> c;
   p = (a + b + c) / 2;
   s = pow(p * (p - a) * (p - b) * (p - c),0.5);
   cout << "Square is:" << s;*/



   /*int n;
   cin >> n;
   cout << ((n % 2 == 0) ? "even" : "odd") << endl;*/



   /*int n;
   if (n > 0)
   {
	   cout << n << "is positive" << endl;
   }
   else if (n > 0)
   {
	   cout << n << "is negative" << endl;
   }
   else
   {
	   cout << "is zero" << endl;
   }*/

   /*SetConsoleOutputCP(1251);
   SetConsoleCP(1251);
   float a, b, c;
   cout << "Enter a";
   cin >> a;
   cout << "Enter b";
   cin >> b;
   cout << "Enter c";
   cin >> c;
   float d = b * b - 4 * a * c;
   if (d > 0)
   {
	   float x1 = ((-b + sqrt(d)) / 2 * a);
	   float x2 = ((-b - sqrt(d)) / 2 * a);
	   cout << "x1 :" << x1 << " " << "x2 :" << x2 << endl;
   }
   else if (d < 0)
   {
	   cout << "No roots";
   }
   else if (d == 0)
   {
	   float x = ((-b) / 2 * a);
	   cout << "x :" << x << endl;
   }*/



   /*while (n >= 0)
   {
	   cout << n << "...\n";
	   n--;
   }*/



   /*int i = 0;
   while (i <= 0)
   {
	   cout << i << "...\n";
	   i++;
   }*/
   /*for (int i = 0; i<=n; i++)
   {
	   cout << i << endl;
   }*/




   /*int i = 0;
   for (; i < 10;)
   {
	   cout << i;
	   i++;
   }*/

   /*int i, j;
   for (i = 0, j = 10; i != j; i++, j--)
   {
	   cout << i << " " << j << endl;
   }*/


	int n, i;
	bool Proste = true;
	cout << "Enter a=";
	cin >> n;
	for (i = 2; i <= (sqrt(abs(n))); i++)
	{
		if (n % i == 0)
		{
			Proste = false;
			break;
		}
	}
	if (Proste)
	{
		cout << "This number is prime" << endl;
	}
	else
	{
		cout << "This number is not prime" << endl;
	}
	return 0;
	system("pause");
}