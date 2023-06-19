#include "ME-bigInt.hpp"
#include <iostream>
using namespace std;

long binpow(long a,long b,long m) ;
BigInt binpow(BigInt a,long b,long m);
BigInt binpow(BigInt a,long b,BigInt m);

int main(){
    string base;
    long exponential;
    long modular;
    cin>>base>>exponential>>modular;
    if(!cin.fail() ){
    try{
    long base_4b;
    base_4b=stol(base);
    cout<<"number you entered can easily be stored in <long> type, custom typed do not neeeded\n";
    cout<<"result is "<<binpow(base_4b,exponential,modular);
    }
    catch (std::invalid_argument const& ex)
    {
        cerr << "std::invalid_argument::what(): " << ex.what() << '\n';
    }
    catch (std::out_of_range const& ex)
    {
    BigInt modular_ct(modular);
    BigInt base_custom_typed(base);
    BigInt result=binpow(base_custom_typed,exponential,modular_ct);
    
    cerr << "custom type must be used\n";
    cout<<"result is "<<result<<"\n";
    cout<<"hex : "<<result.getHexTypedValue(result);
    }
    } else {
    cerr<<"input corrupted";
    }

    cout<<"\n";
    return 0;
}