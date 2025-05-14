#include<iostream>
#include<cassert>
#include<fstream>
using namespace std;
int main(int argc, char *argv[]){
    ofstream fout(argv[2]);
    ifstream fin(argv[1]);
    int l, r;
    cin >> l >> r;
    int max_times = __lg(r - l + 1);
    int q_count = 0;
    int valid_l = l, valid_r = r;
    fout << l << " " << r << endl;
    char s = '?';
    int x;
    while(fin >> s >> x){
        if(s == '?'){
            q_count++;
            if(q_count > max_times){
                cout << "0" << endl;
                cerr <<  "too many query" << endl;
                exit(0);
            }
            assert(l <= x && x <= r);
            if(x < valid_l){
                fout << "-1" << endl;
            }
            else if(x > valid_r){
                fout << "1" << endl;
            }
            else{
                if(valid_l == valid_r){
                    fout << "0" << endl;
                }
                else if(x - valid_l > valid_r - x){
                    valid_r = x - 1;
                    fout << "-1" << endl;
                }
                else{
                    valid_l = x + 1;
                    fout << "1" << endl;
                }
            }
        }
        else if(s == '!'){
            if(valid_l != valid_r || x != valid_l){
                cout << 0 << endl;
                cerr << "Wrong Answer\n" << endl;
            }
            else{
                cout << "1" << endl;
            }
            exit(0);
        }
        else{
            cout << "0" << endl;
            exit(0);
        }
    }
}