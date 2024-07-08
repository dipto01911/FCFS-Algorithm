
#include<iostream>
using namespace std;
	int n,i,Bt[20],Ct[20],Tt[20],wt[20];
int main(){
	
	cout<<"enter the number of process"<<endl;
	cin>>n;
	cout<<endl;
	cout<<"enter the process with their burst time"<<endl;
	for(i=1;i<=n;i++){
	  printf("Enter the process p%d burst time\n",i);
	  cin>>Bt[i];
	}
	for(i=1;i<=n;i++){
		Ct[i]=Ct[i-1]+Bt[i];
	
		
	}
	float avwt=0,avtt=0;
	
	printf("\n process  Burst time   TAT  WT\n");
	for(i=1;i<=n;i++){
		Tt[i]=Ct[i];
		wt[i]=Tt[i]-Bt[i];
		avwt=avwt+wt[i];
		avtt=avtt+Tt[i];
	}
	
	for(i=1;i<=n;i++){
	
		printf(" %d\t %d\t %d\t %d\t\n",i,Bt[i],Tt[i],wt[i]);
	}
	printf("average waiting time is %f\n",avwt/n);
	printf("average turnaround time is %f\n",avtt/n);
	return 0;
	
}
