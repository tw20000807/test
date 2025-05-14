#include "guess.h"
#include <iostream>
using namespace std;
int guess(int l, int r) {
	while(l <= r){
		if(l == r){
			return l;
		}
		long long mid = ((long long)l + r) >> 1;
		int q = ask(mid);
		if(q == -1){
			r = mid - 1;
		}
		else if(q == 1){
			l = mid + 1;
		}
		else{
			return mid;
		}
	}
}
/*


*/

