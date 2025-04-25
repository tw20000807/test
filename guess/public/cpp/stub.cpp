#include "guess.h"
#include <cassert>
#include <fstream>
#include <iostream>
#include <cstdio>
using namespace std;
ifstream fin;
ofstream fout;
int ask(char type, int i){
	fout << type << " " << i << endl;
	int x;
	fin >> x;
	return x;
}
int main(int argc, char *argv[]) {
	fin.open(argv[1]);
	fout.open(argv[2]);
	cerr << "OKOK\n";
	int l, r;
	fin >> l >> r;
	guess(l, r);
	return 0;
}
