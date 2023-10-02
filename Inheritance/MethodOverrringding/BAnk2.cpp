#include <iostream>
#include<math.h>
class Bank {
protected:
    int loanAmount;
    int intRate;
    int duration;

public:
    void setLoanAmount(int loanAmount, int intRate, int duration) {
        this->loanAmount = loanAmount;
        this->intRate = intRate;
        this->duration = duration;
    }

    virtual int getEmi() {
        return 0; // Default implementation in the Bank class (no logic).
    }
};

class HomeLoan : public Bank {
public:
    int getEmi() override {
        // Calculate monthly EMI for a home loan.
        float monthlyInterestRate = static_cast<float>(intRate) / 12 / 100;
        int emi = (loanAmount * monthlyInterestRate) / (1 - pow(1 + monthlyInterestRate, -duration));
        return emi;
    }
};

class CarLoan : public Bank {
public:
    int getEmi() override {
        // Calculate monthly EMI for a car loan.
        float monthlyInterestRate = static_cast<float>(intRate) / 12 / 100;
        int emi = (loanAmount * monthlyInterestRate) / (1 - pow(1 + monthlyInterestRate, -duration));
        int month=emi/(duration);
        return emi ;
    }
};

int main() {
    HomeLoan homeLoan;
    homeLoan.setLoanAmount(200000, 8, 96);

    CarLoan carLoan;
    carLoan.setLoanAmount(100000, 8, 96);

    std::cout << "Home Loan EMI: " << homeLoan.getEmi() << std::endl;
    std::cout << "Car Loan EMI: " << carLoan.getEmi() << std::endl;

    return 0;
}