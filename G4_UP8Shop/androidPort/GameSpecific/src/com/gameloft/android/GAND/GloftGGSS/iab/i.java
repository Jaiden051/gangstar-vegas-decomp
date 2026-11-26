// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

final class i implements javax.net.ssl.X509TrustManager {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.iab.IABRequestHandler a;

    // Methods
    i(com.gameloft.android.GAND.GloftGGSS.iab.IABRequestHandler p0)
    {
      super();
      this.a = p0;
    
    }

    public final void checkClientTrusted(java.security.cert.X509Certificate[] p0, String p1)
    {
      ;
    }

    public final void checkServerTrusted(java.security.cert.X509Certificate[] p0, String p1)
    {
      ;
    }

    public final java.security.cert.X509Certificate[] getAcceptedIssuers()
    {
      return new java.security.cert.X509Certificate[0];
    }

}
