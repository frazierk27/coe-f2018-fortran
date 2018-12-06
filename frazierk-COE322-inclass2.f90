        !Kevin Frazier
        !kjf833
        !class lab f2

        program F2
        implicit none
        
        real:: a, b, c, d, v, vc, pi
        character(len=10) :: name
        
        pi = 3.141596        
        print *, 'What is your name?'
        read *, name
        
        print *, 'Enter 3 numbers separted by a comma'
        read *, a, b, c
        
        print *,'Hello, ', name
        
        v = 4./3.*pi*a**3
        vc = a*b*c
        !d = integer((a*b*c)/7.)

        print *,'The volume of the sphere: ', v 
        print *,'The volume of the prism: ', vc
        end program F2
