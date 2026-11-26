// Decompiled from classes.dex (SourceFile: SamsungHelper.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.TextUtils;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import com.gameloft.android.GAND.GloftGGSS.billing.common.LManager;
public class SamsungHelper extends com.gameloft.android.GAND.GloftGGSS.iab.k {
    // Fields
    public static boolean b;
    public static boolean c;
    static com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer d;
    static com.gameloft.android.GAND.GloftGGSS.iab.SamsungHelper e;
    private static java.lang.String f;
    private static com.gameloft.android.GAND.GloftGGSS.billing.common.AServerInfo g;
    private static com.gameloft.android.GAND.GloftGGSS.GLUtils.Device h;
    private static boolean j;
    private static boolean k;
    private java.lang.String i;

    // Methods
    static
    {
      f = null;
      b = false;
      c = false;
      j = false;
      k = false;
    }

    SamsungHelper(com.gameloft.android.GAND.GloftGGSS.billing.common.AServerInfo p0)
    {
      super(p0);
      this.i = null;
      h = new com.gameloft.android.GAND.GloftGGSS.GLUtils.Device(p0);
      d = new com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer(h);
      g = p0;
      e = this;
    }

    public static String GetContentId()
    {
      return f;
    }

    public static String GetGroupId()
    {
      return getServerInfo().b(GetContentId(), "group_id");
    }

    public static String GetSamsungItemId()
    {
      return getServerInfo().b(GetContentId(), "samsung_item_id");
    }

    public static void IABResultCallBack(int p0)
    {
      android.os.Bundle v1;
      byte[] Bytes;
      String v3;
      byte[] v4;
      String v5;
      byte[] v6;
      String v7;
      Class[] v8;
      java.lang.reflect.Method Method; // RETVAL
      Object[] v10;
      String v11;
      byte[] v12;
      String v13;
      byte[] v14;
      String v15;
      byte[] v16;
      String v17;
      Class[] v18;
      java.lang.reflect.Method v19; // RETVAL
      Object[] v20;
      v1 = new android.os.Bundle();
      Bytes = new String().getBytes();
      if ( b )
      {
        if ( p0 != 0 || c )
        {
          v1.putInt(InAppBilling.a(0, 30), 8);
          v1.putByteArray(InAppBilling.a(0, 35), Bytes);
          v3 = InAppBilling.a(0, 38);
          if ( GetContentId() != null )
            v4 = GetContentId().getBytes();
          else
            v4 = Bytes;
          v1.putByteArray(v3, v4);
          v5 = InAppBilling.a(0, 42);
          if ( InAppBilling.g != null )
            v6 = InAppBilling.g.getBytes();
          else
            v6 = Bytes;
          v1.putByteArray(v5, v6);
          v7 = InAppBilling.a(0, 39);
          if ( InAppBilling.f != null )
            Bytes = InAppBilling.f.getBytes();
          v1.putByteArray(v7, Bytes);
          v1.putInt(InAppBilling.a(0, 32), 1);
          v1.putInt(InAppBilling.a(0, 31), p0);
          try
          {
            v8 = new Class[1];
            v8[0] = android.os.Bundle.class;
            Method = Class.forName(InAppBilling.a(5, 191)).getMethod(InAppBilling.a(0, 202), v8);
            v10 = new Object[1];
            v10[0] = v1;
            Method.invoke(null, v10);
          }
          catch ( Exception e )
          {
          }
        }
        else
        {
          e.b();
        }
      }
      else if ( p0 != 0 || c )
      {
        v1.putInt(InAppBilling.a(0, 30), 2);
        v11 = InAppBilling.a(0, 35);
        if ( GetContentId() != null )
          v12 = GetContentId().getBytes();
        else
          v12 = Bytes;
        v1.putByteArray(v11, v12);
        v13 = InAppBilling.a(0, 38);
        if ( GetContentId() != null )
          v14 = GetContentId().getBytes();
        else
          v14 = Bytes;
        v1.putByteArray(v13, v14);
        v15 = InAppBilling.a(0, 42);
        if ( InAppBilling.g != null )
          v16 = InAppBilling.g.getBytes();
        else
          v16 = Bytes;
        v1.putByteArray(v15, v16);
        v17 = InAppBilling.a(0, 39);
        if ( InAppBilling.f != null )
          Bytes = InAppBilling.f.getBytes();
        v1.putByteArray(v17, Bytes);
        v1.putInt(InAppBilling.a(0, 32), 1);
        v1.putInt(InAppBilling.a(0, 31), p0);
        try
        {
          v18 = new Class[1];
          v18[0] = android.os.Bundle.class;
          v19 = Class.forName(InAppBilling.a(5, 191)).getMethod(InAppBilling.a(0, 202), v18);
          v20 = new Object[1];
          v20[0] = v1;
          v19.invoke(null, v20);
        }
        catch ( Exception e )
        {
        }
      }
      else
      {
        e.a(new com.gameloft.android.GAND.GloftGGSS.iab.v(InAppBilling.d, SamsungIAB2Activity.getPurchaseId(), SamsungIAB2Activity.getPaymentId()));
      }
      b = false;
    }

    public static void IABResultCallBack(int p0, int p1, String p2)
    {
      android.os.Bundle v3;
      byte[] Bytes;
      String v5;
      byte[] v6;
      String v7;
      byte[] v8;
      String v9;
      Class[] v10;
      java.lang.reflect.Method Method; // RETVAL
      Object[] v12;
      String v13;
      byte[] v14;
      String v15;
      byte[] v16;
      String v17;
      byte[] v18;
      String v19;
      String v20;
      byte[] v21;
      Class[] v22;
      java.lang.reflect.Method v23; // RETVAL
      Object[] v24;
      v3 = new android.os.Bundle();
      Bytes = new String().getBytes();
      if ( b )
      {
        if ( p0 != 0 || c )
        {
          v3.putInt(InAppBilling.a(0, 30), 8);
          v3.putByteArray(InAppBilling.a(0, 35), Bytes);
          v5 = InAppBilling.a(0, 38);
          if ( GetContentId() != null )
            v6 = GetContentId().getBytes();
          else
            v6 = Bytes;
          v3.putByteArray(v5, v6);
          v7 = InAppBilling.a(0, 42);
          if ( InAppBilling.g != null )
            v8 = InAppBilling.g.getBytes();
          else
            v8 = Bytes;
          v3.putByteArray(v7, v8);
          v9 = InAppBilling.a(0, 39);
          if ( InAppBilling.f != null )
            Bytes = InAppBilling.f.getBytes();
          v3.putByteArray(v9, Bytes);
          v3.putInt(InAppBilling.a(0, 32), 1);
          v3.putInt(InAppBilling.a(0, 31), p0);
          try
          {
            v10 = new Class[1];
            v10[0] = android.os.Bundle.class;
            Method = Class.forName(InAppBilling.a(5, 191)).getMethod(InAppBilling.a(0, 202), v10);
            v12 = new Object[1];
            v12[0] = v3;
            Method.invoke(null, v12);
          }
          catch ( Exception e )
          {
          }
        }
        else
        {
          e.b();
        }
      }
      else if ( p0 != 0 || c )
      {
        v3.putInt(InAppBilling.a(0, 30), 2);
        v13 = InAppBilling.a(0, 35);
        if ( GetContentId() != null )
          v14 = GetContentId().getBytes();
        else
          v14 = Bytes;
        v3.putByteArray(v13, v14);
        v15 = InAppBilling.a(0, 38);
        if ( GetContentId() != null )
          v16 = GetContentId().getBytes();
        else
          v16 = Bytes;
        v3.putByteArray(v15, v16);
        v17 = InAppBilling.a(0, 42);
        if ( InAppBilling.g != null )
          v18 = InAppBilling.g.getBytes();
        else
          v18 = Bytes;
        v3.putByteArray(v17, v18);
        v19 = InAppBilling.a(0, 39);
        if ( InAppBilling.f != null )
          Bytes = InAppBilling.f.getBytes();
        v3.putByteArray(v19, Bytes);
        v20 = InAppBilling.a(0, 83);
        if ( p2 != null )
          v21 = p2.getBytes();
        else
          v21 = null;
        v3.putByteArray(v20, v21);
        v3.putInt(InAppBilling.a(0, 82), p1);
        v3.putInt(InAppBilling.a(0, 32), 1);
        v3.putInt(InAppBilling.a(0, 31), p0);
        try
        {
          v22 = new Class[1];
          v22[0] = android.os.Bundle.class;
          v23 = Class.forName(InAppBilling.a(5, 191)).getMethod(InAppBilling.a(0, 202), v22);
          v24 = new Object[1];
          v24[0] = v3;
          v23.invoke(null, v24);
        }
        catch ( Exception e )
        {
        }
      }
      else
      {
        e.a(new com.gameloft.android.GAND.GloftGGSS.iab.v(InAppBilling.d, SamsungIAB2Activity.getPurchaseId(), SamsungIAB2Activity.getPaymentId()));
      }
      b = false;
    }

    private String a(com.gameloft.android.GAND.GloftGGSS.GLUtils.Device p0)
    {
      org.json.JSONObject v2;
      int v3;
      String v4;
      String v5;
      String v6;
      v2 = new org.json.JSONObject();
      v3 = 0;
      try
      {
        v2.put(InAppBilling.a(0, 182), Device.getUserAgent());
        v2.put(InAppBilling.a(0, 167), Device.getHDIDFV());
        v2.put(InAppBilling.a(0, 168), Device.getGLDID());
        v2.put(InAppBilling.a(0, 163), "53689");
        v4 = InAppBilling.a(6, 1);
        if ( TextUtils.isEmpty(v4) )
          v4 = "0";
        v2.put(InAppBilling.a(0, 165), v4);
        v5 = "1622:53689:1.8.2:android:samsung";
        if ( TextUtils.isEmpty("1622:53689:1.8.2:android:samsung") )
          v5 = "0";
        v2.put(InAppBilling.a(0, 170), v5);
        v6 = InAppBilling.a(7, 2);
        if ( TextUtils.isEmpty(v6) )
          v6 = "0";
        v2.put(InAppBilling.a(0, 169), v6);
        v2.put("x-up-gl-subno", Device.getLineNumber());
        v2.put(InAppBilling.a(0, 161), this.i);
        v2.put(InAppBilling.a(0, 175), InAppBilling.a(15, 5));
        return v2.toString();
      }
      catch ( org.json.JSONException e )
      {
        return null;
      }
    }

    private void a(com.gameloft.android.GAND.GloftGGSS.iab.v p0)
    {
      com.gameloft.android.GAND.GloftGGSS.iab.IABRequestHandler Instance;
      com.gameloft.android.GAND.GloftGGSS.billing.common.AServerInfo ServerInfo;
      com.gameloft.android.GAND.GloftGGSS.GLUtils.Device v4;
      StringBuffer v5;
      Instance = IABRequestHandler.getInstance();
      ServerInfo = getServerInfo();
      v4 = new com.gameloft.android.GAND.GloftGGSS.GLUtils.Device();
      v5 = new StringBuffer();
      SUtils.getLManager();
      LManager.setRandomCodeNumber(Device.createUniqueCode());
      k = false;
      try
      {
        ServerInfo.a(p0.a());
      }
      catch ( Exception e )
      {
      }
      v5.append("game=" + Device.getDemoCode());
      v5.append("&content_id=" + IABRequestHandler.encodeString(p0.a()));
      v5.append("&price=" + IABRequestHandler.encodeString(ServerInfo.c()));
      v5.append("&money_id=" + IABRequestHandler.encodeString(ServerInfo.u()));
      SUtils.getLManager();
      v5.append("&security_code=" + LManager.getRandomCodeNumber());
      v5.append("&purchaseId=" + p0.b());
      Instance.b(g.t(), v5.toString(), this.a(v4), new com.gameloft.android.GAND.GloftGGSS.iab.t(this, p0));
    }

    /* synthetic */ static String access$000(com.gameloft.android.GAND.GloftGGSS.iab.SamsungHelper p0)
    {
      return p0.i;
    }

    /* synthetic */ static String access$002(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungHelper p0,
            String p1)
    {
      p0.i = p1;
      return p1;
    }

    /* synthetic */ static void access$100(com.gameloft.android.GAND.GloftGGSS.iab.SamsungHelper p0)
    {
      launchSamsungIAB();
    }

    /* synthetic */ static boolean access$202(boolean p0)
    {
      j = p0;
      return p0;
    }

    /* synthetic */ static com.gameloft.android.GAND.GloftGGSS.billing.common.AServerInfo access$300()
    {
      return g;
    }

    /* synthetic */ static boolean access$400()
    {
      return k;
    }

    /* synthetic */ static boolean access$402(boolean p0)
    {
      k = p0;
      return p0;
    }

    /* synthetic */ static void access$500(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungHelper p0,
            com.gameloft.android.GAND.GloftGGSS.iab.v p1)
    {
      p0.a(p1);
    }

    private void f()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.IABRequestHandler Instance;
      StringBuffer v2;
      Instance = IABRequestHandler.getInstance();
      v2 = new StringBuffer(InAppBilling.a(0, 160));
      v2.append("config/");
      v2.append("1622:53689:1.8.2:android:samsung");
      v2.append("/datacenters");
      Instance.a(v2.toString(), null, new com.gameloft.android.GAND.GloftGGSS.iab.r(this));
    }

    static com.gameloft.android.GAND.GloftGGSS.billing.common.AServerInfo getServerInfo()
    {
      return g;
    }

    private static void launchSamsungIAB()
    {
      android.content.Intent v0;
      v0 = new android.content.Intent(SUtils.getContext(), com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity.class);
      v0.putExtra("SamsungItemId", GetSamsungItemId());
      v0.putExtra("ItemGroupId", GetGroupId());
      SUtils.getContext().startActivity(v0);
    }

    static void xsendConfirmation()
    {
      if ( g == null )
        g = getServerInfo();
      if ( !j )
        new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.s()).start();
    }

    /* bridge */ public final void a(String p0)
    {
      ;
    }



    public final void b()
    {
      xsendConfirmation();
    }

    public final boolean b(String p0)
    {
      f = p0;
      b = false;
      c = false;
      launchSamsungIAB();
      return true;
    }



    public final boolean d()
    {
      android.content.Intent v1;
      f = getServerInfo().b();
      b = true;
      c = false;
      if ( GetGroupId() != null )
      {
        v1 = new android.content.Intent(SUtils.getContext(), com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity.class);
        v1.putExtra("ItemGroupId", GetGroupId());
        SUtils.getContext().startActivity(v1);
      }
      else
      {
        IABResultCallBack(2);
      }
      return true;
    }

    public final void e()
    {
      ;
    }

}
