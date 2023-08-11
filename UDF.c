#include<stdio.h>
void go(){
	int a,b,i=0;
	 do{
	
	printf("enter number :");
	scanf("%d",&a);
         if(a%2==0){
               	      printf("both\n");
                   } else{
                         	 printf("Not\n");
                         }
                        for(i=0;i<=a;i++){
                        	if(a==100000){
                        		 continue;
							}else{
								break;
							}
						}
            i++;
       }while(i<=a);
 
}
main()
{
    go();

}
