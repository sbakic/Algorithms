#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BigNumber{
private:
  vector<char> _digits;
  bool _sign; // true +, false -
  void deleteLeadingZeros();
public:
  BigNumber();
  BigNumber(const string);

  void fromString(string);
  string toString() const;

  BigNumber sum(const BigNumber&) const;
};

BigNumber::BigNumber(){
}

BigNumber::BigNumber(const string number){
  this->fromString(number);
}

void BigNumber::deleteLeadingZeros(){
  int numberOfDigits = this->_digits.size();
  while (numberOfDigits > 1 && this->_digits[numberOfDigits - 1] == 0)
    numberOfDigits--;
  this->_digits.resize(numberOfDigits);
  if (this->_digits.size() == 1 && this->_digits[0] == 0)
    this->_sign = true;
}

void BigNumber::fromString(string number){
  this->_digits.clear();
  this->_sign = true;

  int start = 0;
  int end = number.length() - 1;

  if (number[0] == '-'){
    this->_sign = false;
    start++;
  }
  for (int i = end; i >= start; i--){
    this->_digits.push_back(number[i] - '0');
  }
}

string BigNumber::toString() const{
  string s;
  if (!this->_sign) s += '-'; // Add minus if needed
    int i = this->_digits.size();
    while (i > 0){
      i--;
      s += (char)(this->_digits[i] + '0');
    }
  return s;
}

BigNumber BigNumber::sum(const BigNumber& number) const{
  BigNumber result;
  if (this->_sign == number._sign){
    result._sign = this->_sign;

    int aSize = this->_digits.size();
    int bSize = number._digits.size();
    int size = max(aSize, bSize);

    result._digits.resize(size);

    char transfer = 0;
    char sumD;
    for (int i = 0; i < size; i++){
      sumD = ( (i < aSize) ? this->_digits[i] : 0 ) + ( (i < bSize) ? number._digits[i] : 0 ) + transfer;
      result._digits[i] = sumD % 10;
      transfer = sumD / 10;
    }

    if (transfer > 0)
      result._digits.push_back(transfer);

    result._sign = this->_sign;
    }
    else{
      result._sign = true;

      const BigNumber *first, *second;
      if (this->_sign){
        first = this;
        second = &number;
      }
      else{
        first = &number;
        second = this;
      }

      int aSize = first->_digits.size();
      int bSize = second->_digits.size();
      int size = max(aSize, bSize);

      result._digits.resize(size);

      char transfer = 0;
      char divD;

      for (int i = 0; i < size; i++){
        divD = ( (i < aSize) ? first->_digits[i] : 0 ) - ( (i < bSize) ? second->_digits[i] : 0 ) + transfer;
        divD += 10;
        result._digits[i] = divD % 10;
        transfer = divD / 10 - 1;
      }

      if (transfer < 0){

        transfer = 0;

        for (int i = 0; i < size; i++){
          divD = 0 - result._digits[i] + transfer;
          divD += 10;
          result._digits[i] = divD % 10;
          transfer = divD / 10 - 1;
        }

          result._sign = false;
        }
    }
  result.deleteLeadingZeros();

  return result;
}

int main(){
  string a, b;
  cin >> a >> b;
  BigNumber numberA(a);
	BigNumber numberB(b);
  cout << numberA.sum(numberB).toString();
  return 0;
}
