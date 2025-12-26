#include <stdio.h>
int main(){
    
int score;
scanf("%d",& score);

int A,B,C,D,F;

while(score!= -1){
    
    
    
    if (score >= 68){
    
   
  if(score >= 85){
        printf("%d(A)\n",score);
        ++A;
     	scanf("%d",&score);
    }else if(score >= 75){
          printf("%d(B)\n",score);
          ++B;
        	scanf("%d",&score);
    }else {
         printf("%d(C)\n",score);
         ++C;
        scanf("%d",&score);
        
    }
    
}else if(score >= 55){
  printf("%d(D)\n",score);
  ++D;
   scanf("%d",&score);
 } else {
    
     printf("%d(F)\n",score);
     ++F;
    scanf("%d",&score);
}

  
    
}

  printf("A(%d)\n",A);
    printf("B(%d)\n",B-1);
    printf("C(%d)\n",C);
    printf("D(%d)\n",D);
    printf("F(%d)\n",F);

return 0;
}





