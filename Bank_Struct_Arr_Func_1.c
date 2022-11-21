#include<stdio.h>
struct bank{
    char firstname[50];
    char lastname[50];
    char acc_no[50];
    int bal;
};
void func1(struct bank cust[],int n){
    printf("\nThe Customers whose balance is less than 100 (are/is) : \n");
    printf("--------------------------------------\n");
    for(int i=0;i<n;i++){
        if(cust[i].bal<100){
            printf("Account Number : %s\n",cust[i].acc_no);
            printf("Customer Name : %s %s\n",cust[i].firstname,cust[i].lastname);
            printf("Account Balance : %d\n",cust[i].bal);
            printf("--------------------------------------\n");
        }
    }
}
int main(){
    int t=200,n;
    printf("Enter the number of customers : ");
    scanf("%d",&n);
    printf("--------------------------------------\n");
    struct bank cust[n];
    
    if(n<t){
        printf("Enter the Customer details...\n");
        printf("--------------------------------------\n");
        for(int i=0;i<n;i++){
            printf("Enter Last Name of Customer[%d] : ",i+1);
            scanf("%s",cust[i].lastname);
            
            printf("Enter First Name of Customer[%d] : ",i+1);
            scanf("%s",cust[i].firstname);
            
            printf("Enter Account no of Customer[%d] : ",i+1);
            scanf("%s",cust[i].acc_no);
            
            printf("Enter Balance of Customer[%d] : ",i+1);
            scanf("%d",&cust[i].bal);
            printf("--------------------------------------\n");
        }
        printf("\nCustomer details are...\n");
        printf("--------------------------------------\n");
        for(int i=0;i<n;i++){
            printf("Customer Name : %s %s\n",cust[i].firstname,cust[i].lastname);
            printf("Account Number : %s\n",cust[i].acc_no);
            printf("Account Balance : %d\n",cust[i].bal);
            printf("--------------------------------------\n");
        }
        func1(cust,n);
    }
    else{
        printf("\nNumber of Customers exceed 200.");
    }
    
    /**/
    //Write a function to print the Account number and name of each customer with balance below Rs. 100.
    
    /*printf("\nThe Customers whose balance is less than 100 (are/is) : \n");
    printf("--------------------------------------\n");
    for(int i=0;i<n;i++){
        if(cust[i].bal<100){
            printf("Account Number : %s\n",cust[i].acc_no);
            printf("Customer Name : %s %s\n",cust[i].firstname,cust[i].lastname);
            printf("Account Balance : %d\n",cust[i].bal);
            printf("--------------------------------------\n");
        }
    }*/
}
