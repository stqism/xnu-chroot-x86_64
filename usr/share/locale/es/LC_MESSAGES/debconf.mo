��    E      D  a   l      �  o   �  ?   a  �   �  .   8  #   g     �  '   �     �     �     �       (        C  K   Z     �     �  -   �     �     �     �     	  8   	  M   V	  k   �	  8   
  (   I
     r
     w
  u   �
            X     @   o     �     �  ;   �  6     7   V  �   �  /     4   G  =   |  Y   �  �    )   �  7        :  1   Y  '   �  .   �  C   �     &  �   ?     �     �  n   �     V  @   o     �  &   �     �     �  '   	     1  !   J     l  a   �     �  x  �  �   g  H   �  �   B  6   �  -   !  !   O  1   q     �     �     �     �  =   �     /  W   L     �     �  Z   �          &     .     <  V   Y  h   �  �     G   �  -   �       *   !  �   L     �  	   �  j   �  J   i     �     �  Y   �  ^   G  :   �  �   �  V   �  G   �  T   1  p   �    �  3   "  :   G"  %   �"  @   �"  2   �"  5   #  L   R#      �#  �   �#     S$  .   Z$  m   �$  *   �$  U   "%     x%  -   �%     �%     �%  0   �%     &  &   2&     Y&  r   u&     �&        3      &       @                    <                       /                          =       )                  '       2   ;   +   9                 6   .   :   E      ?         ,      C   -   A           7       0                            *   1   "          B             8      $      5                  #   !   (   
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
 Usage: debconf [options] command [args] Usage: debconf-communicate [options] [package] Usage: debconf-mergetemplate [options] [templates.ll ...] templates Valid priorities are: %s You are using the editor-based debconf frontend to configure your system. See the end of this document for detailed instructions. _Help apt-extracttemplates failed: %s debconf-mergetemplate: This utility is deprecated. You should switch to using po-debconf's po2debconf program. debconf: can't chmod: %s delaying package configuration, since apt-utils is not installed falling back to frontend: %s must specify some debs to preconfigure no none of the above please specify a package to reconfigure template parse error: %s unable to initialize frontend: %s unable to re-open stdin: %s warning: possible database corruption. Will attempt to repair by adding back missing question %s. yes Project-Id-Version: debconf 1.2.39
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2013-11-03 14:17-0400
PO-Revision-Date: 2010-08-08 02:33+0200
Last-Translator: Javier Fernandez-Sanguino <jfs@debian.org>
Language-Team: Debian Spanish Team <debian-l10n-spanish@lists.debian.org>
Language: es
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
 
        --outdated		Mezclar también traducciones desactualizadas.
	--drop-old-templates	Descartar completamente las plantillas desactualizadas. 
  -o,  --owner=paquete		Establece el paquete al que pertenece la orden.   -f,  --frontend		Indica a debconf la interfaz que debe usar.
  -p,  --priority		Especifica la prioridad mínima a mostrar.
       --terse			Activa el modo resumido.
 Fallo al preconfigurar %s, con el código de salida %s %s está roto o no está totalmente instalado %s está difusa en el byte %s: %s %s está difusa en el byte %s: %s; descartándola falta %s falta %s: ignorando %s %s no está instalado %s está desactualizado %s está desactualizada: ¡descartando la plantilla completa! %s debe ejecutarse como root (Introduzca cero o más elementos separados por una coma seguida de un espacio (', ').) Anterior Opciones No se ha especificado una base de datos de configuración en el fichero de configuración. Configuración de %s Debconf Debconf en %s Debconf, ejecutándose en %s La interfaz «Dialog» es incompatible con búfers de intérprete de órdenes de emacs Necesita una pantalla de al menos 13 líneas de alto y 31 columnas de ancho para la interfaz «dialog». La interfaz «dialog» no funcionará en un terminal tonto, un búfer de intérprete de órdenes de emacs, o sin una terminal controladora. Introduzca los elementos que desea seleccionar, separados por espacios. Extrayendo plantillas para los paquetes: %d%% Ayuda Se ignorará la prioridad inválida «%s» ¡No se encontró el valor introducido «%s» dentro de la opciones C! Esto no debería suceder nunca. Tal vez las plantillas estaban localizadas incorrectamente. Más Siguiente No hay ningún programa tipo dialog instalado, así que no se puede usar la interfaz basada en «dialog». Nota: Debconf está ejecutándose en modo web. Vaya a http://localhost:%i/ Configuración de paquetes Preconfigurando paquetes ...
 Se produjo un problema al configurar la base de datos definida por la instancia %s de %s. La variable TERM no está establecida, por lo que no se puede utilizar la interfaz «dialog». La plantilla #%s en %s no contiene una línea 'Template:'
 La plantilla #%s en %s tiene un campo «%s» duplicado con el nuevo valor «%s». Probablemente dos plantillas no están separadas correctamente con un sólo retorno de carro.
 No se ha especificado una base de datos de plantillas en el fichero de configuración. Error de análisis de plantilla cerca de `%s', en la estrofa #%s de %s
 Term::ReadLine::GNU es incompatible con búfers de intérprete de órdenes de emacs. Ya no se utilizan las opciones «Sigils» y «Smileys» en el fichero de configuración. Por favor, elimínelas. La interfaz de debconf basado en editor le muestra uno o más ficheros de texto para que los edite. Éste es uno de esos ficheros de texto. Si está familiarizado con los ficheros de configuración estándar de Unix, este fichero le resultará familiar; contiene comentarios intercalados con elementos de configuración. Edite este fichero, cambiando cualquier elemento según sea necesario, y luego grábelo y salga del editor. En ese punto, debconf leerá el fichero editado, y usará los valores introducidos para configurar el sistema. Esta interfaz requiere un terminal que la controle. No se pudo cargar Debconf::Element::%s. Fallo debido a: %s No se puede arrancar una interfaz: %s Campo desconocido '%s' en la plantilla, en la estrofa #%s de %s
 Modo de uso: debconf [opciones] orden [argumentos] Modo de uso: debconf-communicate [opciones] [paquete] Modo de uso: debconf-mergetemplate [opciones] [plantillas.ll ...] plantillas Las prioridades válidas son: %s Está usando la interfaz «debconf» basada en editor para configurar el sistema. Encontrará instrucciones detalladas al final de este documento. _Ayuda fallo al ejecutar «apt-extracttemplates»: %s debconf-mergetemplate: Esta utilidad es obsoleta. Debería utilizar el programa de po-debconf «po2debconf». debconf: no puedo cambiar los permisos: %s se retrasa la configuración de los paquetes, ya que «apt-utils» no está instalado probando ahora la interfaz: %s debe especificar algunos debs a preconfigurar no ninguna de las anteriores por favor, especifique un paquete a reconfigurar Error procesando plantilla: %s no se pudo inicializar la interfaz: %s no puedo re-abrir stdin: %s aviso: posible corrupción de la base de datos. Se tratará de reparar volviendo a añadir la pregunta perdida %s. sí 