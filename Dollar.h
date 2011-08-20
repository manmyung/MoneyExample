class Dollar {
 public:
 Dollar(int amount) : amount(amount) {}
  Dollar times(int multiplier) {return Dollar(amount * multiplier);}
  bool operator==(const Dollar &lhs) const {return lhs.amount == this->amount;}
  bool operator!=(const Dollar &lhs) const {return !(lhs == *this);}
 private:
  int amount;
};
