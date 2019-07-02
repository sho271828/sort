#include <stdio.h>

// 素数
#define N 2999

int A[N];

// *p と *q の値を入れ替える関数
void swap(int *p, int *q){
  int tmp;
  tmp = *p;
  *p = *q;
  *q = tmp;
}

int quick_select(int A[], int n, int k){
  int i, j, pivot;

// 真ん中の要素をピボットとする
  pivot = A[n/2];
  A[n/2] = A[0];
  A[0] = pivot;
  for(i = j = 1; i < n; i++){
    if(A[i] <= pivot){
      swap(A+i, A+j);
      j++;
    }
  }

  if(j == k+1) return pivot;
  else if(j < k+1) return quick_select(A+j, n-j, k-j);
  else return quick_select(A+1, j-1, k);
}

int divided(int A[], int n, int k){
    int i, j, pivot, C[], D[];
    
    // 真ん中の要素をピボットとする
    pivot = A[n/2];
    A[n/2] = A[0];
    A[0] = pivot;
    for(i = j = 1; i < n; i++){
        if(A[i] <= pivot){
            swap(A+i, A+j);
            j++;
        }
    }
    for(i = 1; i < j; i++){
        C[i] = A[i]
    }
    for(i = j; i < n; i++){
        D[i] = A[i]
    }
}
    
int median_of_median(int A[], int n){
    int i, j, l, B[N], pivot;
    if(n <= 5) return quick_select(A+0, n, n/2);
    else for(i = 0; i < n; i++){
        B[i] = A[i];
    }
    l = n;
        for(i = j = 0; 5*i < l - 5; i++){
            B[i] = quick_select(B + 5*j, 5, 2)
            j++;
        }
        B[j] = quick_select(B+5*j, l-5*j, (l-5*j)/2);
    l = j+1;
    pivot = quick_select(B+0, l, l/2)
    if(
    
}


int main(){
  int i;
  A[0] = 0;
  A[1] = 17; //原始元
  for(i=2;i<N;i++){
    A[i] = (long long int) A[i-1] * A[1] % N;
  }
  for(i=0;i<N;i++){
    if(median_of_median(A, N) != quick_select(A, N, N/2)) printf("ERROR");
//    printf("%d th element is %d\n", i, quick_select(A, N, i));
  }
}
