require '_h2ph_pre.ph';

no warnings qw(redefine misc);

unless(defined(&_PREDEFS_H)) {
    eval 'sub _PREDEFS_H () {1;}' unless defined(&_PREDEFS_H);
    unless(defined(&_STDC_PREDEF_H)) {
	die("Never use <bits/predefs.h> directly; include <stdc-predef.h> instead.");
    }
    eval 'sub __STDC_IEC_559__ () {1;}' unless defined(&__STDC_IEC_559__);
    eval 'sub __STDC_IEC_559_COMPLEX__ () {1;}' unless defined(&__STDC_IEC_559_COMPLEX__);
}
1;
