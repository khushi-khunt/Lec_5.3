#include<stdio.h>

void main(){
      int a,b,c,d,e;

      printf("Enter A:-");
      scanf("%d",&a);
      printf("Enter B:-");
      scanf("%d",&b);
      printf("Enter C:-");
      scanf("%d",&c);
      printf("Enter D:-");
      scanf("%d",&d);
      printf("Enter E:-");
      scanf("%d",&e);
      (a>b)?(a>c)?(a>d)?(a>e)?printf("A max")
		       :printf("E max")
		 :(d>e)?printf("D max")
		       :printf("E max")
	   :(c>d)?(c>e)?printf("C max")
		       :printf("E max")
		 :(d>e)?printf("D max")
		       :printf("E max")
     :(b>c)?(b>d)?(b>e)?printf("B max")
		       :printf("E max")
		 :(d>e)?printf("D max")
		       :printf("E max")
	   :(c>d)?(c>e)?printf("C max")
		       :printf("E max")
		 :(d>e)?printf("D max")
		       :printf("E max");



}
