#include <stdio.h>
#include <stdlib.h>

int compare (const void *a, const void *b) {
	return *(int *)a - *(int *)b;		// ascending order
	//return *(int *)b - *(int *)a;		// descending order
}


int main ()
{
	int n, a[101];
	scanf ("%d", &n);
	for (int i=0; i<n; i++)
		scanf ("%d", &a[i]);

	qsort (a, n, sizeof (int), compare);
	for (int i=0; i<n; i++)
		printf ("%d ", a[i]);
	printf ("\n");

}
