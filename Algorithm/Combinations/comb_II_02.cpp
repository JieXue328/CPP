#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> vec = {4,3,5};

    int max_comb = 1;
    for(auto const &x : vec){
        max_comb *= x;
    }
    for(int i=0; i<max_comb; ++i){
        int temp = i;
        cout<<i<<" :";
        for(auto const &x : vec){
            int index = temp % x;
            temp /= x;
            cout << index << ' ';
        }
        cout<<endl;
    }
}


//0 :0 0 0
//1 :1 0 0
//2 :2 0 0
//3 :3 0 0
//4 :0 1 0
//5 :1 1 0
//6 :2 1 0
//7 :3 1 0
//8 :0 2 0
//9 :1 2 0
//10 :2 2 0
//11 :3 2 0
//12 :0 0 1
//13 :1 0 1
//14 :2 0 1
//15 :3 0 1
//16 :0 1 1
//17 :1 1 1
//18 :2 1 1
//19 :3 1 1
//20 :0 2 1
//21 :1 2 1
//22 :2 2 1
//23 :3 2 1
//24 :0 0 2
//25 :1 0 2
//26 :2 0 2
//27 :3 0 2
//28 :0 1 2
//29 :1 1 2
//30 :2 1 2
//31 :3 1 2
//32 :0 2 2
//33 :1 2 2
//34 :2 2 2
//35 :3 2 2
//36 :0 0 3
//37 :1 0 3
//38 :2 0 3
//39 :3 0 3
//40 :0 1 3
//41 :1 1 3
//42 :2 1 3
//43 :3 1 3
//44 :0 2 3
//45 :1 2 3
//46 :2 2 3
//47 :3 2 3
//48 :0 0 4
//49 :1 0 4
//50 :2 0 4
//51 :3 0 4
//52 :0 1 4
//53 :1 1 4
//54 :2 1 4
//55 :3 1 4
//56 :0 2 4
//57 :1 2 4
//58 :2 2 4
//59 :3 2 4
