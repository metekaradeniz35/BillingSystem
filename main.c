#include <stdio.h>
#include <stdlib.h>

int Grocery(int x, int y, int z, int t, int s){
	int xSum = x*100;
	int ySum = y*15;
	int zSum = z*50;
	int tSum = y*150;
	int sSum = s*160;
	int sum = xSum+ySum+zSum+tSum+sSum;
	printf("Grocery Total Price: %d\n\n",sum);
	return sum;
	
}

int Beverages(int x, int y, int z, int t){
	int xSum = x*100;
	int ySum = y*15;
	int zSum = z*50;
	int tSum = y*150;
	int sum = xSum+ySum+zSum+tSum;
	printf("Beverages Total Price: %d\n\n",sum);
	return sum;
}

int Cosmetics(int x, int y, int z, int t){
	int xSum = x*100;
	int ySum = y*15;
	int zSum = z*50;
	int tSum = y*150;
	int sum = xSum+ySum+zSum+tSum;
	printf("Cosmetics Total Price: %d\n\n",sum);
	return sum;
}
int main() {
	
	char name[50];
	int id,number;
	int sugar,tea,coffe,rice,wheat;	
	int bodyS,hairC,bodySp,hairS;
	int pepsi,sprite,coke,fanta,total;
	printf("--------------------------------\n");
	printf("Billing System\n");
	printf("--------------------------------\n");
	printf("Customer Details\n");
	printf("Customer Name: ");
	scanf("%s",&name);
	printf("Customer ID: ");
	scanf("%d",&id);
	printf("--------------------------------\n");
	printf("GROCERIES\n\n");
	printf("Sugar ( $ 100) : ");
	scanf("%d",&sugar);
	printf("Tea ( $ 15) : ");
	scanf("%d",&tea);
	printf("Coffe ( $ 50) : ");
	scanf("%d",&coffe);
	printf("Rice ( $ 150) : ");
	scanf("%d",&rice);
	printf("Wheat ( $ 160) : ");
	scanf("%d",&wheat);
	printf("\n--------------------------------\n");
	printf("COSMETICS\n");
	printf("Body Soap ( $ 100) : ");
	scanf("%d",&bodyS);
	printf("Hair Cream ( $ 15) : ");
	scanf("%d",&hairC);
	printf("Body Spray ( $ 50) : ");
	scanf("%d",&bodySp);
	printf("Hair Spray ( $ 150) : ");
	scanf("%d",&hairS);
	printf("\n--------------------------------\n");
	printf("BEVERAGES\n");
	printf("Coke ( $ 100) : ");
	scanf("%d",&coke);
	printf("Fanta ( $ 15) : ");
	scanf("%d",&fanta);
	printf("Sprite ( $ 50) : ");
	scanf("%d",&sprite);
	printf("Pepsi ( $ 150) : ");
	scanf("%d",&pepsi);
	
	
	int sSug = sugar*100;
	int sTea = tea*15;
	int sRic = rice*50;
	int sCof = coffe*150;
	int sWhe = wheat*160;
	int sBso = bodyS*100;
	int sHcr = hairC*15;
	int sBsp = bodySp*50;
	int sHsp = hairS*150;
	int sCok = coke*100;
	int sFan = fanta*15;
	int sSpr = sprite*50;
	int sPep = pepsi*150;
	
	
	
	
	
	printf("Product Name                                                    Quantity                               Price\n\n");
	printf("Sugar                                                             %d                                     %d\n",sugar,sSug);
	printf("Tea                                                               %d                                     %d\n",tea,sTea);
	printf("Coffe                                                             %d                                     %d\n",coffe,sCof);
	printf("Rice                                                              %d                                     %d\n",rice,sRic);
	printf("Wheat                                                             %d                                     %d\n",wheat,sWhe);
	printf("Body Soap                                                         %d                                     %d\n",bodyS,sBso);
	printf("Hair Cream                                                        %d                                     %d\n",hairC,sHcr);
	printf("Body Spray                                                        %d                                     %d\n",bodySp,sBsp);
	printf("HairSpray                                                         %d                                     %d\n",hairS,sHsp);
	printf("Coke                                                              %d                                     %d\n",coke,sCok);
	printf("Fanta                                                             %d                                     %d\n",fanta,sFan);
	printf("Sprite                                                            %d                                     %d\n",sprite,sSpr);
	printf("Pepsi                                                             %d                                     %d\n",pepsi,sPep);
	
	
	Grocery(sugar,tea,coffe,rice,wheat);
	printf("\n");
	Cosmetics(bodyS,hairC,bodySp,hairS);
	printf("\n");
	Beverages(coke,fanta,sprite,pepsi);
	printf("\n");
	total = Grocery(sugar,tea,coffe,rice,wheat)+Cosmetics(bodyS,hairC,bodySp,hairS)+Beverages(coke,fanta,sprite,pepsi);
	printf("Total Price: %d",total);
	printf("\n--------------------------------\n");
	
	
	
}
