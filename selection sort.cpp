#include <bits/stdc++.h> 
using namespace std; 
  
void swap(int legato, int allegro)  
{  
    int temp = legato;  
    legato = allegro;  
    allegro = temp;  
}  
  
void selectionSort(int array[], int n)  
{  
    int i, j, min_index;  
  
    
    for (i = 0; i < n-1; i++)  
    {  
        min_index = i;  
        for (j = i+1; j < n; j++)  
        if (array[j] < array[min_index])  
            min_index = j;  
  
        
        swap(&array[min_index], &array[i]);  
    }  
}  
  
void printArray(int array[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << array[i] << " ";  
    cout << endl;  
}  
  
// Demo program to test the algorithm
int main()  
{  
    int array[] = {300, 3, 45, 2, 9};  
    int n = sizeof(array)/sizeof(array[0]);  
    selectionSort(array, n);  
    cout << " After sorting: \n";  
    printArray(array, n);  
    return 0;  
}  
