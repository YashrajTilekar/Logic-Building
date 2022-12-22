def Hello(Function_Name):
    print("Inside Hello")
    Function_Name()

def Demo():
        print("Inside Demo")

def Fun():
    print("Inside Fun")

Hello(Demo)
Hello(Fun)
#Hello(11)    #ERROR
