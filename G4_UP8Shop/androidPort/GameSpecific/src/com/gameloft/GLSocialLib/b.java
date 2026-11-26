// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib;

final class b implements java.util.concurrent.Callable {
    // Fields
    final java.lang.String a;

    // Methods
    b(String p0)
    {
      super();
      this.a = p0;
    
    }

    private byte[] a()
    {
      int v1;
      java.net.URLConnection v2; // RETVAL
      java.net.URLConnection v3;
      byte[] v4;
      java.net.HttpURLConnection v6;
      int ResponseCode; // RETVAL
      java.io.InputStream InputStream;
      int ContentLength; // RETVAL
      int v10;
      byte[] v11;
      java.io.ByteArrayOutputStream i;
      int v13; // RETVAL
      int v15; // RETVAL
    
      v1 = 0;
      try
      {
        ConsoleAndroidGLSocialLib.Log_Debug("PlatformAndroid: Downloading data from url: " + this.a);
        v2 = new java.net.URL(this.a).openConnection();
        v3 = v2;
        if ( !(v2 instanceof java.net.HttpURLConnection) )
        {
          ConsoleAndroidGLSocialLib.Log_Major_Error("PlatformAndroid: Unable to open connection");
          return null;
        }
        try
        {
          v6 = (java.net.HttpURLConnection)v2;
          v6.setAllowUserInteraction(false);
          v6.setInstanceFollowRedirects(true);
          v6.setRequestMethod("GET");
          v6.connect();
          ResponseCode = v6.getResponseCode();
          if ( ResponseCode != 200 )
          {
            ConsoleAndroidGLSocialLib.Log_Debug("PlatformAndroidL: response code diff than ok: " + ResponseCode);
            throw new Exception();
          }
          InputStream = v6.getInputStream();
          ContentLength = v6.getContentLength();
          v10 = ContentLength;
          if ( ContentLength >= 0 )
          {
            v4 = new byte[ContentLength];
            do
            {
              v15 = InputStream.read(v4, v1, v10 - v1);
              if ( v15 <= 0 )
                break;
              v1 += v15;
            }
            while ( v1 < v10 );
            return (byte[])v4;
          }
          v11 = new byte[4096];
          for ( i = new java.io.ByteArrayOutputStream(); ; i.write(v11, 0, v13) )
          {
            v13 = InputStream.read(v11);
            if ( v13 <= 0 )
              break;
          }
          return i.toByteArray();
        }
        catch ( Exception v14 )
        {
          ConsoleAndroidGLSocialLib.Log_Major_Error("PlatformAndroid: Unable to get input stream from URL. Exception: " + v14.toString());
          return null;
        }
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    /* synthetic */ public final Object call()
    {
      return this.a();
    }

}
