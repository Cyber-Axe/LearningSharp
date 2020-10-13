$$
L(W) = \sum_{i=1}^{N} ||W^Tx^i-y^i||^2+\lambda W^TW
$$

$$
L(W)=\frac{1}{2}\sum_{n=1}^{N}(y(x,W)-t)^2=\frac{1}{2}(XW-T)^\top(XW-T)
$$

$$
\frac{\partial L(W)}{\partial W}=X^\top XW-X^\top T
$$

$$
\frac{\partial L(W)}{\partial W}=W(X^\top X+2\lambda I)-X^\top Y=0
$$

$$
W=(X^\top X+\lambda I)^{-1}X^{-1}Y
$$

