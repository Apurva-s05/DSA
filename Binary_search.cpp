#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int n,int key){
	int s = 0, e = n-1;
	while(s <= e){
		int mid = s + (e-s)/2;  //To avoid integer overflow we use this formula for finding mid insted of mid=(s+e)/2;
	if( a[mid] == key ){
		return mid;
	}else if(a[mid] > key){     //If mid greater than key then search right side of mid.
		return mid - 1;
	}else{
		return mid + 1;         //If mid less than key then search left side of mid.
	}
}
	return -1;                  //If any of above condition fails then return invalid index.
}
int main(){
	int n;
	cout<<"Enter size of array:"<<endl;
	cin>>n;

	cout<<"Enter elements in array:"<<endl;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cout<<"Enter key"<<endl;
	cin>>key;

	sort(a,a+1);               //Binary search applicable only for sorted array so we performed sorting first and then searching.

	int pos=binarySearch(a,n,key);
	if(pos==-1){
		cout<<"Keyword not found"<<endl;
	}else{
		cout<<"Keyword found at index "<<pos<<endl;
	}

	return 0;
}
