unsigned int countBits(unsigned long long n){

  int cnt = 0;
  
  while(n > 0){
    
    unsigned long long bin = 1;
    
    while(bin * 2 <= n){
      bin *= 2;
    }
    
    n -= bin;
    cnt++;
    
  }
  
  return cnt;
  
}