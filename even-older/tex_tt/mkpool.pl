#!/usr/bin/perl
#$pos=0;
#while(<>) { 
#	while(/"(([^"\]|\\[\"])*)"/) { 
#		$pp = $1;
#		$tp= $';
#		$pp =~ s,\\(["'\]),\1,g;
#		if ($strtab{$pp} == 0 ) { 
#			$strtab{$pp} = $pos+256;
#			$                                                      :
#		$_ = $tp; 
#	}
#	print $rr;
#}

#open(STAB,">pool_str.c");
#open(OTAB,">pool_off.c");

#print STAB "char pool_str[]={\n";
#print OTAB "int pool_len[]={\n";

print "char * pool_strs[]={\n";

while(<>) { 
	if( /^\*/ ) { 
		last;
	}
	chop;
	s,^..,,;
	s,(["\\]),\\\1,g;
#	print STAB "\"",$_,"\"\n";
#	print OTAB "strlen(\"",$_,"\"),\n";
	print "\"",$_,"\",\n";
}
print "};\n";
#print STAB "};\n";
#print OTAB "};\n";
