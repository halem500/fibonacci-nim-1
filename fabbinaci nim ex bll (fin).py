print ('wlcome to fibbonacci nim')
while True:
 a=input('player 1 enter your name.. \n')
 b=input('player 2 enter your name.. \n')
 tn=int(input('enter a starting num: \n'))
 x=0
 y=0
 while True :
     if (tn>1):
         break
     else :
         print ("Error .. please choose a valid number ")        
         tn=int(input('enter the starting num: \n'))
 print ("total : " ,tn)
 while True:
          x=int(input(a+' choose your num. \n'))
          while( x<0 or x==0 or (tn-x)<0 or (x>(2*y) and (y!=0 or x==tn)) ):
                x=int(input('Error: '+a+' choose your num. \n'))
          tn-=x
          print ("total : " ,tn)
          if tn==0:
             print ('winner: '+a)
             break
          y=int(input(b+' choose your num. \n'))
          while y<0 or y==0 or (tn-y)<0 or y>(2*x):
             y=int(input('Error: '+b+' choose your num. \n'))
          tn-=y
          print ("total : " ,tn)
          if tn==0:
             print ('winner: '+b)
             break
 print ('wanna play again??')
 z=int(input('1-sure \n2-maybe later \n'))
 if z==1:
    print ("let's go :D")
 else:
    print('ok see you later!!')
    break
