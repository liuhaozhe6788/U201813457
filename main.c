#include <stdio.h>
#include <stdlib.h>
#define MAX 5
typedef struct stu{

	float DATA[MAX];
	int last;
} List;
List L,*pL;
List *makeempty();
void delete(int i,List *pL);
void main(){
    int i,t;
    pL=makeempty();
	for(i=0;i<MAX;i++)
		scanf("%f",&pL->DATA[i]);
	scanf("%d",&t);
    delete(t,pL);
    for(i=0;i<pL->last;i++)
	printf("%f->",pL->DATA[i]);
	printf("null");
	free(pL);
}
List *makeempty(){

	List *pL;
	pL=(List *)malloc(sizeof(List));
    pL->last=MAX;
	return pL;
}
void delete(int i,List *pL){

	int j;
	if(i<1||i>pL->last)
		printf("the No.%d element doesn't exist\n",i);
	else
    {
        for(j=i;j<pL->last;j++)
        pL->DATA[j-1]=pL->DATA[j];
	    pL->last--;
    }


}
