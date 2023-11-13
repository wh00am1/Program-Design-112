#include <stdio.h>
#include <stdlib.h>

const int MxN=52;
struct card{
    int s;
    int n;
} *arr;

void swap(struct card *a, struct card *b){
	struct card temp = *a;
	*a = *b;
	*b = temp;
	return;
}
int cmp(const void *a, const void *b){
    int na = ((struct card*)a)->n;
    int nb = ((struct card*)b)->n;
	int sa = ((struct card *)a)->s;
	int sb = ((struct card *)b)->s;
    if(na == 2)
        return 1; 
	else if(nb == 2)
        return -1;
    else if(na == 1)
        return (nb == 2) ? -1 : 1;
    else if(nb == 1)
        return (na == 2) ? 1 : -1;
	else if(na == 13)
		return 1;
	else if(nb == 13)
		return -1;
    else{
		if(na!=nb)
			return na-nb;
		else
			return sb-sa;
	}

}

int main(){
	arr = malloc(MxN * sizeof(*arr));
	int N, s ,d;
	scanf("%d", &N);
	for(int i=0; i<N; ++i){
		scanf("%d %d", &s, &d);
		arr[i].s=s;
		arr[i].n=d;
	}
    qsort(arr, N, sizeof(struct card), cmp);
	for(int i=0; i<N-1; ++i) //wtf?
		for(int j=i+1; j<N; ++j)
			if(arr[i].n==arr[j].n && arr[i].s<arr[j].s)
				swap(&arr[i], &arr[j]);
    for (int i=0; i<N; ++i){
		s=arr[i].s, d=arr[i].n;
        printf("%d %d\n", s, d);
	}
    return 0;
}
