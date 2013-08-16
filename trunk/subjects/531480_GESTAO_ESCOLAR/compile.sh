#!/bin/bash

ARTICLE=423114_Jefferson_Campos_MALS

pdflatex $ARTICLE.tex
bibtex $ARTICLE.aux
pdflatex $ARTICLE.tex
