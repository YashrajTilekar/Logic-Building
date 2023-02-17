
def StringVaid(str):
    for Cnt in range(0 , len(str)  , 2):
        if(str[Cnt] == '('  and str[Cnt+1] == ')'):
            print("Inside ()")
            continue
        elif(str[Cnt] == '['  and str[Cnt+1] == ']'):
            print("Inside []")
            continue
        elif(str[Cnt] == '{'  and str[Cnt+1] == '}'):
            print("Inside {}")
            continue
        else:
            break

    print(Cnt)
    if(Cnt == len(str)):
        return True
    else:
        return False

print("Enter String")
Str1 = input()
Ret = StringVaid(Str1)
print(Ret)