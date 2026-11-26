// Decompiled from classes.dex (SourceFile: m.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

final class m extends com.gameloft.android.GAND.GloftGGSS.iab.d {
    // Methods
    m()
    {
      super();
    }

    public final void a(android.os.Bundle p0)
    {
      int TotalItems;
      int v3;
      int i;
      byte[] v5; // RETVAL
      String v6;
      int j;
      byte[] v8; // RETVAL
      String v9;
      String v10;
      String v11;
      String v12;
      java.net.HttpURLConnection v13;
      java.io.File v14;
      int v15;
      int ContentLength; // RETVAL
      int v17;
      java.io.InputStream InputStream; // RETVAL
      java.io.DataInputStream v19;
      java.io.FileOutputStream v20;
      int k;
      int v22;
      byte[] v23;
      android.os.Bundle v25;
      String v26;
      byte[] Bytes;
      String v28;
      byte[] v29;
      String v30;
      byte[] v31;
      String v32;
      byte[] v33;
      Class[] v34;
      java.lang.reflect.Method Method; // RETVAL
      Object[] v36;
      try
      {
        InAppBilling.m = false;
        TotalItems = InAppBilling.getTotalItems();
        v3 = 0;
        for ( i = 0; i < TotalItems && v3 == 0; ++i )
        {
          v5 = InAppBilling.a.a(InAppBilling.c, InAppBilling.a(0, 48), 0);
          if ( v5 != null )
            v6 = new String(v5);
          else
            v6 = null;
          if ( v6 != null && v6.indexOf(InAppBilling.a(0, 49)) != -1 )
            v3 = 1;
        }
        if ( v3 != 0 )
        {
          if ( TotalItems > 0 )
            InAppBilling.j = true;
          for ( j = 0; j < TotalItems; ++j )
          {
            v8 = InAppBilling.a.a(InAppBilling.c, InAppBilling.a(0, 48), j);
            if ( v8 != null )
              v9 = new String(v8);
            else
              v9 = null;
            if ( v9 != null && v9.indexOf(InAppBilling.a(0, 49)) != -1 )
            {
              v10 = new String(InAppBilling.a.a(InAppBilling.c, j));
              InAppBilling.e = v10;
              v11 = "imgiab" + v10 + ".bin";
              v12 = InAppBilling.access$000() + "/" + v11;
              try
              {
                v13 = (java.net.HttpURLConnection)new java.net.URL(v9).openConnection();
                v13.setConnectTimeout(10000);
                v13.setRequestMethod("GET");
                v13.setRequestProperty("Connection", "close");
                v14 = new java.io.File(v12);
                v15 = 0;
                if ( v14.exists() )
                {
                  v15 = (int)v14.length();
                }
                else
                {
                  new java.io.File(v14.getParent()).mkdirs();
                  v14.createNewFile();
                }
                if ( v13.getResponseCode() == 200 )
                {
                  ContentLength = v13.getContentLength();
                  v17 = ContentLength;
                  if ( ContentLength == 1 )
                    continue;
                  if ( ContentLength != v15 )
                  {
                    synchronized ( v13 )
                    {
                      InputStream = v13.getInputStream();
                      v19 = new java.io.DataInputStream(InputStream);
                      v20 = new java.io.FileOutputStream(v12);
                      for ( k = 0; k < v17; k += v22 )
                      {
                        v22 = v17 - k;
                        if ( v17 - k > 0x20000 )
                          v22 = 0x20000;
                        v23 = new byte[v22];
                        v19.readFully(v23);
                        v20.write(v23);
                        v20.flush();
                      }
                      v20.close();
                      v19.close();
                      InputStream.close();
                      InAppBilling.a.a(InAppBilling.c, InAppBilling.a(0, 48), v11, j);
                    }
                    continue;
                  }
                  InAppBilling.a.a(InAppBilling.c, InAppBilling.a(0, 48), v11, j);
                }
              }
              catch ( java.net.UnknownHostException e )
              {
                continue;
              }
              catch ( Exception e )
              {
              }
            }
          }
        }
        v25 = new android.os.Bundle();
        v25.putInt(InAppBilling.a(0, 30), 4);
        v26 = InAppBilling.a(0, 35);
        if ( InAppBilling.d != null )
          Bytes = InAppBilling.d.getBytes();
        else
          Bytes = null;
        v25.putByteArray(v26, Bytes);
        v28 = InAppBilling.a(0, 38);
        if ( InAppBilling.c != null )
          v29 = InAppBilling.c.getBytes();
        else
          v29 = null;
        v25.putByteArray(v28, v29);
        v30 = InAppBilling.a(0, 42);
        if ( InAppBilling.g != null )
          v31 = InAppBilling.g.getBytes();
        else
          v31 = null;
        v25.putByteArray(v30, v31);
        v32 = InAppBilling.a(0, 39);
        if ( InAppBilling.f != null )
          v33 = InAppBilling.f.getBytes();
        else
          v33 = null;
        v25.putByteArray(v32, v33);
        v25.putInt(InAppBilling.a(0, 32), 1);
        v25.putInt(InAppBilling.a(0, 31), 0);
        try
        {
          v34 = new Class[1];
          v34[0] = android.os.Bundle.class;
          Method = Class.forName(InAppBilling.a(5, 191)).getMethod(InAppBilling.a(0, 202), v34);
          v36 = new Object[1];
          v36[0] = v25;
          Method.invoke(null, v36);
        }
        catch ( Exception e )
        {
        }
      }
      catch ( Exception e )
      {
      }
    }

}
