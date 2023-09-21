class Vector{
 private:
  int *vec_ptr;
  int size;
  int capacity;
  int *vec_temp;

 public:
  Vector();


   Vector(const Vector &other);

  ~Vector();

   Vector& operator=(const Vector &other);

  int Size();

  int Capacity();

  void push_back(int element);

  void reserve(int n);


 int& operator[](unsigned int index);



};
