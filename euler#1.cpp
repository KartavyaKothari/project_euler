#include<bits/stdc++.h>
using namespace std;

long long sum_n(long long n){
    return (n*(n+1))/2;
}

long long solve(int num){
    long long num_three = num/3;
    long long num_five = num/5;
    long long num_both = num/15;

    return 3*sum_n(num_three)+5*sum_n(num_five)-15*sum_n(num_both);
}

int main(){
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i = 0 ; i < n ;i++){
        cin>>nums[i];
    }

    for(int i = 0 ; i < n ;i++){
        cout<<solve(nums[i])<<endl;
    }
}