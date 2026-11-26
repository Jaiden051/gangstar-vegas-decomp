// Decompiled from classes.dex (SourceFile: SamsungIAB2Activity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.app.ProgressDialog;
import android.os.AsyncTask;
import android.text.TextUtils;
public class SamsungIAB2Activity extends android.app.Activity {
    // Fields
    static java.lang.String a;
    static java.lang.String b;
    private com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils c;
    private android.app.ProgressDialog d;
    private com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$GetItemListTask e;
    private com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$PurchaseItemTask f;
    private com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$RestoreTransactionTask g;
    private com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$VerifyClientToServerTask h;
    private java.lang.String i;
    private java.lang.String j;

    // Methods
    static
    {
      a = null;
      b = null;
    }

    public SamsungIAB2Activity()
    {
      super();
      this.c = null;
      this.d = null;
      this.e = null;
      this.f = null;
      this.g = null;
      this.h = null;
      this.i = null;
      this.j = null;
    }

    private android.app.ProgressDialog a(android.content.Context p0)
    {
      return ProgressDialog.show(p0, "", this.getString(2131165492), true);
    }

    private void a(int p0, int p1, String p2, boolean p3)
    {
      SamsungHelper.IABResultCallBack(p0, p1, p2);
      dismissProgressDialog(this.d);
      try
      {
        this.finish();
      }
      catch ( Exception e )
      {
      }
    }

    private void a(com.gameloft.android.GAND.GloftGGSS.iab.q p0)
    {
      try
      {
        if ( this.h != null && this.h.getStatus() != AsyncTask.Status.FINISHED )
          this.h.cancel(true);
        this.h = new com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$VerifyClientToServerTask(this, p0);
        this.h.execute(new Void[0]);
      }
      catch ( java.util.concurrent.RejectedExecutionException e )
      {
        this.a(1, true);
      }
      catch ( Exception e )
      {
        this.a(1, true);
      }
    }

    /* synthetic */ static void access$000(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity p0)
    {
      try
      {
        if ( p0.e != null && p0.e.getStatus() != AsyncTask.Status.FINISHED )
          p0.e.cancel(true);
        p0.e = new com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$GetItemListTask(p0, p0);
        p0.e.execute(new String[0]);
      }
      catch ( java.util.concurrent.RejectedExecutionException e )
      {
        p0.a(1, true);
      }
      catch ( Exception e )
      {
        p0.a(1, true);
      }
    }

    /* synthetic */ static void access$100(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity p0)
    {
      try
      {
        if ( p0.f != null && p0.f.getStatus() != AsyncTask.Status.FINISHED )
          p0.f.cancel(true);
        p0.f = new com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$PurchaseItemTask(p0, 0);
        p0.f.execute(new String[0]);
      }
      catch ( java.util.concurrent.RejectedExecutionException e )
      {
        p0.a(1, true);
      }
      catch ( Exception e )
      {
        p0.a(1, true);
      }
    }

    /* synthetic */ static void access$200(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity p0)
    {
      try
      {
        if ( p0.g != null && p0.g.getStatus() != AsyncTask.Status.FINISHED )
          p0.g.cancel(true);
        p0.g = new com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$RestoreTransactionTask(p0, p0);
        p0.g.execute(new String[0]);
      }
      catch ( java.util.concurrent.RejectedExecutionException e )
      {
        p0.a(1, true);
      }
      catch ( Exception e )
      {
        p0.a(1, true);
      }
    }

    /* synthetic */ static String access$300(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity p0)
    {
      return p0.j;
    }

    /* synthetic */ static com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils access$400(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity p0)
    {
      return p0.c;
    }

    /* synthetic */ static android.app.ProgressDialog access$500(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity p0)
    {
      return p0.d;
    }

    /* synthetic */ static String access$800(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity p0)
    {
      return p0.i;
    }

    private void b()
    {
      this.c.a(0);
      this.c.a((com.gameloft.android.GAND.GloftGGSS.iab.ak)new com.gameloft.android.GAND.GloftGGSS.iab.w(this));
    }

    private void c()
    {
      this.c.a(0);
      this.c.a((com.gameloft.android.GAND.GloftGGSS.iab.ak)new com.gameloft.android.GAND.GloftGGSS.iab.y(this));
    }

    private void d()
    {
      try
      {
        if ( this.e != null && this.e.getStatus() != AsyncTask.Status.FINISHED )
          this.e.cancel(true);
        this.e = new com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$GetItemListTask(this, this);
        this.e.execute(new String[0]);
      }
      catch ( java.util.concurrent.RejectedExecutionException e )
      {
        this.a(1, true);
      }
      catch ( Exception e )
      {
        this.a(1, true);
      }
    }

    public static void dismissProgressDialog(android.app.ProgressDialog p0)
    {
      if ( p0 != null )
      {
        try
        {
          if ( p0.isShowing() )
            p0.dismiss();
        }
        catch ( Exception e )
        {
        }
      }
    }

    private void e()
    {
      try
      {
        if ( this.f != null && this.f.getStatus() != AsyncTask.Status.FINISHED )
          this.f.cancel(true);
        this.f = new com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$PurchaseItemTask(this, 0);
        this.f.execute(new String[0]);
      }
      catch ( java.util.concurrent.RejectedExecutionException e )
      {
        this.a(1, true);
      }
      catch ( Exception e )
      {
        this.a(1, true);
      }
    }

    private void f()
    {
      try
      {
        if ( this.g != null && this.g.getStatus() != AsyncTask.Status.FINISHED )
          this.g.cancel(true);
        this.g = new com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$RestoreTransactionTask(this, this);
        this.g.execute(new String[0]);
      }
      catch ( java.util.concurrent.RejectedExecutionException e )
      {
        this.a(1, true);
      }
      catch ( Exception e )
      {
        this.a(1, true);
      }
    }

    public static String getPaymentId()
    {
      return b;
    }

    public static String getPurchaseId()
    {
      return a;
    }

    public final void a()
    {
      this.c.a(0);
      this.c.a((com.gameloft.android.GAND.GloftGGSS.iab.ak)new com.gameloft.android.GAND.GloftGGSS.iab.x(this));
    }

    public final void a(int p0, String p1, boolean p2)
    {
      this.a(1, null, true, null);
    }

    public final void a(int p0, String p1, boolean p2, String p3)
    {
      android.os.Bundle v5 = null;
      byte[] Bytes = null;
      org.json.JSONObject v7;
      String v8;
      String v9;
      byte[] v10;
      String v11;
      byte[] v12;
      String v13;
      byte[] v14;
      String v15;
      byte[] v16;
      String v17;
      Class[] v18;
      java.lang.reflect.Method Method; // RETVAL
      Object[] v20;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            SamsungHelper.b = false;
            v5 = new android.os.Bundle();
            Bytes = new String().getBytes();
            if ( p3 != null )
            {
            v7 = new org.json.JSONObject();
            if ( TextUtils.isEmpty(p3) )
            { _pc = 1; continue _sm; }
            try
            {
            v7.put(InAppBilling.a(0, 210), p3);
            v8 = v7.toString();
            }
            catch ( org.json.JSONException e )
            {
            v8 = "";
            }
            v9 = InAppBilling.a(0, 206);
            if ( v8 != null )
            v10 = v8.getBytes();
            else
            v10 = Bytes;
            v5.putByteArray(v9, v10);
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            v5.putInt(InAppBilling.a(0, 30), 8);
            v11 = InAppBilling.a(0, 35);
            if ( p1 != null )
            v12 = p1.getBytes();
            else
            v12 = Bytes;
            v5.putByteArray(v11, v12);
            v13 = InAppBilling.a(0, 38);
            if ( InAppBilling.c != null )
            v14 = InAppBilling.c.getBytes();
            else
            v14 = Bytes;
            v5.putByteArray(v13, v14);
            v15 = InAppBilling.a(0, 42);
            if ( InAppBilling.g != null )
            v16 = InAppBilling.g.getBytes();
            else
            v16 = Bytes;
            v5.putByteArray(v15, v16);
            v17 = InAppBilling.a(0, 39);
            if ( InAppBilling.f != null )
            Bytes = InAppBilling.f.getBytes();
            v5.putByteArray(v17, Bytes);
            v5.putInt(InAppBilling.a(0, 32), 0);
            v5.putInt(InAppBilling.a(0, 31), p0);
            try
            {
            v18 = new Class[1];
            v18[0] = android.os.Bundle.class;
            Method = Class.forName(InAppBilling.a(5, 191)).getMethod(InAppBilling.a(0, 202), v18);
            v20 = new Object[1];
            v20[0] = v5;
            Method.invoke(null, v20);
            if ( p2 )
            {
            dismissProgressDialog(this.d);
            this.finish();
            }
            }
            catch ( Exception e )
            {
            }
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    public final void a(int p0, boolean p1)
    {
      SamsungHelper.IABResultCallBack(p0);
      dismissProgressDialog(this.d);
      if ( p1 )
      {
        try
        {
          this.finish();
        }
        catch ( Exception e )
        {
        }
      }
    }

    protected void onActivityResult(int p0, int p1, android.content.Intent p2)
    {
      android.os.Bundle Extras; // RETVAL
      android.os.Bundle v5;
      int Int;
      String String;
      com.gameloft.android.GAND.GloftGGSS.iab.q v8;
      int v9;
      String v10;
      com.gameloft.android.GAND.GloftGGSS.iab.q v11;
      switch ( p0 )
      {
        case 1:
          if ( p2 != null )
          {
            Extras = p2.getExtras();
            v5 = Extras;
            if ( Extras != null )
            {
              Extras.getString("THIRD_PARTY_NAME");
              Int = v5.getInt("STATUS_CODE");
              String = v5.getString("ERROR_STRING");
              v5.getString("ITEM_ID");
              v8 = new com.gameloft.android.GAND.GloftGGSS.iab.q(v5.getString("RESULT_OBJECT"));
              v9 = Int;
              v10 = String;
              v11 = v8;
            }
            else
            {
              v10 = "";
              v11 = null;
              v9 = 1;
            }
            if ( p1 == -1 )
            {
              if ( v9 != 0 )
              {
                if ( v9 == -1003 )
                {
                  dismissProgressDialog(this.d);
                  SamsungHelper.c = true;
                  this.c.a(this, this.getString(2131165487), this.getString(2131165491), false, (Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.z(this), false);
                }
                else
                {
                  if ( SamsungIAB2Utils.C.containsKey(Integer.valueOf(v9)) )
                    v9 = ((Integer)SamsungIAB2Utils.C.get(Integer.valueOf(v9))).intValue();
                  this.a(2, v9, v10, true);
                }
              }
              else
              {
                a = v11.e();
                b = v11.d();
                this.a(0, true);
              }
            }
            else if ( p1 == 0 )
            {
              if ( SamsungIAB2Utils.C.containsKey(Integer.valueOf(v9)) )
                v9 = ((Integer)SamsungIAB2Utils.C.get(Integer.valueOf(v9))).intValue();
              this.a(1, v9, v10, true);
            }
          }
          break;
        case 2:
          if ( p1 == -1 )
          {
            if ( SamsungHelper.b )
            {
              this.c.a(0);
              this.c.a((com.gameloft.android.GAND.GloftGGSS.iab.ak)new com.gameloft.android.GAND.GloftGGSS.iab.y(this));
            }
            else
            {
              this.a();
            }
          }
          else if ( p1 == 0 )
          {
            if ( SamsungHelper.b )
              this.a(1, null, true);
            else
              this.a(1, true);
          }
          break;
        default:
          return;
      }
    }

    protected void onCreate(android.os.Bundle p0)
    {
      android.os.Bundle Extras; // RETVAL
      android.os.Bundle v3;
      super.onCreate(p0);
      a = null;
      b = null;
      Extras = this.getIntent().getExtras();
      v3 = Extras;
      if ( Extras != null )
      {
        this.i = Extras.getString("SamsungItemId");
        this.j = v3.getString("ItemGroupId");
      }
      this.c = new com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils(this);
      if ( this.c.a((android.content.Context)this) )
      {
        if ( SamsungIAB2Utils.isValidIapPackage(this) )
        {
          this.d = ProgressDialog.show(this, "", this.getString(2131165492), true);
          SamsungIAB2Utils.startAccountActivity(this);
        }
        else if ( SamsungHelper.b )
        {
          this.a(1, null, true);
        }
        else
        {
          this.a(1, true);
        }
      }
      else
      {
        this.c.a(this);
      }
    }

    protected void onDestroy()
    {
      super.onDestroy();
      if ( this.c != null )
        this.c.b();
      if ( this.f != null && this.f.getStatus() != AsyncTask.Status.FINISHED )
        this.f.cancel(true);
      if ( this.e != null && this.e.getStatus() != AsyncTask.Status.FINISHED )
        this.e.cancel(true);
      if ( this.h != null && this.h.getStatus() != AsyncTask.Status.FINISHED )
        this.h.cancel(true);
    }

    protected void onStop()
    {
      dismissProgressDialog(this.d);
      super.onStop();
    }

}
