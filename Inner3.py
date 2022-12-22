def Add(No1 , No2):
    return No1 + No2

def Sub(No1 , No2):
    return No1 - No2

def Calculator(Target , No1 , No2):
    return Target(No1 , No2)

Ret = Calculator(Target = Add, No1= 10 ,No2=11)
print("Addition is : ",Ret)

Ret = Calculator(Target = Sub, No1= 10 ,No2= 11)
print("Substraction is : ",Ret)