// Decompiled from classes.dex (SourceFile: r.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.TextUtils;
import org.json.JSONObject;
final class r extends com.gameloft.android.GAND.GloftGGSS.iab.d {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungHelper a;

    // Methods
    r(com.gameloft.android.GAND.GloftGGSS.iab.SamsungHelper p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(android.os.Bundle p0)
    {
      int Int;
      String String; // RETVAL
      String v4;
      org.json.JSONArray v5;
      int i;
      org.json.JSONObject JSONObject;
      byte[] Bytes;
      String v9;
      byte[] v10;
      String v11;
      byte[] v12;
      String v13;
      byte[] v14;
      String v15;
      Class[] v16;
      java.lang.reflect.Method Method; // RETVAL
      Object[] v18;
      Int = p0.getInt("a5");
      String = p0.getString("a4");
      v4 = String;
      if ( Int == 1 && !TextUtils.isEmpty(String) )
      {
        try
        {
          v5 = new org.json.JSONArray(v4);
          for ( i = 0; i < v5.length(); ++i )
          {
            JSONObject = v5.getJSONObject(i);
            if ( JSONObject.getBoolean("preferred") )
            {
              SamsungHelper.access$002(this.a, JSONObject.getString("name"));
              break;
            }
          }
          if ( !TextUtils.isEmpty(SamsungHelper.access$000(this.a)) )
          {
            SamsungHelper.access$100(this.a);
            return;
          }
        }
        catch ( Exception e )
        {
        }
      }
      InAppBilling.saveLastItem(8);
      InAppBilling.clear();
      p0.clear();
      p0.putInt(InAppBilling.a(0, 30), 2);
      Bytes = new String().getBytes();
      v9 = InAppBilling.a(0, 35);
      if ( InAppBilling.d != null )
        v10 = InAppBilling.d.getBytes();
      else
        v10 = Bytes;
      p0.putByteArray(v9, v10);
      v11 = InAppBilling.a(0, 38);
      if ( InAppBilling.c != null )
        v12 = InAppBilling.c.getBytes();
      else
        v12 = Bytes;
      p0.putByteArray(v11, v12);
      v13 = InAppBilling.a(0, 42);
      if ( InAppBilling.g != null )
        v14 = InAppBilling.g.getBytes();
      else
        v14 = Bytes;
      p0.putByteArray(v13, v14);
      v15 = InAppBilling.a(0, 39);
      if ( InAppBilling.f != null )
        Bytes = InAppBilling.f.getBytes();
      p0.putByteArray(v15, Bytes);
      p0.putInt(InAppBilling.a(0, 32), 1);
      p0.putInt(InAppBilling.a(0, 31), 2);
      try
      {
        v16 = new Class[1];
        v16[0] = android.os.Bundle.class;
        Method = Class.forName(InAppBilling.a(5, 191)).getMethod(InAppBilling.a(0, 202), v16);
        v18 = new Object[1];
        v18[0] = p0;
        Method.invoke(null, v18);
      }
      catch ( Exception e )
      {
      }
    }

}
