#ifndef ME_ARITHMETIC_HPP_
#define ME_ARITHMETIC_HPP_
#pragma once 
#include <string>
#include <iostream>

class BigInt {
	std::string value; // значение числа
    std::string hexTyped;
	bool isNeg; // флаг отрицательности
	static BigInt karatsuba_mul(const BigInt &a, const BigInt &b); // умножение методом Карацубы
public:
	BigInt(); // конструктор умолчания (число равно нулю)
	BigInt(long x); // конструктор преобразования из обычного целого числа
	BigInt(const std::string &value); // конструктор преобразования из строки
	BigInt(const BigInt& bigInt); // конструктор копирования

	const std::string &getValue() const; // получение содержимого строки (строка модуля числа)
    std::string getHexTypedValue(BigInt& bigInt) const;
	void HexVersion();
	const bool getIsNeg() const; // получение флага отрицательности числа
	void setIsNeg(bool isNeg); // установка флага отрицательности числа

	int sign() const; // получение знака числа


	// операции сравнения
	const bool operator==(const BigInt &bigInt) const;
	const bool operator!=(const BigInt &bigInt) const;

	const bool operator<(const BigInt &bigInt) const;
	const bool operator>(const BigInt &bigInt) const;
	const bool operator<=(const BigInt &bigInt) const;
	const bool operator>=(const BigInt &bigInt) const;

	// операция присваивания
	BigInt &operator=(const BigInt &bigInt);

	// унарные плюс и минус
	BigInt operator+() const &&;
	BigInt operator-() const &&;

	// арифметические операции
	BigInt operator+(const BigInt &bigInt) const;
	BigInt operator-(const BigInt &bigInt) const;
	BigInt operator*(const BigInt &bigInt) const;
	BigInt operator/(const BigInt &bigInt) const;
	BigInt operator%(const BigInt &bigInt) const;
	BigInt operator<<(size_t n) const;
	BigInt operator>>(size_t n) const;
	BigInt operator&(size_t n) const;	
	// краткая форма операций
	BigInt &operator+=(const BigInt &bigInt);
	BigInt &operator-=(const BigInt &bigInt);
	BigInt &operator*=(const BigInt &bigInt);
	BigInt &operator/=(const BigInt &bigInt);
	BigInt &operator%=(const BigInt &bigInt);
	BigInt &operator<<=(size_t n);
	BigInt &operator>>=(size_t n);



	friend std::ostream &operator<<(std::ostream &stream, const BigInt &bigInt); // вывод числа в выходной поток
	friend std::istream &operator>>(std::istream &stream, BigInt &bigInt); // ввод числа из входного потока
};








#endif //END OF ME_ARITHMETIC_HPP_ DEFENITION