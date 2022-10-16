
c6n:
	make compile-fr dir=ch-6 f=test
	make compile-fr dir=ch-6 f=ex3

save:
	git add --all
	git commit -m "Random Progress form Nelson :tada:"
	git pull
	git push origin HEAD

compile-farg: 
	cd ${dir} && g++ ${f}.cpp -o ${f} 
	cd ${dir} && ./${f} < inputfile


compile-fr: 
	cd ${dir} && g++ ${f}.cpp -o ${f} 
	cd ${dir} && ./${f}

compile-fin: 
	cd ${dir} && g++ ${f}.cpp -o ${f} 
	cd ${dir} && ./${f} < ${inputfile}