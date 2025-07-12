.code

public MulAndGetFlags

MulAndGetFlags proc


    imul rax, rax, 0h      

    pushfq                  
    pop rax                 

    ret
MulAndGetFlags endp

end
