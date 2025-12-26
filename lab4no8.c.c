
#include <stdio.h>
int main(){
    
int score,n,i=1;
scanf("%d",&n);

while(i<=n){
    
    scanf("%d",&score);
    
    if (score >= 68){
    
   
  if(score >= 85){
        printf("%d(A)\n",score);
     
    }else if(score >= 75){
          printf("%d(B)\n",score);
        
    }else {
         printf("%d(C)\n",score);
        
        
    }
    
}else if(score >= 55){
  printf("%d(D)\n",score);
   
 } else {
    
     printf("%d(F)\n",score);
    
}

    
    
    i++;
}



return 0;
}














  
