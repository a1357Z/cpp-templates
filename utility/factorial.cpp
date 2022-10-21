
//this calculate nCk without integer overflow
long long C(long long n,long long k){
	long long f=1;
	for(long long i=0;i<k;i++)f*=n-i,f/=i+1;
	return f;
}