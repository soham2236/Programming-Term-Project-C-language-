#include <stdio.h>
#include <math.h>
#define SIZE 2928

int
month(int days)
{
	int month;
	month = days/30;
	month++;
	return(month);

}

int 
day(int days)
{
	days=days % 30;
	return(days);
}




int main(void)
{
	//double year;
	//double day;
	double array[SIZE];
	double sup[366];
	double Mich[366];
    double Huron[366];
	double Erie[366];
	double Ont[366];
	double Clr[366];
	double TotalAverage;
	int dataf;
	FILE*data; //File pointer
	data= fopen("TERM2020.txt","r"); //File open and read
	//dataf= fscanf(data," %lf%lf",&year,&day);
	//printf("%lf,%lf",year,day);
	int i=0;
	
	while(dataf!=EOF){
		
		dataf= fscanf(data," %lf",&array[i]);
		i+=1;
		

	}
	printf("**ALL TEMPERATURE VALUES ARE IN DEGREES CELSIUS**\n\n");
	int a=0;
	double count1=0;
	for(i=2;i<SIZE;i=i+8){
		sup[a]=array[i];
		count1+=sup[a];
		a+=1;
	
	}printf("QUESTION 1\n\n");
	printf("The average temperature for Lake Superior is: %.2lf\n",count1/366);
	int b=0;
	double count2=0;
	for(i=3;i<SIZE;i=i+8){
		Mich[b]=array[i];
		count2+=Mich[b];
		b+=1;
	}printf("The average temperature for Lake Michigan is: %.2lf\n",count2/366);
	int c=0;
	double count3=0;
	for(i=4;i<SIZE;i=i+8){
		Huron[c]=array[i];
		count3+=Huron[c];
		c+=1;
	}printf("The average temperature for Lake Huron is: %.2lf\n",count3/366);
	int d=0;
	double count4=0;
	for(i=5;i<SIZE;i=i+8){
		Erie[d]=array[i];
		count4+=Erie[d];
		d+=1;
	}printf("The average temperature for Lake Erie is: %.2lf\n",count4/366);
	int e=0;
	double count5=0;
	for(i=6;i<SIZE;i=i+8){
		Ont[e]=array[i];
		count5+=Ont[e];
		e+=1;
	}printf("The average temperature for Lake Lake Ontario is: %.2lf\n",count5/366);
	int f=0;
	double count6=0;
	for(i=7;i<SIZE;i=i+8){
		Clr[f]=array[i];
		count6+=Clr[f];
		f+=1;
	}printf("The average temperature for Lake St. Clair is: %.2lf\n",count6/366);
	TotalAverage= ((count1/366)+(count2/366)+(count3/366)+(count4/366)+(count5/366)+(count6/366))/6;
	printf("\n\nThe average temperature of all Lakes is %.2lf\n",TotalAverage);
	printf("---------------------------------------------------------------------------------------------\n");
	
	
	
	
	//Question 2//////////////////////////////////////////////////////////////////////////////
	//Coldest lake
	printf("QUESTION 2 \n\n");
	double Supave=count1/366;
	double Michave=count2/366;
	double Hurave=count3/366;
	double Erieave=count4/366;
	double Ontave=count5/366;
	double Stave=count6/366;
	double high;
	double Hightemp[]={Supave,Michave,Hurave,Erieave,Ontave,Stave};
	high= Hightemp[0]; //high equals index 0
	double low;
	double Lowtemp[]={Supave,Michave,Hurave,Erieave,Ontave,Stave};
	low= Lowtemp[0]; //low equals index 0
	for(int j=1; j<=6; j++){ //for loop to get lowest num
		if(Lowtemp[j]<low){  //loops until lowest is found
			low=Lowtemp[j]; //Assigns low as that num
		}
		if(Hightemp[j]>high){  //Loops until highest is found
			high=Hightemp[j]; //Assigns high as that num
		}
	}
	if(low==count1/366){
		printf("The coldest lake is Lake Superior with average temperature of %.2lf\n",Supave);
	}else if(low == count2/366){
		printf("The coldest lake is Lake Michigan with an average temperature of %.2lf\n",Michave);
	}else if(low== count3/366){
		printf("The coldest lake is Lake Huron with an average temperature of %.2lf\n",Hurave);
	}else if(low== count4/366){
		printf("The coldest lake is Lake Erie with an average temperature of %.2lf\n",Erieave);
	}else if(low== count5/366){
		printf("The coldest lake is Lake Ontario with an average with an average temperature of %.2lf\n",Ontave);
	}else if(low== count6/366){
		printf("The coldest lake is Lake St.Clair with an average temperature of %.2lf\n",Stave);
	}
	printf("\n\n");

	//Warmest Lake	
	if(high==count1/366){
		printf("The warmest lake is Lake Superior with average temperature of %.2lf\n",Supave);
	}else if(high == count2/366){
		printf("The warmest lake is Lake Michigan with an average temperature of %.2lf\n",Michave);
	}else if(high== count3/366){
		printf("The warmest lake is Lake Huron with an average temperature of %.2lf\n",Hurave);
	}else if(high== count4/366){
		printf("The warmest lake is Lake Erie with an average temperature of %.2lf\n",Erieave);
	}else if(high== count5/366){
		printf("The warmest lake is Lake Ontario with an average with an average temperature of %.2lf\n",Ontave);
	}else if(high== count6/366){
		printf("The warmest lake is Lake St.Clair with an average temperature of %.2lf\n",Stave);
	}
	printf("\n\n");

	
	
	
	if(Supave<TotalAverage){
		printf("Lake Superior is below average\n");
		}else{
			printf("Lake Superior is above average\n");
	}
	if(Michave<TotalAverage){
		printf("Lake Michigan is below average\n");
		}else{
			printf("Lake Michigan is above average\n");
		}
	if(Hurave<TotalAverage){
		printf("Lake Huron is below average\n");
		}else{
			printf("Lake Huron is above average\n");
		}
	if(Erieave<TotalAverage){
		printf("Lake Erie is below average\n");
		}else{
			printf("Lake Erie is above average\n");
		}
	if(Ontave<TotalAverage){
		printf("Lake Ontario is below average\n");
		}else{
			printf("Lake Ontario is above average\n");
		}
	if(Stave<TotalAverage){
		printf("Lake St.Clair is below average\n");
		}else{
			printf("Lake St.Clair is above average\n");
		}
	printf("---------------------------------------------------------------------------------\n");
	
	
		
	
	
	//Question 3///////////////////////////////////////////////////////////
	printf("QUESTION 3\n\n");
	
	//Lake Superior
	double warmsup;
	warmsup=sup[0];
	int dayws=1;
	for(int i=0;i<366;i++){
		if(warmsup<sup[i]){
			warmsup= sup[i];
			dayws=i+1;
		}
	}
	printf("LAKE SUPERIOR:\n");
	printf("Warmest temperature is %.2lf\n",warmsup);
	for(i=0;i<366;i++){
		if(sup[i]==warmsup){
			dayws=i+1;
			printf("Day : %d | Date : %d/%d\n\n",dayws,day(dayws),month(dayws));
		}
	}
	double coldsup;
	coldsup=sup[0];
	int daycs=1;
	for(int i=0;i<366;i++){
		if(coldsup>sup[i]){
			coldsup= sup[i];
			daycs=i+1;
		}
	}
	printf("Coldest temperature is %.2lf\n",coldsup);
  for(i=0;i<366;i++){
		if(sup[i]==coldsup){
			daycs=i+1;
			printf("Day : %d | Date : %d/%d\n",daycs,day(daycs),month(daycs));
		}
	}

	
	//Lake Michigan
	double warmmich;
	warmmich=Mich[0];
	int daywm=1;
	for(int i=0;i<366;i++){
		if(warmmich<Mich[i]){
			warmmich= Mich[i];
			daywm=i+1;
		}
	}
	printf("\n\n");
	printf("LAKE MICHIGAN:\n");
	printf("Warmest temperature is %.2lf\n",warmmich);
  for(i=0;i<366;i++){
		if(Mich[i]==warmmich){
			daywm=i+1;
			printf("Day : %d | Date : %d/%d\n\n",daywm,day(daywm),month(daywm));
		}
	}
	
	double coldmich;
	coldmich=Mich[0];
	int daycm=1;
	for(int i=0;i<366;i++){
		if(coldmich>Mich[i]){
			coldmich= Mich[i];
			daycm=i+1;
		}
	}
	printf("Coldest temperature is %.2lf\n",coldmich);
  for(i=0;i<366;i++){
		if(Mich[i]==coldmich){
			daycm=i+1;
			printf("Day : %d | Date : %d/%d\n",daycm,day(daycm),month(daycm));
		}
	}
	
	
	
	//Lake Huron
	double warmhur;
	warmhur=Huron[0];
	int daywh=1;
	for(int i=0;i<366;i++){
		if(warmhur<Huron[i]){
			warmhur= Huron[i];
			daywh=i+1;
		}
	}
	printf("\n\n");
	printf("LAKE HURON:\n");
	printf("Warmest temperature is %.2lf\n",warmhur);
	 for(i=0;i<366;i++){
		if(Huron[i]==warmhur){
			daywh=i+1;
			printf("Day : %d | Date : %d/%d\n\n",daywh,day(daywh),month(daywh));
		}
	}
	double coldhur;
	coldhur=Huron[0];
	int daych=1;
	for(int i=0;i<366;i++){
		if(coldhur>Huron[i]){
			coldhur= Huron[i];
			daych=i+1;
		}
	}
	printf("Coldest temperature is %.2lf\n",coldhur);
	for(i=0;i<366;i++){
		if(Huron[i]==coldhur){
			daych=i+1;
			printf("Day : %d | Date : %d/%d\n",daych,day(daych),month(daych));
		}
	}
	
		
	//Lake Erie
	double warmer;
	warmer=Erie[0];
	int daywe=1;
	for(int i=0;i<366;i++){
		if(warmer<Erie[i]){
			warmer= Erie[i];
			daywe=i+1;
		}
	}
	printf("\n\n");
	printf("LAKE ERIE:\n");
	printf("Warmest temperature is %.2lf\n",warmer);
  for(i=0;i<366;i++){
		if(Erie[i]==warmer){
			daywe=i+1;
			printf("Day : %d | Date : %d/%d\n\n",daywe,day(daywe),month(daywe));
		}
	}
	
	double colder;
	colder=Erie[0];
	int dayce=1;
	for(int i=0;i<366;i++){
		if(colder>Erie[i]){
			colder= Erie[i];
			dayce=i+1;
		}
	}
	printf("Coldest temperature is %.2lf\n",colder);
	for(i=0;i<366;i++){
		if(Erie[i]==colder){
			dayce=i+1;
			printf("Day : %d | Date : %d/%d\n",dayce,day(dayce),month(dayce));
		}
	}
	
	
	//Lake Ontario
	double warmont;
	warmont=Ont[0];
	int daywo=1;
	for(int i=0;i<366;i++){
		if(warmont<Ont[i]){
			warmont= Ont[i];
			daywo=i+1;
		}
	}
	printf("\n\n");
	printf("LAKE ONTARIO:\n");
	printf("Warmest temperature is %.2lf\n",warmont);
	for(i=0;i<366;i++){
		if(Ont[i]==warmont){
			daywo=i+1;
			printf("Day : %d | Date : %d/%d\n\n",daywo,day(daywo),month(daywo));
		}
	}
	
	
	double coldont;
	
	coldont=Ont[0];
	int dayco=1;
	for(int i=0;i<366;i++){
		if(coldont>Ont[i]){
			coldont= Ont[i];
			dayco=i+1;
		}
	}
	printf("Coldest temperature is %.2lf\n",coldont);
	for(i=0;i<366;i++){
		if(Ont[i]==coldont){
			dayco=i+1;
			printf("Day : %d | Date : %d/%d\n",dayco,day(dayco),month(dayco));
		}
	}
	
	//Lake St.Clair
	double warmcla;
	warmcla=Erie[0];
	int daywc=1;
	for(int i=0;i<366;i++){
		if(warmcla<Clr[i]){
			warmcla= Clr[i];
			daywc=i+1;
		}
	}
	printf("\n\n");
	printf("LAKE ST. CLAIR:\n");
	printf("Warmest temperature is %.2lf\n",warmcla);
	for(i=0;i<366;i++){
		if(Clr[i]==warmcla){
			daywc=i+1;
			printf("Day : %d | Date : %d/%d\n\n",daywc,day(daywc),month(daywc));
		}
	}
	
	double coldcla;
	coldcla=Clr[0];
	int daycc=1;
	for(int i=0;i<366;i++){
		if(coldcla>Clr[i]){
			coldcla= Clr[i];
			daycc=i+1;
		}
	}
	printf("Coldest temperature is %.2lf\n",coldcla);
	for(i=0;i<366;i++){
		if(Clr[i]==coldcla){
			daycc=i+1;
			printf("Day : %d | Date : %d/%d\n",daycc,day(daycc),month(daycc));
		}
	}
	printf("\n-------------------------------------------------------------\n");
	

	//Question 4////////////////////////////////////////////////////////////////////////
	printf("QUESTION 4\n\n");
	//Overall warmest temperature among all lakes
	double warm_overall[]={warmsup,warmmich,warmhur,warmer,warmont,warmcla};
	double warm_temp;
	int dayovw=1;
	warm_temp=warm_overall[0];
  for(int i=0;i<6;i++){
		if(warm_temp<warm_overall[i]){
			warm_temp= warm_overall[i];
			
		}
	}
  
	if(warm_temp==warmsup){
		printf("The warmest overall temperature is %.2lf in Lake Superior on day : %d\n",warm_temp,dayws);
	}
	if(warm_temp==warmmich){
		printf("The warmest overall temperature is %.2lf in Lake Michigan on day : %d\n",warm_temp,daywm);
	}
	if(warm_temp==warmhur){
		printf("The warmest overall temperature is %.2lf in Lake Huron on day : %d\n",warm_temp,daywh);
	}
	if(warm_temp==warmer){
		printf("The warmest overall temperature is %.2lf in Lake Erie on day : %d\n",warm_temp,daywe);
	}
	if(warm_temp==warmont){
		printf("The warmest overall temperature is %.2lf in Lake Ontario on day : %d\n",warm_temp,daywo);
	}
	if(warm_temp==warmcla){
		printf("The warmest overall temperature is %.2lf in Lake St. Clair on day : %d\n",warm_temp,daywc);
	}

  for(i=0;i<366;i++){
		if(sup[i]==warm_temp){
			dayovw=i+1;
			printf("Day :%d  | Date: %d/%d\n",dayovw,day(dayovw), month(dayovw));
		}
	}

  for(i=0;i<366;i++){
		if(Mich[i]==warm_temp){
			dayovw=i+1;
			printf("Day :%d  | Date: %d/%d\n",dayovw,day(dayovw), month(dayovw));
		}
	}

  for(i=0;i<366;i++){
		if(Huron[i]==warm_temp){
			dayovw=i+1;
			printf("Day :%d  | Date: %d/%d\n",dayovw,day(dayovw), month(dayovw));
		}
	}

  for(i=0;i<366;i++){
		if(Erie[i]==warm_temp){
			dayovw=i+1;
			printf("Day :%d  | Date: %d/%d\n",dayovw,day(dayovw), month(dayovw));
		}
	}

  for(i=0;i<366;i++){
		if(Ont[i]==warm_temp){
			dayovw=i+1;
			printf(" \nThe day :%d\n",dayovw);
		}
	}
 
	for(i=0;i<366;i++){
		if(Clr[i]==warm_temp){
			dayovw=i+1;
			printf(" \nThe day :%d\n",dayovw);
		}
	}
	printf("\n\n");
	
	
	//Overall Coldest temperature among all lakes
	
	double cold_overall[]={coldsup,coldmich,coldhur,colder,coldont,coldcla};
	double cold_temp;
	int dayov1=1, dayov2=1,dayov3=1,dayov4=1,dayov5=1,dayov6=1;
	cold_temp=cold_overall[0];
	for(int i=0;i<6;i++){
		if(cold_temp>cold_overall[i]){
			cold_temp= cold_overall[i];
		}
	}
	
	if(cold_temp==coldsup){
		printf("The coldest overall temperature is %.2lf in Lake Superior on day : %d\n",cold_temp,daycs);
	}
	if(cold_temp==coldmich){
		printf("The coldest overall temperature is %.2lf in Lake Michigan on day : %d\n",cold_temp,daycm);
	}
	if(cold_temp==coldhur){
		printf("The coldest overall temperature is %.2lf in Lake Huron on day : %d\n",cold_temp,daych);
	}
	if(cold_temp==colder){
		printf("The coldest overall temperature is %.2lf in Lake Erie on day : %d\n",cold_temp,dayce);
	}
	if(cold_temp==coldont){
		printf("The coldest overall temperature is %.2lf in Lake Ontario",cold_temp);
	}
	if(cold_temp==coldcla){
		printf("The coldest overall temperature is %.2lf occur in Lake St. Clair", cold_temp);
  }

  
	printf("\nThe repeated dates are :\n");
	

  for(i=0;i<366;i++){
		if(Clr[i]==cold_temp){
			dayov6=i+1;
			printf("Day : %d | Date : %d/%d\n", dayov6,day(dayov6),month(dayov6));
      
		}
	}
    	for(i=0;i<366;i++){
		if(sup[i]==cold_temp){
			dayov1=i+1;
			printf("Date : %d/%d\n",day(dayov1),month(dayov1));
		}
	}
  for(i=0;i<366;i++){
		if(Mich[i]==cold_temp){
			dayov2=i+1;
			printf("Date : %d/%d\n",day(dayov2),month(dayov2));
		}
	}
  for(i=0;i<366;i++){
		if(Huron[i]==cold_temp){
			dayov3=i+1;
			printf("Date : %d/%d\n",day(dayov3),month(dayov3));
		}
	}
  for(i=0;i<366;i++){
		if(Erie[i]==cold_temp){
			dayov4=i+1;
			printf("Date : %d/%d\n",day(dayov4),month(dayov4));
		}
	}
  for(i=0;i<366;i++){
		if(Ont[i]==cold_temp){
			dayov5=i+1;
			printf("Date : %d/%d\n",day(dayov5),month(dayov5));
		}
	}
   
	
	printf("\n\n--------------------------------------------------\n");
	
	
	//Question 5///////////////////////////////////////////////////////////	
		
	printf("QUESTION 5\n\n");
	double sumsup =0, summich=0, sumhuron=0, sumerie=0, sumont=0, sumstc=0;
	int p;
	
	for(p =172; p<=265; p++)
	{ 	
		sumsup = sumsup + sup[p];	
	}
	printf("The average summer temprature for Lake Superior is: %.1lf\n", sumsup/94);
		
		
		
	for(p =172; p<=265; p++)
	{ 
		summich = summich + Mich[p];
	}	
	printf("The average summer temprature for Lake Michigan is: %.1lf\n", summich/94);
	
	
	for(p =172; p<=265; p++)
	{ 
		sumhuron = sumhuron + Huron[p];	
	}
	printf("The average summer temprature for Lake Huron is: %.1lf\n", sumhuron/94);
	
	
	for(p =172; p<=265; p++)
	{ 	
		sumerie = sumerie + Erie[p];	
	}
	printf("The average summer temprature for Lake Erie is: %.1lf\n", sumerie/94);
	
	
	for(p =172; p<=265; p++)
	{ 
		sumont = sumont + Ont[p];	
	}
	
	printf("The average summer temprature for Lake Ontario is: %.1lf\n", sumont/94);
	
	for(p =172; p<=265; p++)
	{ 
		sumstc = sumstc + Clr[p];
	}
	
	printf("The average summer temprature for Lake St.Clair is: %.1lf\n\n", sumstc/94);
		
	printf("The order of lakes from warmest to coldest is as follows: Lake Erie, Lake St.Clair, Lake Ontario, Lake Michigan, Lake Huron and Lake Superior\n\n");
	printf("This list IS in agreement with the answer in question 2, as the order of the list is the same\n\n ");
	
	printf("---------------------------------------------------------------------\n");





// Question 6///////////////////////////////////////////////////////////

  printf("QUESTION 6\n\n");

  double sum1Sup = 0, sum2Sup = 0;
  double ansSup;
  for (i = 0; i <= 366; i++) {
    if (i <= 79 && i > 0) {
      sum1Sup = sum1Sup + sup[i];
    }
    if (i <= 365 && i >= 355) {
      sum2Sup = sum2Sup + sup[i];
    }
  }
  ansSup = sum1Sup + sum2Sup;
  printf("The average winter temperature for Lake Superior is: %.1lf\n",
         ansSup / 89);

  double sum1Mich = 0, sum2Mich = 0;
  double ansMich;
  for (i = 0; i <= 366; i++) {
    if (i <= 79 && i > 0) {
      sum1Mich = sum1Mich + Mich[i];
    }
    if (i <= 366 && i >= 355) {
      sum2Mich = sum2Mich + Mich[i];
    }
  }
  ansMich = sum1Mich + sum2Mich;
  printf("The average winter temperature for Lake Michigan is: %.1lf\n",
         ansMich / 89);

  double sum1Huron = 0, sum2Huron = 0;
  double ansHuron;
  for (i = 0; i <= 366; i++) {
    if (i <= 79 && i > 0) {
      sum1Huron = sum1Huron + Huron[i];
    }
    if (i <= 366 && i >= 355) {
      sum2Huron = sum2Huron + Huron[i];
    }
  }
  ansHuron = sum1Huron + sum2Huron;
  printf("The average winter temperature for Lake Huron is: %.1lf\n",
         ansHuron / 89);

  double sum1Erie = 0, sum2Erie = 0;
  double ansErie;
  for (i = 0; i <= 366; i++) {
    if (i <= 79 && i > 0) {
      sum1Erie = sum1Erie + Erie[i];
    }
    if (i <= 366 && i >= 355) {
      sum2Erie = sum2Erie + Erie[i];
    }
  }
  ansErie = sum1Erie + sum2Erie;
  printf("The average winter temperature for Lake Erie is: %.1lf\n",
         ansErie / 89);

  double sum1Ont = 0, sum2Ont = 0;
  double ansOnt;
  for (i = 0; i <= 366; i++) {
    if (i <= 79 && i > 0) {
      sum1Ont = sum1Ont + Ont[i];
    }
    if (i <= 366 && i >= 355) {
      sum2Ont = sum2Ont + Ont[i];
    }
  }
  ansOnt = sum1Ont + sum2Ont;
  printf("The average winter temperature for Lake Ontario is: %.1lf\n",
         ansOnt / 89);

  double sum1Clr = 0, sum2Clr = 0;
  double ansClr;
  for (i = 0; i <= 366; i++) {
    if (i <= 79 && i > 0) {
      sum1Clr = sum1Clr + Clr[i];
    }
    if (i <= 366 && i >= 355) {
      sum2Clr = sum2Clr + Clr[i];
    }
  }
  ansClr = sum1Clr + sum2Clr;
  printf("The average winter temperature for Lake St.Claire is: %.1lf\n\n\n",
         ansClr / 89);

  printf("The order of lakes from warmest to coldest is as follows: Lake "
         "Onario, Lake Michigan, Lake Erie, Lake Huron, Lake Superior and Lake "
         "St.Claire\n\n ");
  printf("This list is NOT in agreement with the answer in question 2, as the order of the list is not same\n\n ");

  printf("-------------------------------------------------\n");

		
		
//Question 7///////////////////////////////////////////////////////////

  printf("QUESTION 7\n\n");

  int x=0;
	int NumberOfDays=0;
  int NOD=1;
	for(i=2;i<SIZE;i=i+8)
  {
		sup[x]=array[i];
    if (sup[x]>=20)
    {
      NumberOfDays = NumberOfDays+NOD; 
    }
  }
  printf ("The total number of days you can swim in Lake Superior is %d\n", NumberOfDays);

  int y=0;
  int NumberOfDays1=0; 
  for(i=3;i<SIZE;i=i+8)
  {
		Mich[y]=array[i];
    if (Mich[y]>=20)
    {
      NumberOfDays1 = NumberOfDays1+NOD;
    }
	}
  printf ("The total number of days you can swim in Lake Michigan is %d\n", NumberOfDays1);

  int z=0;
  int NumberOfDays2=0;
	for(i=4;i<SIZE;i=i+8)
  {
		Huron[z]=array[i];
    if (Huron[z]>=20)
    {
      NumberOfDays2 = NumberOfDays2+NOD;
    }
	}
  printf ("The total number of days you can swim in Lake Huron is %d\n", NumberOfDays2);

  int w=0;
  int NumberOfDays3=0;
	for(i=5;i<SIZE;i=i+8)
  {
		Erie[w]=array[i];
    if (Erie[w]>=20)
    {
      NumberOfDays3 = NumberOfDays3+NOD;
    }
	}
  printf ("The total number of days you can swim in Lake Erie is %d\n", NumberOfDays3);

  int v=0;
	int NumberOfDays4=0;
	for(i=6;i<SIZE;i=i+8){
		Ont[v]=array[i];
    if (Ont[v]>=20)
    {
      NumberOfDays4 = NumberOfDays4+NOD;
    }
	}
  printf ("The total number of days you can swim in Lake Ontario is %d\n", NumberOfDays4);

  int u=0;
	int NumberOfDays5=0;
	for(i=7;i<SIZE;i=i+8){
		Clr[u]=array[i];
    if (Clr[u]>=20)
    {
      NumberOfDays5 = NumberOfDays5+NOD;
    }
	}
  printf ("The total number of days you can swim in Lake St.Clair is %d\n", NumberOfDays5);

  printf("---------------------------------------------------------------------\n");

		
		
//Question 8///////////////////////////////////////////////////////////
  printf("QUESTION 8\n\n");

  int t=0;
	int NumberOfDays6=0;
	for(i=2;i<SIZE;i=i+8)
  {
		sup[t]=array[i];
    if (sup[x]<=0)
    {
      NumberOfDays6 = NumberOfDays6+NOD; 
    }
  }
  printf ("Lake Superior is frozen for %d days\n", NumberOfDays6);

  int s=0;
  int NumberOfDays7=0; 
  for(i=3;i<SIZE;i=i+8)
  {
		Mich[s]=array[i];
    if (Mich[y]<=0)
    {
      NumberOfDays7 = NumberOfDays7+NOD;
    }
	}
  printf ("Lake Michigan is frozen for %d days\n", NumberOfDays7);

  int r=0;
  int NumberOfDays8=0;
	for(i=4;i<SIZE;i=i+8)
  {
		Huron[r]=array[i];
    if (Huron[r]<=0)
    {
      NumberOfDays8 = NumberOfDays8+NOD;
    }
	}
  printf ("Lake Huron is frozen for %d days\n", NumberOfDays8);

  int q=0;
  int NumberOfDays9=0;
	for(i=5;i<SIZE;i=i+8)
  {
		Erie[q]=array[i];
    if (Erie[q]<=0)
    {
      NumberOfDays9 = NumberOfDays9+NOD;
    }
	}
  printf ("Lake Erie is frozen for %d days\n", NumberOfDays9);

  int o=0;
	int NumberOfDays10=0;
	for(i=6;i<SIZE;i=i+8){
		Ont[o]=array[i];
    if (Ont[o]<=0)
    {
      NumberOfDays10 = NumberOfDays10+NOD;
    }
	}
  printf ("Lake Ontario is frozen for %d days\n", NumberOfDays10);

  int n=0;
	int NumberOfDays11=0;
	for(i=7;i<SIZE;i=i+8){
		Clr[n]=array[i];
    if (Clr[n]<=0)
    {
      NumberOfDays11 = NumberOfDays11+NOD;
    }
	}
  printf ("Lake St.Clair is frozen for %d days\n", NumberOfDays11);

  int NumberOfDays12 = NumberOfDays6+NumberOfDays7+NumberOfDays8+NumberOfDays9+NumberOfDays10+NumberOfDays11;
  printf("All the lakes are frozen for %d days\n", NumberOfDays12);

  printf("---------------------------------------------------------------------\n");

		
		
//Question 9///////////////////////////////////////////////////////////
  printf("QUESTION 9\n\n");
  int data1f;
  FILE *data1;
  data1 = fopen("TERM2019.txt", "r");
  int I = 0;

  while (data1f != EOF) {

    data1f = fscanf(data1, " %lf", &array[I]);
    I += 1;
  }

  int A = 0;
  double Count1 = 0;
  for (I = 2; I < SIZE; I = I + 8) {
    sup[A] = array[I];
    Count1 += sup[A];
    A += 1;
  }

  int B = 0;
  double Count2 = 0;
  for (I = 3; I < SIZE; I = I + 8) {
    Mich[B] = array[I];
    Count2 += Mich[B];
    B += 1;
  }

  int C = 0;
  double Count3 = 0;
  for (I = 4; I < SIZE; I = I + 8) {
    Huron[C] = array[I];
    Count3 += Huron[C];
    C += 1;
  }

  int D = 0;
  double Count4 = 0;
  for (I = 5; I < SIZE; I = I + 8) {
    Erie[D] = array[I];
    Count4 += Erie[D];
    D += 1;
  }

  int E = 0;
  double Count5 = 0;
  for (I = 6; I < SIZE; I = I + 8) {
    Ont[E] = array[I];
    Count5 += Ont[E];
    E += 1;
  }

  int F = 0;
  double Count6 = 0;
  for (I = 7; I < SIZE; I = I + 8) {
    Clr[F] = array[I];
    Count6 += Clr[F];
    F += 1;
  }

  double TA;
  TA = ((Count1 / 365) + (Count2 / 365) + (Count3 / 365) +
                  (Count4 / 365) + (Count5 / 365) + (Count6 / 365)) /
                 6;
  

  printf(" LAKE                   2019          2020\n");
  printf("-------------------------------------------\n");
  printf("Lake Superior           %.2lf         %.2lf\n", Count1 / 365,
         count1 / 366);
  printf("Lake Michigan           %.2lf         %.2lf\n", Count2 / 365,
         count2 / 366);
  printf("Lake Huron              %.2lf         %.2lf\n", Count3 / 365,
         count3 / 366);
  printf("Lake Erie               %.2lf        %.2lf\n", Count4 / 365, count4 / 366);
  printf("Lake Ontario            %.2lf         %.2lf\n", Count5 / 365,
         count4 / 366);
  printf("Lake St.Clair           %.2lf        %.2lf\n", Count6 / 365, count6 / 366);
  printf("Average of all Lakes    %.2lf         %.2lf\n", TA, TotalAverage);
  return 0;
}
