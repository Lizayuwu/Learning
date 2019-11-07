import sys

alphabet = {
  "a" : ("   aaaa   ",  " aa    aa ",  " aa    aa ",  " aaaaaaaa ",  " aa    aa ") 
, "b" : (" bbbbbbb  ",  " bb     b ",  " bbbbbbb  ",  " bb     b ",  " bbbbbbb  ") 
, "c" : ("  cccccc  ",  " cc       ",  " cc       ",  " cc       ",  "  cccccc  ") 
, "d" : (" dddddd   ",  " dd    dd ",  " dd    dd ",  " dd    dd ",  " dddddd   ") 
, "e" : (" eeeeeeee ",  " ee       ",  " eeeeeeee ",  " ee       ",  " eeeeeeee ") 
, "f" : (" ffffffff ",  " ff       ",  " ffffff   ",  " ff       ",  " ff       ") 
, "g" : ("  gggggg  ",  " g        ",  " g   gggg ",  " g      g ",  "  gggggg  ") 
, "h" : (" hh    hh ",  " hh    hh ",  " hhhhhhhh ",  " hh    hh ",  " hh    hh ") 
, "i" : ("    iii   ",  "          ",  "    iii   ",  "    iii   ",  "    iii   ") 
, "j" : ("      jj  ",  "      jj  ",  "      jj  ",  "  jj  jj  ",  "    jj    ") 
, "k" : (" kk   kk  ",  " kk kk    ",  " kkk      ",  " kk kk    ",  " kk   kk  ") 
, "l" : (" ll       ",  " ll       ",  " ll       ",  " ll       ",  " llllllll ") 
, "m" : ("   mm mm  ",  " m  mm  m ",  " m  mm  m ",  " m  mm  m ",  " m  mm  m ") 
, "n" : (" nn     n ",  " n n    n ",  " n  nn  n ",  " n    n n ",  " n     nn ") 
, "o" : ("   oooo   ",  " oo    oo ",  " oo    oo ",  " oo    oo ",  "   oooo   ") 
, "p" : (" pppppp   ",  " pp    p  ",  " pp    p  ",  " pppppp   ",  " pp       ") 
, "q" : ("   qqqq   ",  " qq    qq ",  " qq  q qq ",  " qq    qq ",  "   qqqq q ") 
, "r" : (" rrrrrr   ",  " rr    r  ",  " rrrrrr   ",  " rr  r    ",  " rr   r   ") 
, "s" : ("   sssss  ",  "  s       ",  "   sss    ",  "      ss  ",  "  sssss   ") 
, "t" : (" tttttttt ",  "    tt    ",  "    tt    ",  "    tt    ",  "    tt    ") 
, "u" : (" uu    uu ",  " uu    uu ",  " uu    uu ",  " uu    uu ",  "   uuuu   ") 
, "v" : (" v     v  ",  "  v   v   ",  "  v   v   ",  "   v v    ",  "    v     ") 
, "w" : (" w      w ",  " w      w ",  " w  ww  w ",  " w  ww  w ",  "  ww  ww  ") 
, "x" : ("  x    x  ",  "   x  x   ",  "    xx    ",  "   x  x   ",  "  x    x  ") 
, "y" : ("  y    y  ",  "   y  y   ",  "    y     ",  "  yy      ",  " y        ") 
, "z" : (" zzzzzzzz ",  "       zz ",  "     zz   ",  "  zzz     ",  " zzzzzzzz ")
, " " : ("          ",  "          ",  "          ",  "          ",  "          ")
, "0" : ("  000000  ",  " 0 0    0 ",  " 0  00  0 ",  " 0    0 0 ",  "  000000  ")  
, "1" : ("   111    ",  "  1111    ",  "    11    ",  "    11    ",  "  111111  ")  
, "2" : ("  22222   ",  " 22    2  ",  "     22   ",  "   22     ",  " 2222222  ")  
, "3" : ("  333333  ",  " 3      3 ",  "      33  ",  " 3      3 ",  "  333333  ")  
, "4" : (" 44   44  ",  " 44   44  ",  " 4444444  ",  "      44  ",  "      44  ")  
, "5" : (" 55555555 ",  " 5        ",  " 5555555  ",  "        5 ",  " 5555555  ")  
, "6" : ("  666666  ",  " 6        ",  " 666666   ",  " 6     6  ",  "  66666   ")  
, "7" : (" 77777777 ",  "       7  ",  "     77   ",  "    7     ",  "   7      ")  
, "8" : ("  888888  ",  " 8      8 ",  "  888888  ",  " 8      8 ",  "  888888  ")  
, "9" : ("  999999  ",  " 9      9 ",  "  999999  ",  "        9 ",  "  999999  ")
}
# all letters ahre 5x10, the first and the last column being spacing


word = sys.argv[1]
i = 0
letters = 0
linebreak = 5
skip = False
phrase = [""]
for letter in word.lower():
    for line in alphabet.get(letter):
        phrase[i] += line
        i = (i + 1)
# print(phrase)
for test in phrase:
    print(test)
    
