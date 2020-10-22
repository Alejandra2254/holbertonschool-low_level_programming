# Static libraries

_Según vamos haciendo programas de ordenador, nos damos cuenta que algunas
partes del código se utilizan en muchos de ellos. Por ejemplo, podemos tener
varios programas que utilizan números complejos y las funciones de suma, resta,
etc son comunes. También es posible, por ejemplo, que nos guste hacer juegos, y
nos damos cuenta que estamos repitiendo una y otra vez el código para mover una
imagen (un marcianito o a Lara Croft) por la pantalla.

_Sería estupendo poder meter esas funciones en un directorio separado de los
programas concretos y tenerlas ya compiladas, de forma que podamos usarlas
siempre que queramos. Las ventajas enormes de esto son:

_No tener que volver a escribir el código (o hacer copy-paste).
_Nos ahorraremos el tiempo de compilar cada vez ese código que ya está compilado.
Además, ya sabemos que mientras hacemos un programa, probamos y corregimos,
hay que compilar entre muchas y "más muchas" veces.
_El código ya compilado estará probado y será fiable. No las primeras veces, pero
sí cuando ya lo hayamos usado en 200 programas distintos y le hayamos ido
corrigiendo los errores.
_La forma de hacer esto es hacer librerías. Una librería son una o más funciones
que tenemos ya compiladas y preparadas para ser utilizadas en cualquier programa
que hagamos.  Hay que tener el suficiente ojo cuando las hacemos como para no
meter ninguna dependencia de algo concreto de nuestro programa. Por ejemplo, si
hacemos nuestra función de mover la imagen de Lara Croft, tendremos que hacer la
función de forma que admita cualquier imagen, ya que no nos pegaría nada Lara
Croft dando saltos en un juego estilo "space invaders".1~