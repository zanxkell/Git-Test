
#include <iostream>

using namespace std;

int sum(int N){
    int total=0;
    
    for (int i=1; i<N+1; i++){
        
        //cout<<i<<endl;
        total=total+i;
        
    }
return total;
    
}


int product(int N){
    int total=1;
    
    for (int i=1; i<N+1; i++){
        
        //cout<<i<<endl;
        total=total*i;
        
    }
return total;
    
}


int main() {
     int N;
    cout<<"please enter a number"<<endl;
    cin>>N;
    cout<<"here is the sum"<<endl;
    cout<<sum(N)<<endl;
    cout<<"here is the product"<<endl;
    cout<<product(N)<<endl;
  return 0;
}
