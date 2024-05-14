# Cle d'ACTIVATION
## Pour static
```bash
   g++ -c ./Activation/Activation.cpp  -o ./Activation/Activation.o
   ar -rv libactivation.a ./Activation/Activation.o
   g++ main.cpp -L/home/misa2026/Téléchargements/pro2/ -lactivation -o teststatistic

```
## Pour Dynamique

```bash
    g++ -fPIC -c Activation/Activation.cpp 
    g++ -o libactivation.so -shared Activation.o
    mv libactivation.so /home/misa2026/libDynamic/
    g++ main.cpp  -L/home/misa2026/libDynamic/ -lactivation -o testDynamic

```
