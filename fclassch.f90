        module PointMod
        implicit none 

        type Point
            real :: x, y
        
        end type Point
        
        contains 
        real function distance(p,q)
            type(Point) :: p, q
            distance = ((p%x - q%x)**2 + (p%y - q%y)**2)**.5
        end function distance
        end module PointMod
        
        program Main
        implicit none
        use PointMod
        type(Point) :: p1, p2
        real :: d
         
        p1%x = 1.
        p1%y = 2.

        p2%x = 3
        p2%y = 4

        d = distance(p1,p2)
        print *, "The distance is ", d
        end program main
