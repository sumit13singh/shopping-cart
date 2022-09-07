#include<iostream>
using namespace std;
int main()
{
    char* product[10]={"Leather_Wallet","Umbrella","Cigrate","Honey"};
    int price[10]={1100,900,200,100};
    int gst[10]={18,12,28,0};
    int qnty[10]={1,2,3,4};
    int sum=0;
    int store;
    for(int i=0;i<10;i++)
    {
        if(price[i]>500)
        {
           price[i]=price[i]-(price[i]*(5/100));
        }
        store=price[i]*qnty[i];
        sum=sum+store;
    }
    cout<<"Total amount paid to the shopkeeper: "<<sum<<endl;


    for(int i=0;i<10;i++)
	{
		if(gst[i]>gst[i+1])
        {
            cout<<"Product for which we paid maximum  GST: "<<product[2]<<endl;
        }
	}
}
