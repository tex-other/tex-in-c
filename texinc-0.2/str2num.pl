
open(POOL,"pool_str.c");
$pp=<POOL>;
$k=256;
while(<POOL>) {
        if(/^"([^\"]*|\\.)*",$/) {
                chop;
                chop;
                $tab{$_}=$k;
        } else {
                if(!/^};$/) {
                        print "Bad pool line:\n";
                        print;
                }
        }
        $k++;
}
print "/* Do NOT edit - this is generated file */\n";
$inputname=$ARGV[0];

#$inputname="tere.c";
print "#line 1 \"$inputname\"\n";
while(<>) {
        $pl = $_;
        $pr = "";
	while($pl =~ /S[ 	]*\([ 	]*("([^\"]*|\\.)*")[ 	]*\)/) {
		$str=$1;
		$pr .= $` . "S($tab{$str})";
		$pl=$';
	}
	print $pr.$pl;
}
