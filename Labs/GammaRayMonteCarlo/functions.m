function p = Pcs(E)
    p = 1.04713*exp(0.23*exp(-0.5*E))
end

function p = Ppa(E)
    p = 1.01158*10.^(132*exp(-28*E)) 
end

function ret = compton_scatter(E,theta)
    alpha = E/0.511;
    ret = E/(1+alpha*(1-cos(theta)));
end

function ret = P(E,theta)
    alpha = E/0.511;
    a = 1./(1+alpha.*(1-cos(theta)));
    b = (1+cos(theta).^2)/2;
    c = alpha^2*(1-cos(theta).^2);
    d = (1+cos(theta).^2).*((1+alpha.*(1-cos(theta))));
    ret = a.^2.*b.*(1+c./d);
end

function ret = smear(E)
    ret = E+0.01*E*randn;
end