%.pdf : %.tex
	pdflatex -shell-escape $< </dev/null > $<.log

all : 2021_borsotti_trofimovich_tdfa_fast_submatch_extraction_in_regular_expressions.pdf

clean:
	rm *.log *.aux *.pdf *.pag pratend*.tex
