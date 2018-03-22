#!/usr/bin/perl
while(<>) { 
	$rr=$_;
	$rp="";
	while(/"(([^"]|"")*)"/) { 
		$rp .= $`;
		$pp = $1;
		$tp= $';
		$pp =~ s,"",",g;
		if( $pp =~ /^.$/ ) { 
			$pp =~ s,','',g;
			$rp .= "tobar('" . $pp . "')";
		} else { 
			$pp =~ s,','',g;
			$rp .= "strprotector('" . $pp . "')";
		}
		$rr = $rp . $tp ; 
		$_ = $tp; 
	}
	print $rr;
}
