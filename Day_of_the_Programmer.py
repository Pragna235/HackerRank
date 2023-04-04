year=int(input())
if(year>=1700 and year<=1917):
    if(year%4==0):
        print("12.09.",year,sep="")
    else:
        print("13.09.",year,sep="")
elif(year==1918):
    print("26.09.",year,sep="")
elif(year>=1919 and year<=2700):
    if((year%4==0 and year%100!=0) or (year%400)==0):
        print("12.09.",year,sep="")
    else:
        print("13.09.",year,sep="")


