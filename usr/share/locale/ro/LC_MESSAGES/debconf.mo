��    E      D  a   l      �  o   �  ?   a  �   �  .   8  #   g     �  '   �     �     �     �       (        C  K   Z     �     �  -   �     �     �     �     	  8   	  M   V	  k   �	  8   
  (   I
     r
     w
  u   �
            X     @   o     �     �  ;   �  6     7   V  �   �  /     4   G  =   |  Y   �  �    )   �  7        :  1   Y  '   �  .   �  C   �     &  �   ?     �     �  n   �     V  @   o     �  &   �     �     �  '   	     1  !   J     l  a   �     �  �  �  �   �  A   K  �   �  5   S  )   �      �  )   �     �           ,     @  5   R     �  Z   �     �       N        ]     k     s     �  V   �  o   �  �   _  M   �  '   ;     c  %   j  �   �     $     -  v   6  J   �     �  "     C   4  X   x  5   �  �     I   �  H   �  L   7  v   �    �  <   "  <   ?"  #   |"  8   �"  1   �"  2   #  H   >#     �#  �   �#     B$  #   J$  }   n$  0   �$  Q   %  #   o%  3   �%     �%     �%  3   �%  !   &  )   =&     g&  u   �&     �&        3      &       @                    <                       /                          =       )                  '       2   ;   +   9                 6   .   :   E      ?         ,      C   -   A           7       0                            *   1   "          B             8      $      5                  #   !   (   
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
 Usage: debconf [options] command [args] Usage: debconf-communicate [options] [package] Usage: debconf-mergetemplate [options] [templates.ll ...] templates Valid priorities are: %s You are using the editor-based debconf frontend to configure your system. See the end of this document for detailed instructions. _Help apt-extracttemplates failed: %s debconf-mergetemplate: This utility is deprecated. You should switch to using po-debconf's po2debconf program. debconf: can't chmod: %s delaying package configuration, since apt-utils is not installed falling back to frontend: %s must specify some debs to preconfigure no none of the above please specify a package to reconfigure template parse error: %s unable to initialize frontend: %s unable to re-open stdin: %s warning: possible database corruption. Will attempt to repair by adding back missing question %s. yes Project-Id-Version: ro
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2013-11-03 14:17-0400
PO-Revision-Date: 2008-06-29 17:18+0300
Last-Translator: Eddy Petrișor <eddy.petrisor@gmail.com>
Language-Team: Romanian <debian-l10n-romanian@lists.debian.org>
Language: ro
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Generator: KBabel 1.11.4
Plural-Forms:  nplurals=3; plural=n==1 ? 0 : (n==0 || (n%100 > 0 && n%100 < 20)) ? 1 : 2;
 
	--outdated		Fuzionează chiar și în traducerile neactualizate.
	--drop-old-templates	Renunță la toate șabloanele neactualizate. 
  -o,  --owner=pachet		Determină pachetul care deține comanda.   -f,  --frontend		Precizați ce interfață pentru debconf să fie folosită.
  -p,  --priority		Precizați prioritatea minimă a întrebării de arătat.
       --terse			Activați modul concis.
 %s a eșuat la preconfigurare, cu starea de eroare %s %s este deteriorat sau instalat incomplet %s este neclar la octetul %s: %s %s este neclar la octetul %s: %s; renunț %s lipsește %s lipsește; se renunță la %s %s nu este instalat %s este învechit %s este învechit, se renunță la întregul șablon! %s trebuie pornit ca root (Introduceți zero sau mai multe articole separate de virgulă urmată de spațiu (', ').) Înapoi Opțiuni Configurarea bazei de date n-a fost specificată în fișierul de configurare. Configurez %s Debconf Debconf la %s Debconf, rulând la %s Dialogul interfeței program este incompatibil cu zonele de memorie tampon shell emacs Dialogul interfeței program are nevoie de un ecran de cel puțin 13 linii înălțime și 31 coloane lățime. Dialogul interfeței program nu va funcționa pe un terminal mut, pe o zonă de memorie tampon shell emacs, sau fără un terminal controlor. Introduceți articolele pe care doriți să le alegeți, separate de spații. Se extrag șabloanele din pachete: %d%% Ajutor Se ignoră prioritatea nevalidă "%s" Nu s-a găsit în opțiunile C valoarea introdusă, "%s"! Aceasta n-ar fi trebuit să se întâmple. Poate șabloanele au fost localizate incorect. Mai mult Înainte Nu este instalat nici un program utilizabil gen dialog, așa încât dialogul interfeței program nu poate fi folosit. Notă: Debconf rulează în modul web. Duceți-vă la http://localhost:%i/ Configurația pachetului Se preconfigurează pachetele ...
 Problemă la ajustarea bazei de date definită de strofa %s din %s. TERM nu este specificat, astfel încât dialogul interfeței program nu este utilizabil. Șablonul #%s în %s nu conține o linie 'Template:'
 Șablonul #%s din %s are un câmp duplicat "%s" cu valoarea nouă "%s". Probabil două șabloane nu sunt separate corespunzător de o singură nouă linie.
 Șablonul bazei de date n-a fost specificat în fișierul de configurare. Eroare de analiză a șablonului aproape de `%s', în strofa #%s din %s
 Term::ReadLine::GNU este incompatibil cu zone de memorie tampon shell emacs. Opțiunile Sigils și Smileys din fișierul de configurare nu mai sunt folosite. Sunteți rugat(ă) să le ștergeți. Interfața program de editare debconf vă prezintă unul sau mai multe fișiere text pentru editare. Acesta este unul din astfel de fișiere. Dacă sunteți familiarizat cu fișierele de configurare standard unix, acest fișier vă va părea cunoscut -- conține comentarii intercalate printre liniile de configurare. Editați fișierul, schimbând după necesități orice linie, salvați-l și ieșiți. În acest punct, debconf va citi fișierul editat, și va folosi valorile introduse pentru a configura sistemul. Această interfață program are nevoie de un tty controlor. Nu pot încărca Debconf::Element::%s. Eșuare datorată: %s Nu pot porni interfața program: %s Câmp de șablon necunoscut '%s', în strofa #%s din %s
 Utilizare: debconf [opțiuni] comanda [argumente] Utilizare: debconf-communicate [opțiuni] [pachet] Utilizare: debconf-mergetemplate [opțiuni] [templates.ll ...] șabloane Prioritățile valide sunt: %s Utilizați interfața debconf de tipul program de editare pentru a configura sistemul. Vedeți sfârșitul acestui document pentru instrucțiuni detaliate. _Ajutor eșuare extragere șabloane apt: %s debconf-mergetemplate: Acest utilitar este depășit. Ar trebui să folosiți în loc programul po2debconf al lui po-debconf. debconf: nu pot schimba permisiunea de acces: %s întârziere la configurarea pachetului, din moment ce apt-utils nu este instalat retragere la interfața program: %s trebuie precizate pachete deb pentru preconfigurare nu niciunul din cele de mai sus vă rog specificați un pachet pentru reconfigurare eroare la analiza șablonului: %s nu pot inițializa interfața program: %s nu pot redeschide stdin: %s avertisment: posibilă deteriorare a bazei de date. Voi încerca să o repar adăugând la loc întrebarea lipsă %s. da 