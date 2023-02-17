
def frequencyOfNumericChars(str):
    count = 0
    Alphabets = {'0':0,'1':0 ,'2':0 ,'3':0 ,'4':0 ,'5':0 ,'6':0 ,'7':0 ,'8':0 ,'9':0   }

    for ch in str :
        if(ch == '0'):
            Alphabets[ch] = Alphabets[ch] + 1
        elif(ch == '1'):
            Alphabets[ch] = Alphabets[ch] + 1
        elif(ch == '2'):
            Alphabets[ch] = Alphabets[ch] + 1
        elif(ch == '3'):
            Alphabets[ch] = Alphabets[ch] + 1
        elif(ch == '4'):
            Alphabets[ch] = Alphabets[ch] + 1
        elif(ch == '5'):
            Alphabets[ch] = Alphabets[ch] + 1
        elif(ch == '6'):
            Alphabets[ch] = Alphabets[ch] + 1
        elif(ch == '7'):
            Alphabets[ch] = Alphabets[ch] + 1
        elif(ch == '8'):
            Alphabets[ch] = Alphabets[ch] + 1
        elif(ch == '9'):
            Alphabets[ch] = Alphabets[ch] + 1
        else:
            count = count + 1

    for X in Alphabets:
        if(Alphabets[X] > 0):
            print(X,"=",Alphabets[X],end=" ")
        
    print("Others =" ,count)

print("Enter String")
Str1 = input()
frequencyOfNumericChars(Str1)