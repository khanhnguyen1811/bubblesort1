//viet thuat toan sap xep noi bot. 
/*
	for(i = 0; i < n -1; i++) 
		for(j=0; j < n-1-i; j++)
			if(arr[j] > arr[j+1])
				swap(arr[j], arr[j+1];
*/

#include <iostream>
using namespace std; 
void swapp(int *pa, int *pb){
	int tam = *pa; 
	*pa = *pb; 
	*pb = tam; 
}
void bubble_sort(int arr[], int sopt){
	int i, j; 
	//chay phan tu dau den cuoi. 
	for (i = 0; i < sopt - 1; i++)
	{
		for (j = 0; j < sopt -1 -i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swapp(&arr[j], &arr[j + 1]);
			}
		}
	}
}

int main(){
	int arr[100], i, sopt; 
	cout << "nhap so phan tu mang: "; cin >> sopt; 
	for (i = 0; i < sopt; i++)
	{
		cin >> arr[i];
	}
	//goi ham. 
	bubble_sort(arr, sopt);
	cout << "xuat mang sap xep: " << "\n";
	for (i = 0; i < sopt; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
