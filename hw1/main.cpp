#include <iostream>
#include "Vector.h"
using namespace std;










int main(){

  Vector myb;


  char input;
  //int size;
  //int numbers;
  //cin>>input;
  cout<< "display 1000 vectors y or n"<<endl;
  cin>>input;
  if (input=='Y'){

  for (int i=1; i<=1000; i++){
    myb.push_back(i);
  }

 Vector myc=myb;

  cout<<"displaying vector"<<endl;
  for(int x=0; x <= 1000; x++){
    cout<<"vector["<< x <<"]="<<myb[x]<<endl;

  }
 }


  else if(input == 'N'){
    cout<<"how many numbers in the vector"<<endl;
    int size; cin>>size; cout<<endl;

    int numbers[size];

    if (size <= 0){
      cout<<"must be greater than zero"<<endl;
  return 0;
}


for(int x=0; x<size; x++){
  cout<<"enter a number";
cin>>numbers[x]; cout<<endl;
}

for (int y=0; y<size; y++){
  myb.push_back(numbers[y]);
    }

  
    if (size <= 0){
      cout<<"must be greater than zero"<<endl;
  return 0;
}


for(int x=0; x<size; x++){
  cout<<"enter a number";
cin>>numbers[x]; cout<<endl;
}

for (int y=0; y<size; y++){
  myb.push_back(numbers[y]);
    }

  }
}
