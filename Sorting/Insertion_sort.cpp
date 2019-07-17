#include<bits/stdc++.h>
using namespace std;
void insertion_sort( int* A,int n){
	for(int i=0;i<n;i++){
		int temp=A[i];
		int j=i;
		while(j>0 && temp<A[j-1]){
			A[j]=A[j-1];
			cout<<"j"<<j<<"\n";
			j--;

		}
		A[j]=temp;
	}
}
void printArr(int* A,int n){
	for(int i =0;i<n;i++){
		cout<<A[i]<<" ";
	}
	cout<<"\n";
}
int main(){
 int A[]={5,8,7,9,5,7,1,3};
 insertion_sort(A,8);
 printArr(A,8);
}