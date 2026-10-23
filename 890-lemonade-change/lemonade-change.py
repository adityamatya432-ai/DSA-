class Solution:
    def lemonadeChange(self, bills: list[int]) -> bool:
        
        a = 0
        b = 0
        c = 0

        net = 0
        for x in bills:
            if x==5:
                a+=5
                net+=5
            elif x == 10 :
                if a>=5:
                    b+=10
                    a-=5
                    net+=5
                else:
                    return False

            elif x == 20:
                c+=20
                if b>=10 and a>=5:
                    b-=10
                    a-=5
                elif a>=15:
                    a-=15
                else:
                    return False

        return True
