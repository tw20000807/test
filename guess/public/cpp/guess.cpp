#include "guess.h"

void guess(int l, int r) {
	if(ask('?', l) == 0) ask('!', l);
	else ask('!', r);
}
