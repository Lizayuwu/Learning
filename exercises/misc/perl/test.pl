#! /usr/bin/perl

use v5.22;
use warnings;

while( my $linha = <>) {
	chomp($linha);

	if($linha =~ s/u/uwu/g) {
		say $linha;
	}	
}	
