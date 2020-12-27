#include<iostream>
using namespace std;
//划分算法
int partition(int a[],int s,int t){
	int i=s,j=t;
	int temp = a[s];
	//调整数组位置，使比temp小的都位于右边，比temp大的都位于左边
	while(i!=j){	
		while(i<j && a[j]>=temp) j--;
		a[i] = a[j];
		while(i<j && a[i]<=temp) i++;
		a[j] = a[i];
	}
	a[i] = temp;
	return i;
}

int quicksort(int a[],int s,int t){
	if(s<t){
		int i = partition(a,s,t);
		quicksort(a,s,i-1);
		quicksort(a,i+1,t);
	}
}

int main(){
	int n=5;
	int a[]={5,2,6,1,4};
	quicksort(a,0,4);
	for(int i=0;i<5;i++){
		cout << a[i] << " ";
	}
	return 0;
}
