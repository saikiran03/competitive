importPackage(java.io);
importPackage(java.lang);
importPackage(java.math);
importPackage(java.util);
 
var sc = new Scanner(System['in']);
var kases = sc.nextInt();
for(var kase = 1; kase <= kases; kase++) {
        var t = sc.nextInt();
        var bi=BigInteger.valueOf(1);
        for(var i=1; i<=t; i++)
        {
            bi = bi.multiply(BigInteger.valueOf(i));
        }
        System.out.println(bi);
}