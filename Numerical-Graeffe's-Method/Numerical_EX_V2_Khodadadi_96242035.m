
% Hossein Khodadadi - 97/08/25

ce=input('Please enter the coefficients in a form like\n [ 1 2 3 4 ] that a3=1 , a2=2 ,a1=3 ,a0=4 \n' );
keep=ce;
ce=InverseArray(ce);

iter=input('Please enter the number of iterations \n ');
l=length(ce);
forje=iter;
    while iter>0
        ce=builder(ce);
        iter=iter-1;
    end
    i=l;
    %Pay attention to abs function in next line this method is so practical
    %when all roots are real
    while i>1
        root=(abs(ce(i-1)/(ce(i)))^(1/(2^forje)));
        if abs(polyval(keep,root))<abs(polyval(keep,-1*root))
            root
        else
            -1*root
        end
        i=i-1;
    end
    % A function for inversing CoEfficients********************************
    function [y] = InverseArray(x)
        l=length(x);
        while l>length(x)/2
            supply=x(l);
            x(l)=x(length(x)+1-l);
            x(length(x)+1-l)=supply;
            l=l-1;
        end
    y=x;
    end
    %A function for building new CoEfficients******************************
    function [z]=builder(x)
    j=1;
    m=1;
    k=1;
    sign=-1;
    l=length(x);
    while j<=2*l-1
            sum = x((j+1)/2)^2;
            while k<(j+1)/2 && (j+1)/2+k<=l
                sum =sum + sign *2*x((j+1)/2+k) * x((j+1)/2-k);
                sign =sign * (-1);
                k=k+1;
            end
            sign =-1;
            k=1;
            z(m)=sum;
            sum=0;
            m=m+1;
            j=j+2;
    end
end

  
    