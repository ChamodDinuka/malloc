#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>    



char memory[100];
int mem,space,memo,remain,i;
char alloc='a';
char fre='f';
char *p=memory;
char *b;
int j=0;
int e=0;
static int k =0;

int Mymalloc(mem){
    if(mem>25000-9){
        printf("memory is not enough\n");
        return 0;
    }
    k++;
    if(p==memory && mem<=25000-9){
    //    printf("%p\n",p);
        
        *p=alloc;
        *(int*)(p+1)=k;
            p=p+4;
    //        printf("%p\n",p);
        *(int*)(p+1)=mem;
            p=p+4;
      //  printf("%p\n",p);
        space=25000-(mem+9);
        }
    else if(p!=memory && mem<=space-9){
        p=p+1;
        *p=alloc;
        //printf("%p\n",p);
        *(int*)(p+1)=k;
          p=p+4;
          
        *(int*)(p+1)=mem;
        p=p+4;
      //  printf("%p\n",p);
        space=space-(mem+9);
    }else if(mem>space || mem>25000){
        for(i=0;i<e;i=i+9){
            if(memory[i]=fre && memory[i+5]>=mem){
                remain=memory[i+5]-(mem+9);
                b=&(memory[i]);
                *b=alloc;
                *(int*)(b+1)=memory[i+1];
                b=b+4;
                *(int*)(b+1)=mem;
                b=b+4;
                //    printf("%p\n",b);
                space=space-mem;
                p=p+1;
                *p=fre;
                //    printf("%p\n",p);
                *(int*)(p+1)=memory[i+1];
                p=p+4;
          
                *(int*)(p+1)=remain;
                p=p+4;
                  //  printf("%p\n",p);
             }else{
                 printf("memory is full");
             }
    
            
        
            }
        }
    

    printf("%d %d free of 25000 bytes\n",k,space);
e=e+9;    
}
int Myfree(j,memo){
    for(i=1;i<e;i=i+9){

        if(memory[i]==j && memo<=memory[i+4] && memory[i-1]==alloc){
            
        printf("%d\n",memory[i]);
            remain=memory[i+4]-memo;
            printf("%d bytes free from block %d\n",memo,j);
            b=&(memory[i-1]);
            *b=fre;
            *(int*)(b+1)=j;
            b=b+4;
            *(int*)(b+1)=memo;
            b=b+4;
        //    printf("%p\n",b);
            space=space+memo-9;
            
        
}}    p=p+1;
        *p=alloc;
    //    printf("%p\n",p);
        *(int*)(p+1)=k;
          p=p+4;
          
        *(int*)(p+1)=remain;
        p=p+4;
     //   printf("%p\n",p);
        
        printf("%d",space);
}

