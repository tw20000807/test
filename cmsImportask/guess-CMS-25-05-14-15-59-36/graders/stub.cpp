#include "guess.h"
#include <cassert>
#include <fstream>
#include <iostream>
using namespace std;
ifstream fin;
ofstream fout;
int ask(int i){
	fout << "? " << i << endl;
	int x;
	fin >> x;
	return x;
}
int main(int argc, char *argv[]) {
	fin.open(argv[1]);
	fout.open(argv[2]);
	int l, r;
	fin >> l >> r;
	int tar = guess(l, r);
	fout << "! " << tar << endl;
	return 0;
}
