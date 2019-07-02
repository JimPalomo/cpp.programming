#ifndef MOTHER_H
#define MOTHER_H

// Note: only public and protected get inherited
class Mother {
    
    // Public: all files have direct access to the var or function
    public:
        int publicv;

    // Protected: anything inside the class has access, any friend has access, and base classes
    protected:
        int protectedv;
        
    // Private: only the class has access to private variables, must create methods for indirect access
    private:
        int privatev;
};

#endif