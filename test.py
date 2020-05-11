inputLine = input()
while inputLine!="0 0" and inputLine!=" 0 0":
    listLine = inputLine.split(' ')  # 以空格划分就是序列的形式了
    if listLine[0]=='':
        listLine=listLine[1:]
    listLine = [int(e) for e in listLine]  # 将序列里的数由字符串变为int类型
    num=listLine[0]
    r=listLine[1]
    res=[]
    if num==0:
        print("0")
    else:
        shang=num//r
        yushu=num%r
        if yushu<0:
            shang+=1
            yushu=num-shang*r
        num=shang
        if yushu>=10:
            cha=yushu-9
            yushu = 64 + cha
            yushu = chr(yushu)
        res.insert(0,yushu)
        while(shang not in range(abs(r)) ):
            shang = num // r
            yushu = num % r
            if yushu < 0:
                shang += 1
                yushu = num - shang * r
            num = shang
            if yushu >= 10:
                cha = yushu - 9
                yushu = 64 + cha
                yushu=chr(yushu)
            res.insert(0, yushu)
        if shang==0:
            pass
        else:
            if shang >= 10:
                cha = shang - 9
                shang = 64 + cha
                shang = chr(shang)
            res.insert(0,shang)
        for i in res[:-1]:
            print(i,end="")
        print(res[-1])
    inputLine = input()