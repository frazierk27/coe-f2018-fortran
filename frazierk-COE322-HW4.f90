        !Kevin Frazier
        !kjf833
        !Homework 4
        !find prime numbers less than 100
        program hw4
        
        implicit none
        
        integer :: i, j, k, nonprime

        do i = 3,100
                k = i-1
                nonprime = 0
            do j = 2,k
                if (modulo(i,j) == 0) then
                        nonprime = 1
                        print *, i,"is not prime: it is divisible by",j
                        exit
                end if
            end do
        if (nonprime == 0) then
                print *, i,"is prime"
        end if
        
        end do
        end program hw4
