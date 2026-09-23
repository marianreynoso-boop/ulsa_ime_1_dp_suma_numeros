# Práctica 1: Suma de 5 números
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->
Mi programa suma 5 números diferentes o iguales y te arroja un resultado, en la vida real serviría para obtener resultados de sumas distintas con mayor eficiencia.
_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. 5 números decimales, no cadenas, que serán sumados

**Salidas:**
1. 1 resultado de la suma de las 5 variables

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- Se deben sumar los 5 números siempre
- Se deberán ingresar 5 números

**Decisión sobre negativos y decimales** (¿los acepto? ¿por qué?):
Sí, porque así lo decidí

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
Que siempre sean 5 números

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Suma calculada a mano |
|---|---|---|
| 1 | 5,6,7,8,9 | 35 |
| 2 | 1,3,6,9,11 | 30 |
| 3 | 20,5,4,12,3 | 44|

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** Sí / No SI
**¿Tuve que corregirla?** NO

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o suma
./suma
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->
Suma de 5 numeros
Ingresa un numero: 2.5
Ingresa un numero: 3.5
Ingresa un numero: 4.0
Ingresa un numero: 1.0
Ingresa un numero: 5.0
La suma es: 16
```
_____
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué pasó al no inicializar `suma`?**
_____Mostro error

**Experimento B (opcional): ¿qué pasó al usar `int` con 2.5?**
_____

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Del 1 al 5 | 1 a 5 | 15 | __15_ | _SI__ |
| Todos ceros | 0 ×5 | 0 | __0__ | _SI__ |
| Con negativos |-2,-8,-4,-3,-1| Numero no válido | Numero no válido_ | _SI__ |
| Decimales | 0.5 ×5 | 2.5 | _2.5_ | _SI__ |
| Todos iguales | 7 ×5 | 35 | __35_ | _SI__ |
| Caso propio 1 | _2,4,6,8,10_ | _30_ | _30__ | __SI__ |
| Caso propio 2 | .1,.3,.5,.8,5 | 6.7__ | _6.7_ | _SI_ |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | _Falló una parte de la sintaxis_ | _el punto y coma_ | _SI_ |
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
|  NADA| NADA |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
Aprendí a escribir código en la terminal

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
El diseño del pseudocódigo

**¿Qué fue lo más difícil y cómo lo resolví?**
Escribir el código corrrectamente

**¿Qué pregunta me quedó sin responder?**
Ninguna

## 13. Lista de verificación antes de entregar (Fase 5)

- [ SI] Llené todas las secciones (no quedan `_____`)
- [SI] Mi programa compila sin advertencias
- [SI] Probé todos los casos de la tabla
- [SI] Hice al menos 3 commits con mensajes claros
- [SI] Hice `git push` y verifiqué mi fork en GitHub
- [SI] Entregué el enlace de mi fork en Classroom