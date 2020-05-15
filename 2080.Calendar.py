inputline = input()
mm = [0,31,28,31,30,31,30,31,31,30,31,30,31]
weekday = ["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"]
while inputline != "-1":
    days = int(inputline)
    y = 2000
    m = 1
    days += 1
    #求星期
    xq = (5 + days % 7) % 7

    #求年份
    y_hat = 0
    while(days >= 365):
        if(days - 365 == 0):
            break
        if (y%4 == 0 and y%100 !=0 ) or (y%400 == 0):
            if days - 366 == 0:
                break
            days -= 1
        days -= 365
        y += 1

    # 求月份
    if (y%4 == 0 and y%100 !=0 ) or (y%400 == 0):    
        mm[2]+=1
    for i in range(1,12):
        if days-mm[i] <= 0:
            break
        days -= mm[i]

    print(str(y)+'-'+str(i)+'-'+str(days)+' '+weekday[xq]+'\n')
    
    inputline = input()