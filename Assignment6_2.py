class BankAccount:
    ROI = 10.5

    def __init__(self, N , A):
        self.Name = N
        self.Amount = A

    def Deposit(self , Money):
        self.Amount = self.Amount + Money
    
    def Withdraw(self , Money):
        self.Amount = self.Amount - Money
    
    def CalculateInterest(self):
        A = self.Amount * (1 + BankAccount.ROI)
        Interest = A - self.Amount

        return Interest

    def Display(self):
        print("Name of Account Holder : " , self.Name)
        print("Balance : ",self.Amount)

def main():
    print("Enter you Name")
    Value1 = input()

    print("Enter Initial Amount")
    Value2 = int(input())

    bobj1 = BankAccount(Value1 , Value2)
    bobj1.Display()

    print("Enter the Amount to Deposit")
    Value3 = int(input())
    bobj1.Deposit(Value3)

    print("Enter the Amount to Withdraw")
    Value3 = int(input())
    bobj1.Withdraw(Value3)
    bobj1.Display()



    print("Enter you Name")
    Value1 = input()

    print("Enter Initial Amount")
    Value2 = int(input())

    bobj2 = BankAccount(Value1 , Value2)
    bobj2.Display()

    print("Enter the Amount to Deposit")
    Value3 = int(input())
    bobj2.Deposit(Value3)

    print("Enter the Amount to Withdraw")
    Value3 = int(input())
    bobj2.Withdraw(Value3)
    bobj2.Display()


    print("Enter you Name")
    Value1 = input()

    print("Enter Initial Amount")
    Value2 = int(input())

    bobj3 = BankAccount(Value1 , Value2)
    bobj3.Display()

    print("Enter the Amount to Deposit")
    Value3 = int(input())
    bobj3.Deposit(Value3)

    print("Enter the Amount to Withdraw")
    Value3 = int(input())
    bobj3.Withdraw(Value3)
    bobj3.Display()



if(__name__ == "__main__"):
    main()