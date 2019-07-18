#include<bits/stdc++.h>
using namespace std;
void merge( int* A,int start,int mid,int end){
	int temp[end-start+1];
	int i=start,j=mid+1,k=0;
	while(i<=mid && j<=end){
		if(A[i]<A[j]){
			temp[k]=A[i];
			i++;
		}else{
			temp[k]=A[j];
			j++;
		}
		k++;
	}
	while(i<=mid){
		temp[k]=A[i];
		k++;
		i++;
	}
	while(j<=end){
		temp[k]=A[j];
		j++;
		k++;
	}
	for(int i=start;i<=end;i++){
		A[i]=temp[i-start];
	}

}
void mergeSort(int* arr,int start,int end){
	mergeSort(arr,start,(start+end)/2);
	mergeSort(arr,(start+end)/2+1,end);
	merge(arr,start,(start+end)/2,end);
	

}
void printArr(int* A,int n){
	for(int i =0;i<n;i++){
		cout<<A[i]<<" ";
	}
	cout<<"\n";
}
int main(){
 int A[]={5,8,7,9,5,7,1,3};
 mergeSort(A,0,7);
 printArr(A,8);
}