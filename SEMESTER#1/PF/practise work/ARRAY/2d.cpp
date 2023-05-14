#include <iostream>
using namespace std;

int main(){
   int arr[2][3];
   for(arr[2][3];arr[2][3]<5;arr[2][3]++)
   {
   cout<<"enter no ";
   cin>>arr[2][3];
	}
   for(int i=0; i<2;i++){
      for(int j=0; j<3; j++){
        cout<<"arr[i][j]: "<<arr[i][j]<<endl;
      }
   }
   return 0;
}
