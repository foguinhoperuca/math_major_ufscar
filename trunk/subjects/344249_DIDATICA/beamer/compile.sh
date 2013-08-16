# Copyright (C) 2012-2013 Jefferson Campos - foguinho [dot] peruca [at] gmail [dot] com

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

# Compile latex project.

#!/bin/bash

ARTICLE=beamer

show_usage()
{
    echo "usage ./compile.sh [compile|clean|help]";
}

compile()
{
    pdflatex $ARTICLE.tex
    bibtex $ARTICLE.aux
    pdflatex $ARTICLE.tex
}

clean()
{
    echo "Clean directory.";
    rm *~;
    rm *.aux;
    rm *.blg;
    rm *.log;
}

case $1 in
    clean)
	clean;
	;;
    compile)
	compile;
	;;
    *)
	show_usage;
	;;
esac


