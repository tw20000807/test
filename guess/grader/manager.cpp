#include<iostream>
#include<cassert>
#include<fstream>
using namespace std;
int main(int argc, char *argv[]){
    ifstream fin(argv[1]);
    ofstream fout(argv[2]);
    cerr << "manager start\n";
    int l, r;
    cin >> l >> r;
    cerr << "manager get input : " << l << " " << r << "\n";
    int max_times = __lg(r - l + 1);
    int q_count = 0;
    int valid_l = l, valid_r = r;
    fout << l << " " << r << endl;
    char s = '?';
    int x;
    while(fin >> s >> x){
        
        cerr << "manager_get " << s << " " << x << "\n";
        if(s == '?'){
            q_count++;
            if(q_count > max_times){
                cout << "WA" << endl << " " << "to many query" << endl;
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
                    fout << "-1" << endl;
                }
                else{
                    fout << "1" << endl;
                }
            }
        }
        else if(s == '!'){
            if(valid_l != valid_r || x != valid_l){
                cout << "WA\nWrong Answer\n" << endl;
            }
            else{
                cout << "OK\n" << q_count << endl;
            }
            exit(0);
        }
        else{
            cout << "WA\ninvlid command" << endl;
            exit(0);
        }
    }
}