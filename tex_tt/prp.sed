:ppp
/@d/{s,@d.*,,
:dalej
n
/^[^@]/{s,.*,,
b dalej
}
/^@[:.]/{s,.*,,
b dalej
}
b ppp
}

