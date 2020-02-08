#include <iostream>
#include <algorithm>
#include <iomanip>
#include <ostream>
using namespace std;

ostream &tab(ostream &ostream1){
    return cout<<"\t";
}

void show(int a[]){

    for (int i = 0; i < 10; ++i) {
        cout<<a[i]<<tab;
    }
    cout<<endl;
}
int main() {
    int a[] = {9,2,4,1,10,3,8,6,5,14};
    cout<<"Array a[] before sorting: "<<endl;
    show(a);
    cout<<"Array a[] after sorting: "<<endl;
    sort(a,a+10);
    show(a);

    return 0;
}
