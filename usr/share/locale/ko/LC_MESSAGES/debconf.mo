ή    E      D  a   l      π  o   ρ  ?   a     ‘  .   8  #   g       '   ¦     Ξ     ά     χ       (        C  K   Z     ¦     «  -   ³     α     π     ψ     	  8   	  M   V	  k   €	  8   
  (   I
     r
     w
  u   
            X     @   o     °     Ζ  ;   γ  6     7   V       /     4   G  =   |  Y   Ί  Γ    )   Ψ  7        :  1   Y  '     .   ³  C   β     &     ?     Α     Η  n   η     V  @   o     °  &   Ν     τ     χ  '   	     1  !   J     l  a        κ  Y  ξ  {   H  V   Δ  Φ     2   ς  F   %  3   l  ?      	   ΰ     κ  ,         4  ?   U  +     R   Α            K   "     n                 T   ·  j        w  X   	  3   b  	     ,      ͺ   Ν     x            d        s  1     k   Ά  j   "  ;     Λ   Ι  N     =   δ  I   "   g   l     Τ   9   ξ"  G   (#  +   p#  9   #  +   Φ#  2   $  G   5$  &   }$  ‘   €$     F%     T%  ~   t%      σ%  [   &  +   p&  .   &  	   Λ&     Υ&  0   υ&     &'  .   B'  )   q'     '     3(        3      &       @                    <                       /                          =       )                  '       2   ;   +   9                 6   .   :   E      ?         ,      C   -   A           7       0                            *   1   "          B             8      $      5                  #   !   (   
      D      	   4   >   %    
        --outdated		Merge in even outdated translations.
	--drop-old-templates	Drop entire outdated templates. 
  -o,  --owner=package		Set the package that owns the command.   -f,  --frontend		Specify debconf frontend to use.
  -p,  --priority		Specify minimum priority question to show.
       --terse			Enable terse mode.
 %s failed to preconfigure, with exit status %s %s is broken or not fully installed %s is fuzzy at byte %s: %s %s is fuzzy at byte %s: %s; dropping it %s is missing %s is missing; dropping %s %s is not installed %s is outdated %s is outdated; dropping whole template! %s must be run as root (Enter zero or more items separated by a comma followed by a space (', ').) Back Choices Config database not specified in config file. Configuring %s Debconf Debconf on %s Debconf, running at %s Dialog frontend is incompatible with emacs shell buffers Dialog frontend requires a screen at least 13 lines tall and 31 columns wide. Dialog frontend will not work on a dumb terminal, an emacs shell buffer, or without a controlling terminal. Enter the items you want to select, separated by spaces. Extracting templates from packages: %d%% Help Ignoring invalid priority "%s" Input value, "%s" not found in C choices! This should never happen. Perhaps the templates were incorrectly localized. More Next No usable dialog-like program is installed, so the dialog based frontend cannot be used. Note: Debconf is running in web mode. Go to http://localhost:%i/ Package configuration Preconfiguring packages ...
 Problem setting up the database defined by stanza %s of %s. TERM is not set, so the dialog frontend is not usable. Template #%s in %s does not contain a 'Template:' line
 Template #%s in %s has a duplicate field "%s" with new value "%s". Probably two templates are not properly separated by a lone newline.
 Template database not specified in config file. Template parse error near `%s', in stanza #%s of %s
 Term::ReadLine::GNU is incompatable with emacs shell buffers. The Sigils and Smileys options in the config file are no longer used. Please remove them. The editor-based debconf frontend presents you with one or more text files to edit. This is one such text file. If you are familiar with standard unix configuration files, this file will look familiar to you -- it contains comments interspersed with configuration items. Edit the file, changing any items as necessary, and then save it and exit. At that point, debconf will read the edited file, and use the values you entered to configure the system. This frontend requires a controlling tty. Unable to load Debconf::Element::%s. Failed because: %s Unable to start a frontend: %s Unknown template field '%s', in stanza #%s of %s
 Usage: debconf [options] command [args] Usage: debconf-communicate [options] [package] Usage: debconf-mergetemplate [options] [templates.ll ...] templates Valid priorities are: %s You are using the editor-based debconf frontend to configure your system. See the end of this document for detailed instructions. _Help apt-extracttemplates failed: %s debconf-mergetemplate: This utility is deprecated. You should switch to using po-debconf's po2debconf program. debconf: can't chmod: %s delaying package configuration, since apt-utils is not installed falling back to frontend: %s must specify some debs to preconfigure no none of the above please specify a package to reconfigure template parse error: %s unable to initialize frontend: %s unable to re-open stdin: %s warning: possible database corruption. Will attempt to repair by adding back missing question %s. yes Project-Id-Version: debconf
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2013-11-03 14:17-0400
PO-Revision-Date: 2008-07-20 11:28+0900
Last-Translator: Changwoo Ryu <cwryu@debian.org>
Language-Team: Korean <debian-l10n-korean@lists.debian.org>
Language: ko
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8-bit
 
        --outdated		μ€λλ λ²μ­μ΄λΌλ ν©μΉ©λλ€.
	--drop-old-templates	μ€λλ ννλ¦Ώμ μ λΆ λΊλλ€. 
  -o,  --owner=ν¨ν€μ§		λͺλ Ήμ μμ νκ³  μλ ν¨ν€μ§λ₯Ό μ§μ ν©λλ€.   -f,  --frontend		μ¬μ©ν  debconf νλ‘ νΈμλλ₯Ό μ§μ ν©λλ€.
  -p,  --priority		λ³΄κ³ μ νλ μ§λ¬Έμ μ°μ  μμ μ΅μκ°μ μ§μ ν©λλ€.
       --terse			κ°κ²° λͺ¨λλ₯Ό μ¬μ©ν©λλ€.
 %s λ―Έλ¦¬ μ€μ νκΈ° μ€ν¨, %s μνλ‘ λλ¨ %s ν¨ν€μ§λ λ§κ°μ‘κ±°λ μμ ν μ€μΉλμ§ μμμ΅λλ€ %sμ(λ) %sλ² λ°μ΄νΈμμ fuzzyν©λλ€: %s %sμ(λ) %sλ² λ°μ΄νΈμμ fuzzyν©λλ€: %s. λΊλλ€. %s μμ %s μμΌλ―λ‘ %s λΊλλ€ %s ν¨ν€μ§λ μ€μΉλμ§ μμμ΅λλ€ %sμ΄(κ°) μ€λλμμ΅λλ€ %sμ΄(κ°) μ€λλμμΌλ―λ‘ ννλ¦Ώ μ μ²΄λ₯Ό λΊλλ€! %s λͺλ Ήμ rootλ‘ μ€νν΄μΌ ν©λλ€ (μΌνμ λΉμΉΈ(', ')μΌλ‘ λΆλ¦¬λ 0κ° μ΄μμ ν­λͺ©μ μλ ₯νμΈμ.) λ€λ‘ μ ν μ€μ  νμΌμ μ€μ  λ°μ΄ν°λ² μ΄μ€λ₯Ό μ§μ νμ§ μμμ΅λλ€. %s μ€μ  μ€μλλ€ Debconf debconf (%s) debconf, %sμμ μ€ν μ€ λ€μ΄μΌλ‘κ·Έ νλ‘ νΈμλλ μ΄λ§₯μ€ μ λ²νΌμ νΈνλμ§ μμ΅λλ€ λ€μ΄μΌλ‘κ·Έ νλ‘ νΈμλλ₯Ό μ¬μ©νλ €λ©΄ νλ©΄μ΄ μ μ΄λ 13ν 31μ΄μ λμ΄μΌ ν©λλ€. λ€μ΄μΌλ‘κ·Έ νλ‘ νΈμλλ dumb ν°λ―Έλμ΄λ μ΄λ§₯μ€ μ λ²νΌμμ, λλ μ μ΄ νλ―Έλ μμ΄λ μ¬μ©ν  μ μμ΅λλ€. μ ννλ €κ³  νλ ν­λͺ©μ κΈμλ₯Ό λΉμΉΈμΌλ‘ λΆλ¦¬ν΄μ μλ ₯νμ­μμ€. ν¨ν€μ§μμ ννλ¦Ώμ μΆμΆνλ μ€: %d%% λμλ§ μλͺ»λ μ°μ  μμ "%s" λ¬΄μν©λλ€ C μ νμμ "%s" μλ ₯κ°μ΄ λ°κ²¬λμ§ μμμ΅λλ€! μΌμ΄λμλ μ λλ μΌμλλ€. ννλ¦Ώμ μ ννκ² μ§μ­ννμ§ μμ κ² μμ΅λλ€. κ³μ λ€μ dialogλ κ·Έμ λΉμ·ν νλ‘κ·Έλ¨μ μ€μΉνμ§ μμμΌλ―λ‘, λ€μ΄μΌλ‘κ·Έ νλ‘ νΈμλλ μ¬μ©ν  μ μμ΅λλ€. μ£Όμ: debconfλ₯Ό μΉ λͺ¨λμμ μ€ν μ€μλλ€. http://localhost:%i/ μ£Όμλ‘ κ°μ­μμ€ ν¨ν€μ§ μ€μ  ν¨ν€μ§λ₯Ό λ―Έλ¦¬ μ€μ νλ μ€μλλ€...
 %2$sμ μλ %1$s μ μμ μ μλ λ°μ΄ν°λ² μ΄μ€λ₯Ό μ€μ νλλ° λ¬Έμ κ° λ°μνμ΅λλ€. TERM νκ²½λ³μλ₯Ό μ€μ νμ§ μμμ λ€μ΄μΌλ‘κ·Έ νλ‘ νΈμλλ μ¬μ©ν  μ μμ΅λλ€. %2$sμ ννλ¦Ώ #%1$sμ `Template:' μ€μ΄ μμ΅λλ€
 %2$sμ ννλ¦Ώ #%1$sμ(λ) μ κ°μ΄ "%4$s"μΈ μ€λ³΅λ νλ "%3$s"μ(λ₯Ό) κ°μ§κ³  μμ΅λλ€. λ ννλ¦Ώμ΄ νλμ κ°νλ¬Έμλ‘ μ ννκ² λΆλ¦¬λμ§ μμ κ² κ°μ΅λλ€.
 μ€μ  νμΌμ ννλ¦Ώ λ°μ΄ν°λ² μ΄μ€λ₯Ό μ§μ νμ§ μμμ΅λλ€. `%1$s' μ£Όμμμ ννλ¦Ώ parse μλ¬, %3$sμ #%2$sμ 
 μ΄ νλ‘ νΈμλλ μ΄λ§₯μ€ μ λ²νΌμ νΈνλμ§ μμ΅λλ€. μ€μ  νμΌμ Sigils λ° Smileys μ΅μμ λ μ΄μ μ¬μ©νμ§ μμ΅λλ€. μ§μμ£Όμ­μμ€. νΈμ§κΈ° κΈ°λ° debconf νλ‘ νΈμλλ ν κ° μ΄μμ νμ€νΈ νμΌμ νΈμ§ν©λλ€. μ΄ νμΌλ κ·Έλ¬ν νμ€νΈ νμΌμ νλμλλ€. νμ€ μ λμ€ μ€μ  νμΌμ μ΅μνλ€λ©΄, μ΄ νμΌλ μ΅μνκ² λ³΄μΌ κ²μλλ€. μ΄ νμΌμμ μ€μ  ν­λͺ© μ€κ°μ μ£Όμμ΄ λ€μ΄ μμ΅λλ€. νμΌμ νΈμ§ν΄ νμν ν­λͺ©μ λͺ¨λ λ°κΎΌ λ€μ μ μ₯νκ³  λμ€μ­μμ€. λμ€λ μμ μ debconfλ νΈμ§λ νμΌμ μ½κ³ , μλ ₯ν κ°μ μ¬μ©ν΄ μμ€νμ μ€μ ν©λλ€. μ΄ νλ‘ νΈμλλ μ μ΄ TTYλ₯Ό νμλ‘ ν©λλ€. Debconf::Element::%sμ(λ₯Ό) μ½μ μ μμ΅λλ€. μ€ν¨ μ΄μ : %s νλ‘ νΈμλλ₯Ό μμν  μ μμ: %s μ μ μλ ννλ¦Ώ νλ `%1$s', %3$sμ #%2$sμ 
 μ¬μ©λ²: debconf [μ΅μ] λͺλ Ή [μΈμ] μ¬μ©λ²: debconf-communicate [options] [package] μ¬μ©λ²: debconf-mergetemplate [options] [templates.ll ...] templates μ¬μ©ν  μ μλ μ°μ  μμ: %s μμ€νμ μ€μ νλλ° νΈμ§κΈ° κΈ°λ° debconf νλ‘ νΈμλλ₯Ό μ¬μ©νκ³  μμ΅λλ€. μμΈν λͺλ Ήμ μ΄ λ¬Έμμ λ λΆλΆμ λ³΄μ­μμ€. λμλ§(_H) apt-extracttemplates μ€ν¨: %s debconf-mergetemplate: μ΄ λκ΅¬λ μ¬μ©μ€λ¨λμμ΅λλ€. po-debconfμ po2debconf νλ‘κ·Έλ¨μ μ¬μ©νμ­μμ€. debconf: chmodν  μ μμ: %s apt-utilsκ° μ€μΉλμ§ μμκΈ° λλ¬Έμ ν¨ν€μ§λ₯Ό λ―Έλ¦¬ μ€μ νμ§ μμ΅λλ€ λ€μ νλ‘ νΈμλλ₯Ό λμ  μ¬μ©: %s λ―Έλ¦¬ μ€μ ν  debλ₯Ό μ§μ ν΄μΌ ν©λλ€ μλμ€ μμ μλ κ² μ€μ μμ λ€μ μ€μ ν  ν¨ν€μ§λ₯Ό μ§μ νμ­μμ€ ννλ¦Ώ νμ± μ€λ₯: %s νλ‘ νΈμλλ₯Ό μ΄κΈ°νν  μ μμ: %s νμ€μλ ₯μ λ€μ μ΄ μ μμ: %s κ²½κ³ : λ°μ΄ν°λ² μ΄μ€μ μ€λ₯κ° μμ μλ μμ΅λλ€. λΉ μ§ μ§λ¬Έ %sμ(λ₯Ό) μΆκ°ν΄μ λ°μ΄ν°λ² μ΄μ€ λ³΅κ΅¬λ₯Ό μλν©λλ€. μ 