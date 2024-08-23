/*En los modos de acceso al realizar herecia tienen un orden de tal modo
que  los  miembros publicos sean publicos en la clase derivada y protegidos  en la clase derivada
en protegida miembros publicos y derivados son protegidos y por ultimo la privada la cual hace miembros
publicos y protegidos sean pribados en la clasem derivada*/

class Base {
    public :
        int x;
    protected:
        int y;
    private :
        int z;

};

class PublicDerived : public  Base {
    //x es publico
    //y  es protegido
    //z es no accesible desde PublicDerived
};

class ProtectedDerived : protected Base {
    // x is protectedg
    // y is protected
    //z is not accessible form ProtectedDerived
};

class PrivateDerived: private Base {
    // x is private 
    // y is private
    // z is not accesible for PrivateDerived
};
