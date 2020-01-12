t;k;n;m;c;main(){
scanf("%d",&t);t*=3;int x[t];for(n=0;n<t;n++)scanf("%d",&x[n]);
do{c=0;for(n=1;n<t;){k=n;
	x[k]==x[k-3]&&k++;
	x[k]==x[k-3]&&k++;
	if(x[k]>x[k-3])
		for(k=0;k<3;k++){
			m=x[n-3];x[n-3]=x[n];x[n]=m;n++;c++;
		}
}}while(c>3);
for(n=t-1;n>=0;)printf("%d %d %d\n",x[n--],x[n--],x[n--]);
return 0;
}
