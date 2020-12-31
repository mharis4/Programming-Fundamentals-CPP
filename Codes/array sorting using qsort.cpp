#include <iostream>
#include <cstdlib>

using namespace std;

int cmpfunc (const void * a, const void * b)
{
   int fnum = *(int*)a;
   int snum = *(int*)b;
	return fnum - snum;
}

int main()
{
	int values[] = { 88, 22, 56, 2, 25 };

   cout << "Before sorting the list is: \n";
   for(int n = 0 ; n < 5; n++ ) 
   {
      cout << values[n] << endl;
   }

   qsort(values, 5, sizeof(int), cmpfunc);

   cout << "\nAfter sorting the list is: \n";
   for(int n = 0 ; n < 5; n++ ) 
   {   
      cout << values[n] << endl;
   }
  
   return 0;
}