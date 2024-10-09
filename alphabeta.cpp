#include<iostream>
using namespace std;
const int MAX=100;
const int MIN=-100;
int max(int a,int b){
if(a>b){
return a;
}
else{
return b;
}
}
int min(int a,int b){
if(a<b){
return a;
}
else{
return b;
}
}
int minmax(int depth,int nodeIndex,bool maximizingPlayer ,int values[],int alpha, int beta){
if (depth==3){
return values[nodeIndex];
}
if (maximizingPlayer){
int best=MIN;
for(int i=0;i<=1;i++){
int val=minmax(depth+1,nodeIndex*2+i,false,values,alpha,beta);
best=max(best,val);
alpha=max(alpha,best);
if(alpha>=beta)
break;
}
return best;
}
else{
int best=MAX;
for(int i=0;i<=1;i++){
int val=minmax(depth+1,nodeIndex*2+i,true,values,alpha,beta);
best=min(best,val);
alpha=min(beta,best);
if(alpha>=beta)
break;
}
return best;
}
}
int main(){
int values[8]={3,5,6,9,1,2,0,-1};
cout<<"The optimal value is : "<<minmax(0,0,true,values,MIN,MAX);
return 0;
}
