// Decompiled from classes.dex (SourceFile: t.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.TextUtils;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
final class t extends com.gameloft.android.GAND.GloftGGSS.iab.d {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.iab.v a;
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungHelper b;

    // Methods
    t(com.gameloft.android.GAND.GloftGGSS.iab.SamsungHelper p0, com.gameloft.android.GAND.GloftGGSS.iab.v p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a(android.os.Bundle p0)
    {
      int Int;
      String String; // RETVAL
      String v4;
      String v5;
      String v6;
      org.json.JSONObject v7;
      byte[] Bytes;
      String v9;
      byte[] v10;
      String v11;
      byte[] v12;
      String v13;
      byte[] v14;
      String v15;
      byte[] v16;
      String v17;
      byte[] v18;
      String v19;
      byte[] v20;
      String v21;
      byte[] v22;
      Class[] v23;
      java.lang.reflect.Method Method; // RETVAL
      Object[] v25;
      byte[] v26;
      String v27;
      byte[] v28;
      String v29;
      byte[] v30;
      String v31;
      byte[] v32;
      String v33;
      Class[] v34;
      java.lang.reflect.Method v35; // RETVAL
      Object[] v36;
      byte[] v37;
      String v38;
      byte[] v39;
      String v40;
      byte[] v41;
      String v42;
      byte[] v43;
      String v44;
      Class[] v45;
      java.lang.reflect.Method v46; // RETVAL
      Object[] v47;
      android.os.Bundle v48;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            Int = p0.getInt("a5");
            String = p0.getString("a4");
            v4 = String;
            if ( Int == 1 && !TextUtils.isEmpty(String) )
            {
            v5 = "";
            v6 = "";
            try
            {
            v7 = new org.json.JSONObject(v4);
            v5 = v7.getString("code");
            v6 = v7.getString("transaction_id");
            }
            catch ( org.json.JSONException e )
            {
            }
            if ( !TextUtils.isEmpty(v5) && p0.getInt("a6") == 201 )
            {
            try
            {
            if ( SUtils.getLManager().a(Integer.parseInt(v5)) )
            {
            p0.clear();
            p0.putInt(InAppBilling.a(0, 30), 2);
            Bytes = new String().getBytes();
            v9 = InAppBilling.a(0, 35);
            if ( this.a.a() != null )
            v10 = this.a.a().getBytes();
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
            v16 = InAppBilling.f.getBytes();
            else
            v16 = Bytes;
            p0.putByteArray(v15, v16);
            v17 = InAppBilling.a(0, 40);
            if ( this.a.b() != null )
            v18 = this.a.b().getBytes();
            else
            v18 = Bytes;
            p0.putByteArray(v17, v18);
            v19 = InAppBilling.a(0, 41);
            if ( v6 != null )
            v20 = v6.getBytes();
            else
            v20 = Bytes;
            p0.putByteArray(v19, v20);
            v21 = InAppBilling.a(0, 206);
            if ( this.a.c() != null )
            v22 = this.a.c().getBytes();
            else
            v22 = Bytes;
            p0.putByteArray(v21, v22);
            p0.putInt(InAppBilling.a(0, 32), 1);
            p0.putInt(InAppBilling.a(0, 31), 0);
            try
            {
            v23 = new Class[1];
            v23[0] = android.os.Bundle.class;
            Method = Class.forName(InAppBilling.a(5, 191)).getMethod(InAppBilling.a(0, 202), v23);
            v25 = new Object[1];
            v25[0] = p0;
            com.gameloft.android.DecompRT.discard((android.os.Bundle)Method.invoke(null, v25));
            }
            catch ( Exception e )
            {
            }
            InAppBilling.saveLastItem(7);
            InAppBilling.clear();
            return;
            }
            }
            catch ( Exception e )
            {
            }
            }
            SamsungHelper.access$402(true);
            { _pc = 1; continue _sm; }
            }
            if ( Int == -1 && !TextUtils.isEmpty(v4) && v4.contains("host") )
            {
            p0.getInt("a6");
            p0.clear();
            p0.putInt(InAppBilling.a(0, 30), 2);
            v37 = new String().getBytes();
            v38 = InAppBilling.a(0, 35);
            if ( InAppBilling.d != null )
            v39 = InAppBilling.d.getBytes();
            else
            v39 = v37;
            p0.putByteArray(v38, v39);
            v40 = InAppBilling.a(0, 38);
            if ( InAppBilling.c != null )
            v41 = InAppBilling.c.getBytes();
            else
            v41 = v37;
            p0.putByteArray(v40, v41);
            v42 = InAppBilling.a(0, 42);
            if ( InAppBilling.g != null )
            v43 = InAppBilling.g.getBytes();
            else
            v43 = v37;
            p0.putByteArray(v42, v43);
            v44 = InAppBilling.a(0, 39);
            if ( InAppBilling.f != null )
            v37 = InAppBilling.f.getBytes();
            p0.putByteArray(v44, v37);
            p0.putInt(InAppBilling.a(0, 32), 0);
            p0.putInt(InAppBilling.a(0, 31), 3);
            try
            {
            v45 = new Class[1];
            v45[0] = android.os.Bundle.class;
            v46 = Class.forName(InAppBilling.a(5, 191)).getMethod(InAppBilling.a(0, 202), v45);
            v47 = new Object[1];
            v47[0] = p0;
            v48 = (android.os.Bundle)v46.invoke(null, v47);
            }
            catch ( Exception e )
            {
            v48 = p0;
            }
            new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.u(this)).start();
            p0 = v48;
            { _pc = 1; continue _sm; }
            }
            SamsungHelper.access$402(true);
            _pc = 1;
            continue _sm;
          }
          case 1: {
            if ( SamsungHelper.access$400() )
            {
            InAppBilling.saveLastItem(8);
            InAppBilling.clear();
            p0.clear();
            p0.putInt(InAppBilling.a(0, 30), 2);
            v26 = new String().getBytes();
            v27 = InAppBilling.a(0, 35);
            if ( this.a.a() != null )
            v28 = this.a.a().getBytes();
            else
            v28 = v26;
            p0.putByteArray(v27, v28);
            v29 = InAppBilling.a(0, 38);
            if ( InAppBilling.c != null )
            v30 = InAppBilling.c.getBytes();
            else
            v30 = v26;
            p0.putByteArray(v29, v30);
            v31 = InAppBilling.a(0, 42);
            if ( InAppBilling.g != null )
            v32 = InAppBilling.g.getBytes();
            else
            v32 = v26;
            p0.putByteArray(v31, v32);
            v33 = InAppBilling.a(0, 39);
            if ( InAppBilling.f != null )
            v26 = InAppBilling.f.getBytes();
            p0.putByteArray(v33, v26);
            p0.putInt(InAppBilling.a(0, 32), 1);
            p0.putInt(InAppBilling.a(0, 31), 2);
            try
            {
            v34 = new Class[1];
            v34[0] = android.os.Bundle.class;
            v35 = Class.forName(InAppBilling.a(5, 191)).getMethod(InAppBilling.a(0, 202), v34);
            v36 = new Object[1];
            v36[0] = p0;
            v35.invoke(null, v36);
            }
            catch ( Exception e )
            {
            }
            }
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

}
