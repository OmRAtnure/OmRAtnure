#include<iostream>
using namespace std;
template <typename t> 

void selection_sort(t arr[],int size){
    for(int i=0;i<size;i++){
        int min_index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        t temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
   }

   
}
template<typename t>
void display(t arr[], int size)
{
    cout << "sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
int marks[]={7,6,5,4,3,2,1};
int size=sizeof(marks)/sizeof(marks[0]);
selection_sort(marks,size);
display(marks,size);

 return 0;
}