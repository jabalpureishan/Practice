def input():
    tests = int(input(""))
    while(tests>0):
        tests -= 1
        number = int(input("enter a number "))
        string  = input("enter a string)
        X,Y = map(int, input("enter two numbers separated by a whitespace").split())
        Array = list(map(int, input().split()))