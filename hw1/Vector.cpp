#include <iostream>
#include <fstream>
#include "Vector.h"
using namespace std;

Vector::Vector() {
  size=0;
  capacity=0;
  vec_ptr=NULL;
  vec_temp=NULL;
}

Vector::Vector(const Vector &other){

  size=other.size;
  capacity=other.capacity;
  for(int i=0; i<size;i++){
    vec_ptr[i]=other.vec_ptr[i];
  }



}

Vector::~Vector(){
  size=0;
  capacity=0;
  delete[] vec_ptr;
}

Vector& Vector::operator=(const Vector &other){  
  if (other.size>size){
    delete[] vec_ptr;
    vec_ptr = new int[other.size];
    for(int i=0; i<other.size; i++){
      vec_ptr[i]=other.vec_ptr[i];
    }
  }
    size=other.size;
    return *this;
}

int Vector::Size(){
  return size;
}

int Vector:: Capacity(){
  return capacity;
}


void Vector::push_back(int element){
  if(size==capacity){
    reserve(capacity*2);
  vec_ptr[size]=element;
  size++;
}
}
void Vector::reserve(int n){
  if (size==capacity){
    if (capacity==0){
      capacity++;
      vec_ptr=new int[capacity];
    } else {
        vec_temp=new int[capacity];
        for (int i=0; i=vec_ptr[size]; i++){
        vec_temp[i]=vec_ptr[i];

      }
      int capacity=n;
      vec_ptr=new int [capacity];


      for(int i=0; i<capacity; i++) {
        vec_ptr[i]=vec_temp[i];
      }
    }
  }
}
int& Vector::operator[](unsigned int index){
return vec_ptr[index];
}
