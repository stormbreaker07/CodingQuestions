#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
int main() {int n; long int sum=0; cin>>n; int a[n]; for(int i=0;i<n;i++) {cin>>a[i];}  if(n==1) {cout<<a[0]+1;} else {for(int i=0;i<n-1;i++) {if(i==0) {sum+=a[i]+1;} if(a[i+1]>=a[i]) {sum+=(a[i+1]-a[i])+1; sum+=1;} else if(a[i+1]<a[i]) {sum+=a[i]-a[i+1]+1; sum+=1;}}cout<<sum;} return 0;}
		 
