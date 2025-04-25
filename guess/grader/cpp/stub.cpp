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
	cerr << "stub_ask : " << type << " " << i << "\n";
	int x;
	fin >> x;
	cerr << "stub_get : " << x << "\n";
	return x;
}
int main(int argc, char *argv[]) {
	cerr << "stub start\n";
	
	fin.open(argv[1]);
	fout.open(argv[2]);
	int l, r;
	fin >> l >> r;
	cerr << "get l, r\n";
	guess(l, r);
	return 0;
}
