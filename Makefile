
build:
	g++ src/crypto/sha512/sha512.cpp \
		src/crypto/rsa/encoder.cpp \
		src/crypto/rsa/key_generator.cpp \
		src/crypto/rsa/prime_generator.cpp \
		src/crypto/rsa/utils.cpp \
		src/main.cpp -o tokoin
