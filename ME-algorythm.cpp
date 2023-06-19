#include "ME-bigInt.hpp"



long binpow(long a,long b,long m) {
    a %= m;
    long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

BigInt binpow(BigInt a,long b,long m) {
    a %= m;
    BigInt res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
BigInt binpow(BigInt a,long b,BigInt m) {
    a %= m;
    BigInt res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
/*
BigInt binpow(BigInt a,BigInt b, int m){
    a %= m;
    BigInt res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
BigInt binpow(BigInt a,BigInt b, BigInt m){
    a %= m;
    BigInt res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
} */   

