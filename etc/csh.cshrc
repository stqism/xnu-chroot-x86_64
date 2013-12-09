# /etc/csh.cshrc: system-wide .cshrc file for csh(1) and tcsh(1)

if ($?tcsh && $?prompt) then

	bindkey "\e[1~" beginning-of-line # Home
	bindkey "\e[7~" beginning-of-line # Home rxvt
	bindkey "\e[2~" overwrite-mode    # Ins
	bindkey "\e[3~" delete-char       # Delete
	bindkey "\e[4~" end-of-line       # End
	bindkey "\e[8~" end-of-line       # End rxvt

	set autoexpand
	set autolist
	set prompt = "%U%m%u:%B%~%b%# "
endif
