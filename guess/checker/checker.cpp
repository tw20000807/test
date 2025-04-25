#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerChecker("guess", argc, argv);
	string result = ouf.readLine();
	if(result == "WA"){
		string message = ouf.readLine();
		quitf(_wa, "%s", message.c_str());
	}
	else if(result == "OK"){
		int q_count = ouf.readInt();
		quitf(_ok, "you used %d times\n", q_count);
	}
	else{
		quitf(_fail, "invalid result\n");
	}
}
