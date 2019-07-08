#include<iostream>
template<typename Type>
int LinearSearch(Type * Array, int length, Type value);

int main()
{
  int Array_int[] = { 5,8,11,-3,0,35,2000,863,28,17 };
	char Array_char[] = { 'c','a','f','b','l','s','k','p','o','z' };
	double Array_double[] = { 1.25,35,2.18,7,99999,3.011,7.258, 1018.1018, 0, 5,501 };
  int index = LinearSearch(Array_double, 10, 5.7);
  index != -1? std::cout<<"Index of searching element: "<<index<<std::endl:std::cout<<"NIL"<<std::endl;

  return 0;
}

template<typename Type>
int LinearSearch(Type * Array, int length, Type value)
{
  int index;
  for(int i(0); i<length; i++)
  {
    if(Array[i] == value)
    {
      return i;
    }
  }
  return -1;
}
