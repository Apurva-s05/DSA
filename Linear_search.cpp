#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[],int n,int key){
	for(int i=0;i<n;i++){         // Perform linear search
		if(a[i] == key){            // Compare with initial value
			return i;                // Return value
		}
	}
	return -1;                   // If key not present then return invalid keyword
}



int main() {
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

	int pos = linearSearch(a,n,key);
	if(pos == -1){
		cout<<"Keyword not found"<<endl;
	}else{
		cout<<"Keyword found at index "<<pos<<endl;
	}
    return 0;
}
