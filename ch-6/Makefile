
c&r:
	make compile-fr f=functionTest

save:
	git add --all
	git commit -m "Update"
	git pull
	git push origin HEAD


compile-farg: 
	cd ${dir} && g++ ${f}.cpp -o ${f} 
	cd ${dir} && ./${f} < inputfile


compile-fr: 
	g++ ${f}.cpp -o ${f}.exe 
	./${f}.exe


compile-fin: 
	cd ${dir} && g++ ${f}.cpp -o ${f} 
	cd ${dir} && ./${f} < ${inputfile}