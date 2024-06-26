#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

int n, m;
int a[500000];

int binary_search(int num){
  int l = 0;
  int r = n-1;
  while(l <= r)
    {
      int mid = (l+r)/2;
      if(a[mid] == num)
      {
        return 1;
      }
      else if(a[mid] > num)
      {
        r = mid - 1;
      }
      else
      {
        l = mid + 1;
      }
    }
  
  return 0;
}

int main() {
  scanf("%d", &n);
  for(int i=0; i<n; i++)
    {
      scanf("%d", &a[i]);
    }
  sort(a, a+n);
  scanf("%d", &m);
  for(int i=0; i<m; i++)
    {
      int k;
      scanf("%d", &k);
      printf("%d ", binary_search(k));
    }
  
      
  return 0;
}
