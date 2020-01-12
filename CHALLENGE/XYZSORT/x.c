t;k;n;main(){
scanf("%d",&t);int x[t],y[t],z[t];for(k=0;k<t;k++)scanf("%d %d %d",&x[k],&y[k],&z[k]);
do{k=0;
for(n=1;n<t;n++){
	int a=x[n],b=y[n],c=z[n],d=x[n-1],e=y[n-1],f=z[n-1];
	if(a<d||(a==d&&b<e)||(a==d&&b==e&&c<f))
		x[n-1]=a,y[n-1]=b,z[n-1]=c,x[n]=d,y[n]=e,z[n]=f,k++;}
}while(k);
for(k=0;k<t;k++)printf("%d %d %d\n",x[k],y[k],z[k]);
k=0;
}
