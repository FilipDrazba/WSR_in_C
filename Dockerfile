FROM ubuntu:latest

# Ustawienie zmiennych środowiskowych, aby uniknąć interakcji podczas instalacji
ENV DEBIAN_FRONTEND=noninteractive

# Aktualizacja systemu i instalacja niezbędnych pakietów
RUN apt update && apt install -y

# Instalacja HTCondor
RUN apt update && apt install -y condor
