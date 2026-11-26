// Decompiled from classes.dex (SourceFile: et.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class et extends com.google.android.gms.internal.en {
    // Fields
    private final java.lang.String a;
    private final android.content.Context b;
    private final java.lang.String c;

    // Methods
    public et(android.content.Context p0, String p1, String p2)
    {
      super();
      this.b = p0;
      this.a = p1;
      this.c = p2;
    }

    public final void A_()
    {
      ;
    }

    public final void a()
    {
      java.net.HttpURLConnection v1;
      int ResponseCode; // RETVAL
    
      try
      {
        ev.C("Pinging URL: " + this.c);
        v1 = (java.net.HttpURLConnection)new java.net.URL(this.c).openConnection();
        try
        {
          ep.a(this.b, this.a, true, v1);
          ResponseCode = v1.getResponseCode();
          if ( ResponseCode < 200 || ResponseCode >= 300 )
            ev.D("Received non-success response code " + ResponseCode + " from pinging URL: " + this.c);
        }
        finally
        {
          v1.disconnect();
        }
      }
      catch ( IndexOutOfBoundsException v4 )
      {
        ev.D("Error while parsing ping URL: " + this.c + ". " + v4.getMessage());
      }
      catch ( java.io.IOException v5 )
      {
        ev.D("Error while pinging URL: " + this.c + ". " + v5.getMessage());
      }
    }

}
