//ascii(american standard code interchangeble information )in this 0 = 48 , 2 =49, 9=57;

// if we want to change any character integer like "5" then i have to print its integer value by using '%d' it give an value from 48 to 57 , so of 5 value is 52 if subtract 52-48=5; that's how we convert character int into real integer ;
#include <stdio.h>
#include<string.h>


int main() {
    char a[10];
    char *one[10]={"","one","two","three","four","five","six","seven","eight","nine"};
    
    char *tens[12]={"", "ten", "eleven", "twelve", "thirteen", "fourteen", "fivteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    
    char *tw[10]={"","","twenty","thirty", "fourty" , "fifty", "sixty", "seventy" , "eighty", "ninety"};
    
    
    char *hun[10]={"","One hundred","Two hundred"," Three hundred","Four hundred", "Five hundred","Six hundred" , " Seven hundred" , " Eight hundred", "Nine hundred"};
    printf("Enter the number ");
    scanf("%s",&a);
    int len = strlen(a);
    if(len==1){
    int x=a[0]-48;
    printf("%s",one[x]);
    }
    
    if(len==2 && a[0]-48==1){
       int x=a[0]-48+a[1]-48;
       printf("%s",tens[x]);
    }
    if(len==2 && a[1]-48==0){
               int x=a[0]-48+a[1]-48;
       printf("%s",tw[x]);
    }
    
   if(len==2){
       //23
       int p=a[0]-48;
       int q=a[1]-48;
       printf("%s ",tw[p]);
       printf(" %s",one[q]);
   } 
  
    
   
  if(len==3){
      int w= a[0]-48;
   
      printf("%s ",hun[w]);
    if(a[1]-48==1){
       int x=a[1]-48+a[2]-48;
       printf("%s",tens[x]);
    }
    if( a[2]-48==0){
       int x=a[1]-48+a[2]-48;
       printf("%s ",tw[x]);
    }
    
   else{
       //23
       int p=a[1]-48;
       int q=a[2]-48;
       printf(" %s ",tw[p]);
       printf(" %s",one[q]);
   } 
  }  
   
   return 0;
}