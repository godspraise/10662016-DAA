#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,drive=0;
   int array[10] = {16,2,78,1,3,52,12,6,8,65};
   cout <<"Kindly put the input list here\t";
   for(i = 0; i<10; i++) {
      cout <<array[i]<<" ";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(array[j] < array[i]) {
         temp = array[i];
         array[i] = array[j];
         array[j] = temp;
      }
   }
drive++;
}
cout <<"This is what the list looks like after sorting ";
for(i = 0; i<10; i++) {
   cout <<array[i]<<" ";
}
//cout<<"\t Number of passes taken to sort the list:"<<drive<<endl;
return 0;
}
