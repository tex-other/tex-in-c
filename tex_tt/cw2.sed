#s,"\\",tobar('\\\\'),g
#s,"'",tobar(''''),g
s,\<strprotector\>,S,g
s,tobar("'"),'\\'',g
s,tobar("\\""),'"',g
s,tobar("\\\\"),'\\\\',g
s,tobar("\(.\)"),'\1',g
