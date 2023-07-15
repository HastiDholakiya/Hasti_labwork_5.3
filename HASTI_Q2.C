#include<stdio.h>
#include<conio.h>

void main(){
int Choice,English,Hindi,Gujarati;
clrscr();

printf("Press 1 for English...\n");
printf("Press 2 for Hindi...\n");
printf("Press 3 for Gujarati...\n");

printf("Enter Your Choice...\n");
scanf("%d",&Choice);
switch(Choice){
case 1:
     printf("Press 1 for Internet Recharge...\n");
     printf("Press 2 for Top-up Recharge...\n");
     printf("Press 3 for Special Recharge...\n");
     scanf("%d",&English);
     switch(English){
     case 1:
	  printf("You have successfully done Internet Recharge.\n");
	  break;
     case 2:
	  printf("You have successfully done Top-up Recharge.\n");
	  break;
     case 3:
	  printf("You have successfully done Special Recharge.\n");
	  break;
	default:
	  printf("Not available...\n");
	  break;
	}
	break;
case 2:
     printf("Internet Rechrge ke liye 1 dabaiye.\n");
     printf("Top-up Recharge ke liye 2 dabaiye.\n");
     printf("Special Recharge ke liye 3 dabaiye.\n");
     scanf("%d",&Hindi);
     switch(Hindi){
     case 1:
	  printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
	  break;
     case 2:
	  printf("Aapne safaltapurvak Top-up Recharge kar liya he.\n");
	  break;
     case 3:
	  printf("Aapne safaltapurvak special Recharge kar liya he.\n");
	  break;
	  default:
	  printf("Uplabdhdha nahi he...\n");
	  break;
	}
	break;
case 3:
     printf("Internet Recharge mate 1 dabavo.\n");
     printf("top-up Recharge mate 2 dabavo.\n");
     printf("Special Recharge mate 3 dabavo.\n");
     scanf("%d",&Gujarati);
     switch(Gujarati){
     case 1:
	  printf("Tame safaltapurvak Internet Recharge karyu chhe.\n");
	  break;
     case 2:
	  printf("Tame safaltapurvak Top-up Recharge karyu chhe.\n");
	  break;
     case 3:
	  printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
	  break;
	  default:
	  printf("Uplabshdha nathi...\n");
	  break;
       }
       break;
}
getch();
}