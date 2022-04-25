#ifndef SCALAR_CLASS_H
# define SCALAR_CLASS_H
# include <string>

class Scalar {

public:
	Scalar();
	Scalar(Scalar const &copy);
	virtual ~Scalar();

	Scalar		&operator=(Scalar const &rhs);

	std::string	findType(std::string literal) const;
	void		print(char c) const;
	void		print(int i) const;
	void		print(float f) const;
	void		print(double i) const;
};

#endif