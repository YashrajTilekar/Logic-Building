def main():
    try:
        print("Enter First NUmber")
        Value1 = int(input())

        print("Enter Second Number")
        Value2 = int(input())

    
        Div = Value1 / Value2
        print("Divison is : ",Div)

    except ZeroDivisionError:
        print("Inside ZeroDivision Error")

    except ValueError:
        print("Inside ValueError")
    
    except Exception:
        print("Inside LastExcept block")

    finally:
        print("Inside Finally Block")


if(__name__ == "__main__"):
    main()
   