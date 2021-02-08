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
void heapSort(int a[], int n)
{
   for (int i = n / 2 - 1; i >= 0; i--)
   heapify(a, n, i);

  cout<<"Sorted list : \n";
   for (int i=n-1; i>=0; i--)
   {
      cout<<a[0]<<" ";
      swap(a[0], a[i]);
      heapify(a, i, 0);
   }
}
int main()
{
   int a[1000];
   int n;
   cout<<"Enter n(the number of elements you want to insert):";
   cin>>n;
   for(int i=0;i<n;i++)
    cin>>a[i];
   heapSort(a, n);
}
