# cook your dish here

def Expenses(Expense_Count ,Income):
    Income = 2**Income

    for Cnt in range(1 ,Expense_Count+1 ,1):
        Income = int(Income/2)
    
    return Income

def main():
    print("Enter Number of test cases")
    Test = int(input())

    Ret = list()

    for Cnt in range(1 ,Test+1 ,1):
        Values = input().split()
        Ret.append(Expenses(int(Values[0]) ,int(Values[1])))
    
    for Cnt in range(0 ,len(Ret) ,1):
        print(Ret[Cnt])
        

main()
