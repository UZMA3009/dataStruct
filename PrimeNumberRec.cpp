#include <iostream>
using namespace std;

bool Prime(int n, int i = 2)
{
  
   
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
 
    
    return Prime(n, i + 1);
}
 

int main()
{
    int n ;
    cout<<"Enter number:"<<endl;
    cin>>n;
    if (Prime(n))
        cout << "Yes its prime";
    else
        cout << "No its not prime";
 
    return 0;
}
