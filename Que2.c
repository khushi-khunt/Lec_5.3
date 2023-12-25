#include<stdio.h>

void main(){
int choice,recharge,hindi,gujarati;
      clrscr();
      printf("========Telecom Service==========\n\n\n\n");
      printf("Press 1 for ENGLISH\n");
      printf("Press 2 for HINDI\n");
      printf("Press 3 for GUJARATI\n\n");

      printf("Enter your choice:");
      scanf("%d",&choice);

      switch (choice)
      {
      case 1:
	printf("\n press 1 for internet recharge\n");
	printf(" press 2 for top-up recharge\n");
	printf(" press 3 for special recharge\n\n");
	printf("Enter your choice:-");
	scanf("%d",&recharge);

      switch(recharge){
      case 1:
	    printf("you have successfully done internet recharge...\n");
	    break;
      case 2:
	    printf("you have successfully done top-up recharge...\n");
	    break;
      case 3:
	    printf("you have successfully done special recharge...\n");
	    break;
	    }
	    break;

	case 2:
		printf("\ninternet recharge ke liye 1 dabaiye\n");
		printf("top-up recharge ke liye 2 dabaiye\n");
		printf("special recharge ke liye 3 dabaiye\n\n");
		printf("Enter your choice:-");
		scanf("%d",&hindi);

      switch(hindi)
      {
      case 1:
	    printf("aapne safaltapurvak internet recharge kar liya he...\n");
	    break;
      case 2:
	    printf("aapne safaltapurvak top-up recharge kar liya he...\n");
	    break;
      case 3:
	    printf("aapne safaltapurvak special recharge kar liya he...\n");
	    break;
	    }
	    break;



	case 3:
		printf("\ninternet recharge mate 1 dabavo\n");
		printf("top-up recharge mate 2 dabavo\n");
		printf("special recharge mate 3 dabavo\n\n");
		printf("Enter your choice:-");
		scanf("%d",&gujarati);

      switch(gujarati)
      {
      case 1:
	    printf("Tme safaltapurvak internet recharge karyu che...\n");
	    break;
      case 2:
	    printf("Tme safaltapurvak top-up recharge karyu che...\n");
	    break;
      case 3:
	    printf("Tme safaltapurvak special recharge karyu che...\n");
	    break;
	    }
	    default:
		printf("Invalid choice\n");
	    break;
	    }

}








