#include <bits/stdc++.h>
using namespace std;
void heapify(int a[], int n, int root)
{
   int minimum = root;
   int l = 2*root + 1;
   int r = 2*root + 2;

   if (l < n && a[l] < a[minimum])
   minimum = l;

   if (r < n && a[r] < a[minimum])
   minimum = r;

   if (minimum != root)
      {
      swap(a[root], a[minimum]);
      heapify(a, n, minimum);
      }
}
void displayArray(int arr[], int n)
{
   for (int i=0; i<n; ++i)
   cout << arr[i] << " ";
   cout << "\n";
}
int main()
{
   int a[1000];
   int n,k=0;
   cout<<"Enter elements : ";
   while(scanf("%d!",&n)!=EOF)
   {
       a[k]=n;
       k++;
   }
   for (int i = k / 2 - 1; i >= 0; i--)
   heapify(a, k, i);
   cout<<"Min heapify tree:\n";
   displayArray(a, k);
}

