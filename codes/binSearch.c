#include <stdio.h>
int array[1001];

int binSearch (int min, int max, int key)
{
	int mid = (min+max)/2;
	
	if (array[mid]==key)
		return mid;
	else if (max < min)
		return -1;
	
	if (key < array[mid])
		binSearch (min, mid-1, key);
	else if (key > array[mid])
		binSearch (mid+1, max, key);
}

int main ()
{
	int n, i, key;
	scanf ("%d %d", &n, &key);
	for (i=0; i<n; i++)
		scanf ("%d", &array[i]);
	printf ("%d\n", binSearch (0, n, key));
}
