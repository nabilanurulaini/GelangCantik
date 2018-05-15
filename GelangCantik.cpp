#include <bits/stdc++.h>
using namespace std;

struct gelang{
    int profit;
    int density;
}gel[100];

bool compare(gelang a, gelang b){
    return (a.profit > b.profit);
}
int main(){
    int n, maks, profit, density, jumDensity=0, jumProfit=0;
    cin >> n >> maks;
    for (int i=0; i < n; i++){
        cin >> density >> profit;
        gel[i].density=density;
        gel[i].profit=profit;
    }
    sort(gel,gel+n,compare);
    for (int i=0; i < n; i++){
        jumDensity=jumDensity+gel[i].density;
        if(jumDensity<maks){
            jumProfit=jumProfit+gel[i].profit;
        }
        else if(jumDensity==maks){
            jumProfit=jumProfit+gel[i].profit;
        }
        else{
            jumDensity=jumDensity-gel[i].density;
        }
    }
    cout << jumProfit << endl;

}
