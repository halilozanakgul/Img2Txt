#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
double res[10];
void write(){
  pair < double , int > results[10];
  for(int i=0;i<10;i++)
    results[i]=make_pair(res[i],i);
  sort(results,results+10);
  for(i=0;i<3;i++)
    cout<<"Guess="<<results[i].second<<" Confidence="<<results[i].first<<endl;
}
int main(){
  return 0;
}
