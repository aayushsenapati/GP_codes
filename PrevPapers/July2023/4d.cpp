#include <bits/stdc++.h>

using namespace std;



// template<int BASE,int POWER> requires (POWER==0)
// int power(){
//     return 1;
// }

template<int BASE,int POWER> 
int power(){
    return BASE*power<BASE,POWER-1>();
}

template<int BASE>
int power<BASE,0>(){
    return 1;
}


int main(){
    cout<<power<2,3>()<<endl;
}