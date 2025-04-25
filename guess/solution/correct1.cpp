#include "guess.h"
#include<iostream>
void guess(int l, int r) {
	std::cerr << "RUN solution " << l << " " << r << "\n";
	while(l < r){
		if(l == r){
			ask('!', l);
			return;
		}
		int mid = (l + r) >> 1;
		int q = ask('?', mid);
		if(q == -1){
			r = mid - 1;
		}
		else if(q == 1){
			l = mid + 1;
		}
		else{
			ask('!', mid);
			return;
		}
	}
}
