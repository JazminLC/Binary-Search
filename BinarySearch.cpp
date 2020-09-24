#include <iostream>
using namespace std;


int BinarySearch(int arr[],int n,int b){
	int f,m,l;
	f=0;
	m=n/2;
	l=n-1;

	if(b>=arr[0] && b<=arr[n-1]){
		while (arr[m]!=b){
			if (b<arr[m]){
				l=m;
				m=(l-f)/2;
			}
			else if (m=0 && arr[m]!=b){
				return -1;
			}
			else{
				f=m;
				m=(l-f)/2;
			}
			
		}
		if (arr[m]==b){
			return m;
		}
	}
	else{
		return -1;
	}

}

int main(){
	int n,b;
	cout<<"Insert the number of elements: ";
	cin>>n;
	int arr[n]={0};
	cout<<"Insert all your elements: ";
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	cout<<"Which element do you want to search? ";
	cin>>b;
	int r=BinarySearch(arr,n,b);
	cout<<"I found it at index "<<r<<"\n";
	return 0;
}
