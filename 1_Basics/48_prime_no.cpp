// check for prime number


#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"n = ";
cin>>n;

int fact_count = 0;

for (int i = 1; i <= n; i++)
{
    if(n%i == 0){
        fact_count++;
    }
    }
    cout<<"No. of Factors = "<<fact_count<<endl;;
    if(fact_count<=2){
        cout<<n<<" is prime"<<endl;
    }
    else{
        cout<<n<<" is not prime"<<endl;
    }

             
return 0;
}

// Continue from lec 5 46.18
