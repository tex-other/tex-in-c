#!/usr/bin/perl
while(<>) { 
	$rr=$_;
	$rp="";
	while(/"(([^"]|"")*)"/) { 
		$rp .= $`;
		$pp = $1;
		$tp= $';
		if( $pp =~ /^([^"]|"")$/ ) { 
			$pp =~ s,"",",g;
			$pp =~ s,','',g;
			$rp .= "tobar('" . $pp . "')";
		} else { 
#			$rp .= "\"" . $pp . "\"";
			$rp .= "strprotector(\"" . $pp . "\")";
		}
		$rr = $rp . $tp ; 
		$_ = $tp; 
	}
	print $rr;
}
