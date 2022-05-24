#include <stdio.h>
int main() {
	int n;
	int counter=0;
	scanf("%d",&n);
	int last;
	while(n!=0){
	    last=n%10;
	    n=n/10;
	    if(last==0)
	        counter++;
	}
	if(counter==0){
	    printf("Its a good number");
	}else{
	    printf("Not a good number");
	}
	return 0;
}
