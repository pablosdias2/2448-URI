#include <stdio.h>


int BuscaBinaria(int vet[],int k,int posFim){
	
	int posIni=0,m;
	
	while(posFim>=posIni){
		
		m=(posIni+posFim)/2;
		
		if(k==vet[m])return m;
		
		else if(k<vet[m])posFim=m-1;
		
		else posIni=m+1;
		

		}
		return -1;
	}
	
int main(){
     
     int s=0,n,m,i,pos,ant=0;
     
     scanf("%d %d",&n,&m);
     
     int v1[n],v2[m];
     
     for(i=0;i<n;i++)scanf("%d",&v1[i]);
     for(i=0;i<m;i++)scanf("%d",&v2[i]);
     
     for(i=0;i<m;i++){
         
         pos=BuscaBinaria(v1,v2[i],n);
         
         if(pos>ant)s+=pos-ant;
         else s+=ant-pos;
         
         ant=pos;
         
     }
     
     printf("%d\n",s);
     
   return 0;
}
