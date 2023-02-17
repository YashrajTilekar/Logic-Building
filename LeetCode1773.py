class Solution(object):
    def countMatches(self, items, ruleKey, ruleValue):
        """
        :type items: List[List[str]]
        :type ruleKey: str
        :type ruleValue: str
        :rtype: int
        """

        Result = 0

        for i in range(0 ,len(items) ,1):
            if(ruleKey == "type") and (items[i][0] == ruleValue):
                Result = Result+1
            elif(ruleKey == "color") and (items[i][1] == ruleValue):
                Result = Result+1
            elif(ruleKey == "name")and (items[i][2] == ruleValue):
                Result = Result+1
        
        return Result