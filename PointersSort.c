//Oscar Rodas

#include<stdio.h>


   // declare function so compiler knows what it looks like
   int *sortAsc(int *p, int n);

   int main()
   {
      // create an array of ints
      int arr[]={321,123,331,218,251,121,111,115,116,451};
      int *p;    		// p is pointer to int
      int i;			// index for the for loops

      p = arr;			// set p to point to the array

      // print out array - before sort
      printf("Unsorted array:\n");
      for(i=0;i<10;i++)
         printf("%d\n",*(p+i));

      // call function sortAsc - well sort array into ascending order
      p = sortAsc(arr,10);

      //output the sorted array
      printf("Sorted array:\n");
      for(i=0;i<10;i++)
         printf("%d\n",*(p+i));

      return 0;
    }


    int * sortAsc(int *p, int n)
    {
    int i,j,temp;
	for(i = 0; i < n-1; i++)
    {
		for(j = (i + 1); j < n; j++)
		{
			if((*(p+i)) > (*(p+j))) //if the left index > the right index, the left and right indexes swap
			{
				temp = *(p+j);
				*(p+j) = *(p+i);
				*(p+i) = temp;
			}
		}
	}
	return p;
    }
