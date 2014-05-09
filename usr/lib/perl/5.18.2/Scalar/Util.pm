# Scalar::Util.pm
#
# Copyright (c) 1997-2007 Graham Barr <gbarr@pobox.com>. All rights reserved.
# This program is free software; you can redistribute it and/or
# modify it under the same terms as Perl itself.

package Scalar::Util;

use strict;
require Exporter;
require List::Util; # List::Util loads the XS

our @ISA       = qw(Exporter);
our @EXPORT_OK = qw(
  blessed
  dualvar
  isdual
  isvstring
  isweak
  looks_like_number
  openhandle
  readonly
  refaddr
  reftype
  set_prototype
  tainted
  weaken
);
our $VERSION    = "1.27";
$VERSION   = eval $VERSION;

our @EXPORT_FAIL;

unless (defined &weaken) {
  push @EXPORT_FAIL, qw(weaken);
}
unless (defined &isweak) {
  push @EXPORT_FAIL, qw(isweak isvstring);
}
unless (defined &isvstring) {
  push @EXPORT_FAIL, qw(isvstring);
}

sub export_fail {
  if (grep { /^(?:weaken|isweak)$/ } @_ ) {
    require Carp;
    Carp::croak("Weak references are not implemented in the version of perl");
  }

  if (grep { /^isvstring$/ } @_ ) {
    require Carp;
    Carp::croak("Vstrings are not implemented in the version of perl");
  }

  @_;
}

1;

__END__

