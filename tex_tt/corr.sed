#!/bin/sed -f
s/\*foo//g
/Pseudo-funkcje/,/Koniec pseudofunkcji/d
/^  fooinit();$/d
/^  if (curfile != NULL)$/{N
/^  if (curfile != NULL)\n    fclose(curfile);/d
}

