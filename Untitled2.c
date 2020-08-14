int main(){
	int o;
	o=factorialTrailingZeros(28);
	printf("%d",o);
}
int factorialTrailingZeros(int n) {
     int count = 0,i; 
        for ( i = 5; n / i >= 1; i *= 5) 
            count += n / i; 
  
        return count;
}



