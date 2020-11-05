EZZC {
; First example formula - this produces a variant on the Mandelbrot set
init:
    z = 1
    c = #pixel
loop:
    z = z*z*c + c*(c+1)
bailout:
    |z| < 4.0
}
