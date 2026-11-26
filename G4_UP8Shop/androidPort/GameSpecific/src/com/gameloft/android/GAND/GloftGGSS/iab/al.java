// Decompiled from classes.dex (SourceFile: al.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.TextUtils;
final class al extends com.gameloft.android.GAND.GloftGGSS.iab.d {
    // Fields
    final java.lang.String a;
    final com.gameloft.android.GAND.GloftGGSS.iab.d b;
    final com.gameloft.android.GAND.GloftGGSS.iab.ServerInfo c;

    // Methods
    al(com.gameloft.android.GAND.GloftGGSS.iab.ServerInfo p0, String p1, com.gameloft.android.GAND.GloftGGSS.iab.d p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public final void a(android.os.Bundle p0)
    {
      String String;
      String v3; // RETVAL
      String v4;
      android.os.Bundle v5;
      byte[] Bytes; // RETVAL
      byte[] v7;
      byte[] v8;
      byte[] v9;
      Class[] v10;
      java.lang.reflect.Method Method; // RETVAL
      Object[] v12;
      int Int;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            if ( p0.getInt("a5") != 1 )
            {
            p0.getInt("a6");
            { _pc = 1; continue _sm; }
            }
            String = p0.getString("a4");
            v3 = p0.getString("a7");
            try
            {
            v4 = new org.json.JSONObject(v3).getString("X-InApp-Hash");
            }
            catch ( org.json.JSONException e )
            {
            v4 = null;
            }
            ServerInfo.access$002(this.c, null);
            v5 = new android.os.Bundle();
            v5.putInt(InAppBilling.a(0, 30), 14);
            Bytes = new String().getBytes();
            v7 = Bytes;
            if ( String != null )
            v8 = String.getBytes();
            else
            v8 = Bytes;
            v5.putByteArray("data", v8);
            if ( this.a != null )
            v9 = this.a.getBytes();
            else
            v9 = v7;
            v5.putByteArray("nounce", v9);
            if ( v4 != null )
            v7 = v4.getBytes();
            v5.putByteArray("hash", v7);
            try
            {
            v10 = new Class[1];
            v10[0] = android.os.Bundle.class;
            Method = Class.forName(InAppBilling.a(5, 191)).getMethod(InAppBilling.a(0, 202), v10);
            v12 = new Object[1];
            v12[0] = v5;
            Int = ((android.os.Bundle)Method.invoke(null, v12)).getInt("R");
            }
            catch ( Exception e )
            {
            Int = -1;
            }
            if ( !TextUtils.isEmpty(String) && Int == 0 )
            ServerInfo.access$100(this.c, new org.xml.sax.InputSource(new java.io.ByteArrayInputStream(String.getBytes())));
            _pc = 1;
            continue _sm;
          }
          case 1: {
            this.b.a(null);
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

}
