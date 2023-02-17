class Solution:
    def RemoveAllOccurances(self ,sstr ,ch):
        sChar = set()

        for i in range(0 ,len(sstr) ,1):
            sChar.add(sstr[i])
        
        #print(sChar)

        if ch in sChar:
            sChar.remove(ch)

        #print(sChar)
        sstr = str(sChar)

        return sstr
    

    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        Result = 0
        sobj = Solution()

        for Cnt in range(0 ,len(words) ,1):
            sTemp = ""
            for i in range(0 ,len(allowed) ,1):
                sTemp = sobj.RemoveAllOccurances(words[Cnt] ,allowed[i])
            
            print(sTemp)
            
            if(len(sTemp) == 0):
                Result = Result + 1

        return Result


def main():
    sobj = Solution()
    Ret = sobj.RemoveAllOccurances("apple" ,"p")
    print(Ret)

if(__name__ == "__main__"):
    main()