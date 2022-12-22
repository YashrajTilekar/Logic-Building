class BookStore:
    NoOfBooks = 0

    def __init__(self , N , A):
        self.Name = N
        self.Author = A
        BookStore.NoOfBooks = BookStore.NoOfBooks + 1

    def Display(self):
        print("Name : " , self.Name)
        print("Author : ",self.Author)
        print("Number of books : ",BookStore.NoOfBooks)
    
        

def main():
    print("Enter the Name of Book")
    Value1 = input()

    print("Enter the Name of Author")
    Value2 = input()

    bobj1 = BookStore(Value1 , Value2)
    bobj1.Display()

    print("Enter the Name of Book")
    Value1 = input()

    print("Enter the Name of Author")
    Value2 = input()

    bobj2 = BookStore(Value1 , Value2)
    bobj2.Display()


if(__name__ == "__main__"):
    main()