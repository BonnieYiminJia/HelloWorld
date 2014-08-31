#include <iostream>
using namespace std;

int binsearch(int target,int *numlist,int n, int low, int high){
	int middle= (low+high)/2;
	if (target==numlist[middle]){
		return middle;
	}
	if (target<numlist[middle]){
		binsearch
	}
	if (target>numlist[middle]){
	
	}
}




int main(){
	int n;
	cout<<"How many numbers would you like to have for the number array?\n";
	cin>>n;
	int* numlist=new int[n];
	for (int i=0;i<n;i++){
		cout<<"Please enter the number "<<i+1<<": ";
		cin>>numlist[i];
	}
	cout<<"The array you entered is as following: "
	for (int i=0;i<n;i++){
		cout<<numlist[i]<<" ";
	}
	int target;
	cout<<"What number do you want to search: ";
	cin>>target;
	binsearch(target,numlist,n,0,n-1);
	
	delete [] numlist;
}
