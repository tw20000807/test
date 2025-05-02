#include "guess.h"
#include <cassert>
#include <cstdio>
#include <cstdlib>
int l, r, tar, q_count = 0;
int ask(char type, int i){
	if(type == '?'){
		q_count++;
		return (i > tar) - (i < tar);
	}
	else if(type == '!'){
		if(i == tar) printf("OK\nYou use %d times\n", q_count);
		else printf("WA\nYou guess %d, but ans is %d\n", i, tar);
		exit(0);
	}
	else{
		printf("FAIL, wrong type\n");
		exit(0);
	}
}
int main() {
	assert(2 == scanf("%d %d", &l, &r));
	assert(1 == scanf("%d", &tar));
	guess(l, r);
}
