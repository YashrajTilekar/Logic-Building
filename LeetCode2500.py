class Solution(object):
    def deleteGreatestValue(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        TotalSum = 0
        RowArr = list()

        while(len(grid[0]) != 0):
            for i in range(0 ,len(grid) ,1):
                RowMax = grid[i][0]
                for j in range(0 ,len(grid[0]) ,1):
                    #print(grid[i][j] ,end= " ")
                    if(grid[i][j] > RowMax):
                        RowMax = grid[i][j]

                RowArr.append(RowMax)
                #print(RowMax)
            
            TotalSum = TotalSum + max(RowArr)
            
            for i in range(0 ,len(grid)):
                if RowArr[i] in grid[i]:
                    grid[i].remove(RowArr[i])

            RowArr.clear()

        return TotalSum

def main():
    Data = [[1,2,4] ,[3,3,1]]
    sobj = Solution()

    """print(Data)
    print("Length = " ,len(Data))

    Data[0].remove(1)
    Data[0].remove(2)
    Data[0].remove(4)

    print(Data)
    print("Length = " ,len(Data[0])) """

    Ret = sobj.deleteGreatestValue(Data)
    print(Ret)

if(__name__ == "__main__"):
    main()
