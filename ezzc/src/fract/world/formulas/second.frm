Mandelbrot {
init:
    z = 0 
    c = #pixel
loop:
    z = z^2 + c
bailout:
    |z| < 4.0
}
