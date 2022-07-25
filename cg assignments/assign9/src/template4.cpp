#include <template.h>
#include <string>

template <typename T> class MyArrayClass
{
		private:
			T* arr;
			int count;
		public:
			MyArrayClass(){};
			void PopulateData(T *arr, int count);
};
template <typename T>void MyArrayClass<T>::PopulateData(T *arr, int count)
{
	    for (int i = 0; i < count; i++)
		    	{
		       cout << *arr<<" " ;
			++arr;
			}
	    	cout << endl;
}
int main()
{
	int numarr[]={10,24,35,42,56};
	cout<<"Number Array: ";
	MyArrayClass<int> a;
	a.PopulateData(numarr,5);

	return 0;
}

