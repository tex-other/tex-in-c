$k=1;
while(<>)
{
# strings: "([\"]*|\\.)*"
	$pl = $_;
	while($pl =~ /S[ 	]*\([ 	]*("([^\"]*|\\.)*")[ 	]*\)/) { 
		$str=$1;
		$pl=$';
		if($tab{$str}==0) { 
			$tab{$str}=$k;
			$stab{$k}=$str;
			$k++;
#			print $str,"\n";
		}
	}
}

print "Making pool\n";
open(POOL,">pool_str.c1");
print POOL "const char * const pool_strs[]={\n";
for($i=1;$i<$k;$i++) {
	print POOL $stab{$i},",\n";
#	print $stab{$i},",\n";
}
print POOL "};\n";
close(POOL);
