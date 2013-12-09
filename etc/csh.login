# /etc/csh.login: system-wide .login file for csh(1) and tcsh(1)

# allow for other packages/system admins to customize the shell environment
if (-e /etc/csh/login.d && `/bin/ls /etc/csh/login.d` != "") then
  foreach FILE (`/bin/ls /etc/csh/login.d/*`)
    source $FILE;
  end;
endif
