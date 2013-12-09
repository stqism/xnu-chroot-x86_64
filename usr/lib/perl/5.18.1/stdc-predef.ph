require '_h2ph_pre.ph';

no warnings qw(redefine misc);

unless(defined(&_STDC_PREDEF_H)) {
    eval 'sub _STDC_PREDEF_H () {1;}' unless defined(&_STDC_PREDEF_H);
    require 'bits/predefs.ph';
    eval 'sub __STDC_ISO_10646__ () {201103;}' unless defined(&__STDC_ISO_10646__);
    eval 'sub __STDC_NO_THREADS__ () {1;}' unless defined(&__STDC_NO_THREADS__);
}
1;
